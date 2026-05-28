#ifndef COILDRIVER_H
#define COILDRIVER_H

#include <Arduino.h>
#include "src/macros.h"
#include "src/ST.h"

enum types
{
    DOUBLE_COIL_PULSED,
    DOUBLE_COIL_CONTINUOUSLY,
    SINGLE_COIL_PULSED,
    SINGLE_COIL_CONTINUOUSLY,
    DOUBLE_PULSE_W_FROG,
    DORMENT,
} ;

const int   nTypes    = 5 ;

class CoilDriver {

public:
    CoilDriver() ;
    void    setBuddyPins( uint8, uint8 ) ;
    void    begin( uint8, uint8 ) ;
    void    initializeCoils() ;
    void    reset() ;
    void    recover() ;
    
    uint8   update() ;

    uint8   setCoilExt( uint16, uint8 ) ;
    uint8   setCoil(    uint16, uint8, uint8 ) ;

    void    setStates( uint8_t, uint8_t ) ;
    uint8   getState( uint8_t ) ;
    void    setType( uint8 ) ;
    uint8   getType() ;
    void    setAddress( uint16 ) ;
    uint16  getAddress() ;
    void    setPulseTime( uint32 ) ;
    uint32  getPulseTime() ;
    void    setDutyCycle( uint8_t ) ;
    uint8_t getDutyCycle( ) ;

private:
    uint16  inputVoltage    : 10 ;
    uint8   sm              :  3 ; // obsolete
    uint8   active          :  1 ; // obsolete
    uint8   type            :  3 ;
    uint8   outputStateA    :  1 ;
    uint8   outputStateB    :  1 ;
    uint8   state2beA       :  1 ;
    uint8   state2beB       :  1 ;
    uint8   oldStateA       :  1 ;
    uint8   oldStateB       :  1 ;
    uint8   indexA          :  5 ;
    uint8   indexB          :  5 ;
    uint32  myPulseTime     : 32 ;
    uint16  myAddress       : 16 ;
    uint8   pinA            :  5 ; 
    uint8   pinB            :  5 ;
    uint8   buddyPinA       :  5 ; 
    uint8   buddyPinB       :  5 ;
    uint8   myToken         :  1 ; 
    uint8   lockout         :  1 ;
    uint8   dutycycle       :  4 ;

    Trigger trigA ;
    Trigger trigB ;

    Timer timerA ;
    Timer timerB ;
    Timer lockoutTimer ;
    
    void  turn( uint8, uint8 ) ;
} ;

#endif
