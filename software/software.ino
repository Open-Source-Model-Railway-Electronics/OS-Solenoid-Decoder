#include "src/macros.h"
#include "src/NmraDcc.h"
#include "config.h"
#include "types.h"
#include "CoilDriver.h"
#include "CoilManager.h"
#include "ConfigMenu.h"
#include "DccCallbacks.h"
#include "pwm.h"
#include "src/debounceClass.h"
#include "src/Trigger.h"
#include "src/Timers.h"
#include <EEPROM.h>
#include "src/LedBlink.h"
#include "src/Logger.h"
#include "src/Simulator.h"



/******* SK NOTES **********

  Welcome to the new OSSD Mk2 source code.

LASTWORK:
I redid the PWM part to a more hardcoded approach. It need to be tested thoroughly.
coilClass now can handle it's own pulse timing. PWM for any pulsed type is therefor no longer possible.addressReceived


TODO:
The new PWM part need a solution to work with DORMENT outputs.

TEST EVERYTHING
rename yellow and blue led to leftLed and rightLed.  They're both red anyways  DONE

enforce faster update when an output is set. Especially a set coil has specific timing requirements. DONE, TEST ME!


BRAINWAVES:
We could also let coil class handle it's own pulse timer for pulsed outputs and reserve PWM especially for steady outputs DONE, TEST ME!
Perhaps that the coilClass should only do it's own pulse timer for double pulse timer, for single types it is not that important. DONE TEST ME


*/




// ── Global objects ────────────────────────────────────────────────────────────
NmraDcc     dcc ;
CoilDriver  coil[nCoils] ;
Debounce    configButton ;
Logger      logger ;
Simulator   sim ;
LedBlink    rightLed( rightLedPin ) ;
LedBlink    leftLed(  leftLedPin  ) ;
BlinkTimer  commitStates ;

// ── Settings ──────────────────────────────────────────────────────────────────
Settings defaultSettings =
{
    .uniqueAddresses = 0,
    .dccExt          = 0,
    .locoFunctions   = LOCO_FUNCTIONS_OFF,
    .maxCduVoltage   = 0,
    .hasCdu          = 0,
    .rcn213          = 1
} ;

Settings settings ;

CoilRecord coilSettings[nCoils] ;

// ── Config menu state ─────────────────────────────────────────────────────────
uint8_t              state     = idle ;
uint32_t             beginTime = 0 ;
uint8_t              coilIndex = 0 ;
volatile uint16_t    receivedAddress ;
volatile uint8_t     newAddressSet ;

// ── Runtime ───────────────────────────────────────────────────────────────────
uint8_t  runMode    = 1 ;
uint32_t lockoutTime ;

// ── Short-circuit ADC threshold  (5A @ 0.0125R shunt, 1024 steps, 5V ref) ────
static const uint8_t  R_shunt = 125 ;
static const uint8_t  I_max   =   5 ;
static const uint16_t V_max   = (uint16_t)R_shunt * I_max ;
static const uint8_t  ADC_max = ((uint32_t)1024 * V_max) / ((uint32_t)5 * 10000) ;

// ─────────────────────────────────────────────────────────────────────────────

void determineLedPattern()
{
    uint8_t currentPreset = getPreset() ;

    if( state == idle ) switch( currentPreset )
    {
        case DOUBLE_COIL_PULSED:        rightLed.bleep(  1 ) ; leftLed.bleep(  1 ) ; break ; // both bleep
        case DOUBLE_COIL_CONTINUOUSLY:  rightLed.turn(  ON ) ; leftLed.turn(  ON ) ; break ; // both on
        case SINGLE_COIL_PULSED:        rightLed.turn( OFF ) ; leftLed.bleep(  1 ) ; break ; //  1 bleep
        case SINGLE_COIL_CONTINUOUSLY:  rightLed.turn( OFF ) ; leftLed.turn(  ON ) ; break ; //  1 on
        case DOUBLE_PULSE_W_FROG:       rightLed.turn(  ON ) ; leftLed.bleep(  2 ) ; break ; // 1 on + 2 bleeps
        default:                        rightLed.bleep(  1 ) ; leftLed.turn(  ON ) ; break ; // 1 bleep + 1 on
    }

    else switch( state )
    {
        case checkButton:           rightLed.turn( OFF ) ; leftLed.turn( OFF ) ;        break ;

        case setIndex4Address:      rightLed.bleep( 1 ) ; leftLed.turn( OFF ) ; break ;
        case setIndex4Type:         rightLed.bleep( 2 ) ; leftLed.turn( OFF ) ; break ;
        case setIndex4pulse:        rightLed.bleep( 3 ) ; leftLed.turn( OFF ) ; break ;
        case setIndex4dutyCycle:    rightLed.bleep( 4 ) ; leftLed.turn( OFF ) ; break ;
        case configMode:            rightLed.bleep( 5 ) ; leftLed.turn( OFF ) ; break ;

        case setBaseAddress:        rightLed.bleep( 1 ) ; leftLed.turn( ON ) ; break ;
        case setUniqueAddress:      rightLed.bleep( 1 ) ; leftLed.turn( ON ) ; break ;
        case setCoilType:           rightLed.bleep( 2 ) ; leftLed.turn( ON ) ; break ;
        case setPulseTime:          rightLed.bleep( 3 ) ; leftLed.turn( ON ) ; break ;
        case setDutyCycle_:         rightLed.bleep( 4 ) ; leftLed.turn( ON ) ; break ;
    }
}

void saveStates()
{
    if( commitStates.update(1) )
        saveCoils() ;
}

void updateCduVoltage()
{
    static BlinkTimer timer( 2000 ) ;
    if( timer.update(1) )
    {
        uint16_t voltage = analogRead( coilVoltagePin ) ;
        if( voltage > settings.maxCduVoltage + 3 )
        {
            settings.maxCduVoltage = voltage ;
            EEPROM.put( EE_SETTINGS, settings ) ;
        }
    }
}

uint8_t deadbeef()
{
    const int DEADBEEF_EE_ADDRESS = 1020 ;
    uint32_t  DEADBEEF ;
    EEPROM.get( DEADBEEF_EE_ADDRESS, DEADBEEF ) ;

    if( DEADBEEF != 0xDEADBEEF )
    {   DEADBEEF  = 0xDEADBEEF ;
        EEPROM.put( DEADBEEF_EE_ADDRESS, DEADBEEF ) ;
        return 1 ;
    }
    return 0 ;
}

void notifyLog( const __FlashStringHelper* name, uint32_t value )
{
    Serial.print( name ) ;
    Serial.print( F(" -> ") ) ;
    Serial.println( value ) ;
}

// ─────────────────────────────────────────────────────────────────────────────

void setup()
{
    Serial.begin( 115200 ) ;

    commitStates.setTime( 1000 ) ;
    configButton.begin( configPin ) ;

    for( int i = 0 ; i < nGpio ; i ++ )
    {
        pinMode( GPIO[i], OUTPUT ) ;
    }

    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 0] ), "GPIO01" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 1] ), "GPIO02" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 2] ), "GPIO03" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 3] ), "GPIO04" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 4] ), "GPIO05" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 5] ), "GPIO06" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 6] ), "GPIO07" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 7] ), "GPIO08" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 8] ), "GPIO09" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[ 9] ), "GPIO10" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[10] ), "GPIO11" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[11] ), "GPIO12" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[12] ), "GPIO13" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[13] ), "GPIO14" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[14] ), "GPIO15" ) ;
    logger.SUBSCRIBE_BOOL( digitalRead( GPIO[15] ), "GPIO16" ) ;

    // sim.ADD(  100,  "hold config button",  digitalWrite( configPin, LOW  ) ) ;  // 1
    // sim.ADD( 3500,  "release button",       digitalWrite( configPin, HIGH ) ) ;  // 2
    // sim.ADD(  200,  "send DCC address 1",   notifyDccAccTurnoutOutput( 1, 1, 1 ) ) ; // 3

    rightLed.begin() ;
     leftLed.begin() ;

    if( deadbeef() )
    {
        EEPROM.put( EE_SETTINGS, defaultSettings ) ;

        for( int i = 0 ; i < nCoils ; i ++ )
        {
            coil[i].setType(      DOUBLE_COIL_PULSED        ) ;
            coil[i].setPulseTime( DEF_DOUBLE_PULSE_TIME     ) ;
            coil[i].setAddress(   i + 1                     ) ;
            coil[i].setDutyCycle( DEF_DUTYCYCLE             ) ;
            coil[i].setStates(    0, 0                      ) ;
        }
        saveCoils() ;
    }

    EEPROM.get( EE_SETTINGS, settings ) ;
    loadCoils() ;

    dcc.pin( 2, 0 ) ;
    dcc.init( MAN_ID_DIY, 11, FLAGS_OUTPUT_ADDRESS_MODE | FLAGS_DCC_ACCESSORY_DECODER, 0 ) ;
}


void loop()
{
    logger.Log() ;
    sim.Run() ;

    determineLedPattern() ;
    rightLed.update() ;
     leftLed.update() ;

    updatePwm() ;
    dcc.process() ;
    config() ;

    REPEAT_MS( 1 )
    {
        int sample = analogRead( currentSensePin ) ;
        if( sample >= ADC_max )
        {
            for( int i = 0 ; i < nGpio ; i ++ )
                digitalWrite( GPIO[i], LOW ) ; // kill all outputs

            rightLed.setEventBleeps( 5 ) ;
             leftLed.setEventBleeps( 5 ) ;

            runMode     = 0 ;
            lockoutTime = millis() ;
        }
    }
    END_REPEAT

    if( runMode == 0 && (millis() - lockoutTime) >= 5001 )
    {
        for( int i = 0 ; i < nCoils ; i++ ) coil[i].recover() ; // resync CoilDriver after GPIO kill
        runMode = 1 ;
    }

    if( runMode == 1 )
    {
        static uint8_t index     = 0 ;
        static bool    activated = false ;

        int voltage = analogRead( coilVoltagePin ) ;
        if( settings.hasCdu == 0
        ||  (!activated && voltage >= (settings.maxCduVoltage * 9 / 10)) ) activated = true ;

        if( activated )
        {
            if( coil[index].update() )
            {
                iterate( index, nCoils ) ;
                activated = false ;
            }
        }
    }

    saveStates() ;
    updateCduVoltage() ;
}
