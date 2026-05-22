#include "ConfigMenu.h"

uint8_t addressReceived()
{
    if( newAddressSet )
    {   newAddressSet = false ;

          rightLed.setEventBleeps( 3 ) ;
        leftLed.setEventBleeps( 3 ) ;

        return 1 ;
    }
    return 0 ;
}

/***** CONFIGURATION MENU ********/
void config()
{
    static uint8_t   nextState = 0 ;
    static R_trigger menu1 ; // -> get address OR get index for address
    static R_trigger menu2 ; // -> get index for type
    static R_trigger menu3 ; // -> get index for pulse length
    static R_trigger menu4 ; // -> enable PWM dutycycle
    static R_trigger menu5 ; // -> option menu

    REPEAT_MS( 20 )
    {
        configButton.debounceInputs() ;
    }
    END_REPEAT

    uint8_t btnState = configButton.getState() ;

    if( btnState == FALLING && state != idle ) // quit menu
    {
        state    = idle ;
        btnState = LOW ;
    }

    int i ;
    switch( state )
    {
    case idle:
        if( btnState == FALLING )
        {
            beginTime     = millis() ;
            state         = checkButton ;
            nextState     = setBaseAddress ;
            newAddressSet = 0 ;
        }
        break ;

    case checkButton:
        if( menu1.trigger( millis() - beginTime >     1 ) ) { nextState = setBaseAddress     ; rightLed.setEventBleeps(1) ; }
        if( menu2.trigger( millis() - beginTime >  2000 ) ) { nextState = setIndex4Type      ; rightLed.setEventBleeps(2) ; }
        if( menu3.trigger( millis() - beginTime >  4000 ) ) { nextState = setIndex4pulse     ; rightLed.setEventBleeps(3) ; }
        if( menu4.trigger( millis() - beginTime >  6000 ) ) { nextState = setIndex4dutyCycle ; rightLed.setEventBleeps(4) ; }
        if( menu5.trigger( millis() - beginTime >  8000 ) ) { nextState = configMode         ; rightLed.setEventBleeps(5) ; }

        if( btnState == RISING ) { state = nextState ; }
        break ;


// MENU 1
    case setBaseAddress:
        if( settings.uniqueAddresses )
        {
            state = setIndex4Address ;
        }
        if( addressReceived() )
        {
            coil[0].setAddress( receivedAddress ) ;
            squashAddresses() ;
            saveCoils() ;
            state = idle ;
        }
        break ;

    case setIndex4Address:
        if( addressReceived() )
        {
            coilIndex = constrain( receivedAddress, 1, nCoils ) - 1 ;
            state = setUniqueAddress ;
        }
        break ;

    case setUniqueAddress:
        if( addressReceived() )
        {
            coil[coilIndex].setAddress( receivedAddress ) ;
            saveCoils() ;
            state = setIndex4Address ;
        }
        break ;


// MENU 2
    case setIndex4Type:
        if( addressReceived() )
        {
            coilIndex = constrain( receivedAddress, 1, nCoils ) - 1 ;
            state = setCoilType ;
        }
        break ;

    case setCoilType:
        if( addressReceived() )
        {
            uint8_t type = constrain( receivedAddress, 1, nTypes ) - 1 ;
            coil[coilIndex].setType( type ) ;
            coil[coilIndex].setDutyCycle( DEF_DUTYCYCLE ) ;

            if( type == SINGLE_COIL_PULSED )  coil[coilIndex].setPulseTime( DEF_SINGLE_PULSE_TIME ) ;
            if( type == DOUBLE_COIL_PULSED
             || type == DOUBLE_PULSE_W_FROG ) coil[coilIndex].setPulseTime( DEF_DOUBLE_PULSE_TIME ) ;

            if( coilIndex < (nCoils/2)
            &&  type == DOUBLE_PULSE_W_FROG )
            {
                coil[ nCoils - 1 - coilIndex ].setType( DORMENT ) ;
                coil[ nCoils - 1 - coilIndex ].reset() ;
            }
            coil[ coilIndex ].reset() ;

            squashAddresses() ;
            saveCoils() ;
            state = setIndex4Type ;
        }
        break ;


// MENU 3
    case setIndex4pulse:
        if( addressReceived() )
        {
            coilIndex = constrain( receivedAddress, 1, nCoils + 1 ) - 1 ; // address 9 = set all coils
            state = setPulseTime ;
        }
        break ;

    case setPulseTime:
        if( addressReceived() )
        {
            receivedAddress = constrain( receivedAddress, 1, nDccAddresses ) ;

            if( coilIndex < 8 )
            {
                if( coil[coilIndex].getType() == SINGLE_COIL_PULSED ) coil[coilIndex].setPulseTime( receivedAddress * 1000 ) ;
                else                                                   coil[coilIndex].setPulseTime( receivedAddress *   10 ) ;
            }
            else for( int i = 0 ; i < nCoils ; i ++ )
            {
                if( coil[i].getType() == SINGLE_COIL_PULSED ) coil[i].setPulseTime( receivedAddress * 1000 ) ;
                else                                          coil[i].setPulseTime( receivedAddress *   10 ) ;
            }

            saveCoils() ;
            state = setIndex4pulse ;
        }
        break ;


// MENU 4
    case setIndex4dutyCycle:
        if( addressReceived() )
        {
            coilIndex = constrain( receivedAddress, 1, nCoils + 1 ) - 1 ; // address 9 = set all coils
            state = setDutyCycle_ ;
        }
        break ;

    case setDutyCycle_:
        if( addressReceived() )
        {
            receivedAddress = constrain( receivedAddress, 1, DEF_DUTYCYCLE ) ;
            if( coilIndex < nCoils )
            {
                coil[coilIndex].setDutyCycle( receivedAddress ) ;
            }
            else for( int i = 0 ; i < nCoils ; i ++ )
            {
                coil[i].setDutyCycle( receivedAddress ) ;
            }
            state = setIndex4dutyCycle ;
        }
        break ;


// MENU 5
    case configMode:
        if( addressReceived() )
        {
            if( receivedAddress == 1 ) for( i = 0 ; i < nCoils ; i ++ ) // preset 1 — all double pulse (50ms)
            {
                coil[i].setType( DOUBLE_COIL_PULSED ) ;
                coil[i].setPulseTime( DEF_DOUBLE_PULSE_TIME ) ;
                coil[i].setDutyCycle( DEF_DUTYCYCLE ) ;
                coil[i].reset() ;
            }

            if( receivedAddress == 2 ) for( i = 0 ; i < nCoils ; i ++ ) // preset 2 — all double continuously
            {
                coil[i].setType( DOUBLE_COIL_CONTINUOUSLY ) ;
                coil[i].setDutyCycle( DEF_DUTYCYCLE ) ;
                coil[i].reset() ;
            }

            if( receivedAddress == 3 ) for( i = 0 ; i < nCoils ; i ++ ) // preset 3 — single pulsed 16x (5s)
            {
                coil[i].setType( SINGLE_COIL_PULSED ) ;
                coil[i].setPulseTime( DEF_SINGLE_PULSE_TIME ) ;
                coil[i].setDutyCycle( DEF_DUTYCYCLE ) ;
                coil[i].reset() ;
            }

            if( receivedAddress == 4 ) for( i = 0 ; i < nCoils ; i ++ ) // preset 4 — single continuously 16x
            {
                coil[i].setType( SINGLE_COIL_CONTINUOUSLY ) ;
                coil[i].setDutyCycle( DEF_DUTYCYCLE ) ;
                coil[i].reset() ;
            }

            if( receivedAddress == 5 ) for( i = 0 ; i < (nCoils/2) ; i ++ ) // preset 5 — double coil + frog relay
            {
                coil[ i ].setType( DOUBLE_PULSE_W_FROG ) ;
                coil[ i ].setPulseTime( DEF_DOUBLE_PULSE_TIME ) ;
                coil[ i ].setDutyCycle( DEF_DUTYCYCLE ) ;
                coil[ i ].reset() ;
                coil[i+4].setType( DORMENT ) ;
                coil[i+4].reset() ;
            }

            if( receivedAddress == 20 ) { settings.uniqueAddresses = 0 ; }
            if( receivedAddress == 21 ) { settings.uniqueAddresses = 1 ;
                                          settings.locoFunctions   = LOCO_FUNCTIONS_OFF ; }

            if( receivedAddress == 30 ) { settings.dccExt = 0 ; }
            if( receivedAddress == 31 ) { settings.dccExt = 1 ; }

            if( receivedAddress == 40 ) { settings.locoFunctions = LOCO_FUNCTIONS_OFF ; }
            if( receivedAddress == 41 ) { settings.locoFunctions =         EIGHT_BALL ; }
            if( receivedAddress == 42 ) { settings.locoFunctions =     FANTASTIC_FOUR ; }

            if( receivedAddress == 1000 || receivedAddress == 996 ) { settings.rcn213 = 0 ;  leftLed.setEventBleeps(5) ; }
            if( receivedAddress == 1001 || receivedAddress == 997 ) { settings.rcn213 = 1 ; rightLed.setEventBleeps(5) ; }

            squashAddresses() ;
            saveCoils() ;
            EEPROM.put( EE_SETTINGS, settings ) ;
            state = idle ;
        }
        break ;
    }
}
