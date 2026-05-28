#include "CoilManager.h"

CoilRecord coilSettings[nCoils] ;

void saveCoils()
{
    for( int i = 0 ; i < nCoils ; i ++ )
    {
        coilSettings[i].type      = coil[i].getType()      ;
        coilSettings[i].stateA    = coil[i].getState( 0 )  ;
        coilSettings[i].stateB    = coil[i].getState( 1 )  ;
        coilSettings[i].dutyCycle = coil[i].getDutyCycle() ;
        coilSettings[i].address   = coil[i].getAddress()   ;
        coilSettings[i].pulseTime = coil[i].getPulseTime() ;
    }
    EEPROM.put( EE_COILS, coilSettings ) ;
}

void loadCoils()
{
    EEPROM.get( EE_COILS, coilSettings ) ;

    coil[0].setBuddyPins( GPIO[14], GPIO[15] ) ; // preset 5 — double coil w frog relay
    coil[1].setBuddyPins( GPIO[12], GPIO[13] ) ;
    coil[2].setBuddyPins( GPIO[10], GPIO[11] ) ;
    coil[3].setBuddyPins( GPIO[ 8], GPIO[ 9] ) ;

    for( int i = 0 ; i < nCoils ; i ++ )
    {
        coil[i].setType(      coilSettings[i].type                          ) ;
        coil[i].setStates(    coilSettings[i].stateA, coilSettings[i].stateB ) ;
        coil[i].setDutyCycle( coilSettings[i].dutyCycle                     ) ;
        coil[i].setAddress(   coilSettings[i].address                       ) ;
        coil[i].setPulseTime( coilSettings[i].pulseTime                     ) ;
        coil[i].begin(        GPIO[ 2*i ], GPIO[ (2*i)+1 ]                  ) ;
        coil[i].initializeCoils() ;
    }
}

uint8_t squashAddresses()
{
    if( settings.uniqueAddresses ) return nCoils ;

    uint8_t  addressCount = nCoils ;
    uint16_t riseAddress  = coil[0].getAddress() ;

    for( int i = 0 ; i < nCoils ; i ++ )
    {
        uint8_t prevType = coil[i].getType() ;
        if( prevType == SINGLE_COIL_CONTINUOUSLY
        ||  prevType == SINGLE_COIL_PULSED ) { riseAddress += 2 ; addressCount++ ; }
        else                                 { riseAddress += 1 ; }

        if( i + 1 < nCoils ) { coil[i+1].setAddress( riseAddress ) ; }
    }
    return addressCount ;
}

uint8_t getPreset()
{
    uint8_t preset    = coil[0].getType() ;
    uint8_t testCoils = nCoils ;
    if( preset == DOUBLE_PULSE_W_FROG ) testCoils = nCoils / 2 ;

    for( int i = 1 ; i < testCoils ; i ++ )
    {
        if( coil[i].getType() != preset )
            return 255 ;
    }
    return preset ;
}
