#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <Arduino.h>

/*
 * Simulator — sequential event runner for development and testing.
 *
 * All message strings live in flash only. ADD applies F() automatically —
 * just pass a plain string literal, it never touches SRAM.
 * Pass nullptr as message for silent steps.
 *
 * Events are numbered from 1 in the order they are registered.
 * Call Run() every loop() iteration. Call Reset() to replay from event 1.
 *
 *   ADD(  interval, msg, stmt )            — wait ms, print msg, execute stmt.
 *   WAIT( expr )                           — hold until expr returns 1.
 *   JUMP( target )                         — unconditional jump to event <target>.
 *   CJUMP( expr, onFalse, onTrue )         — conditional jump.
 *
 * Example:
 *
 *   sim.ADD(  100,  "hold button", digitalWrite( configPin, LOW  ) ) ;  // 1
 *   sim.ADD(  3500, "release",     digitalWrite( configPin, HIGH ) ) ;  // 2
 *   sim.WAIT( digitalRead( somePin ) == HIGH ) ;                        // 3
 *   sim.ADD(  200,  "send DCC",    notifyDccAccTurnoutOutput(5,1,1) ) ; // 4
 *   sim.ADD(  0,    nullptr,       counter++ ) ;                        // 5
 *   sim.CJUMP( counter < 5, 7, 2 ) ;                                   // 6
 *   sim.ADD(  500,  "done",        Serial.println( F("finished") ) ) ;  // 7
 */

#define ADD(interval, msg, ...)    add_(  interval, F(msg), []{ __VA_ARGS__ ; } )  // msg stored in flash only
#define STEP(interval, ...)        add_(  interval, nullptr, []{ __VA_ARGS__ ; } ) // silent — no message
#define WAIT(cond)                 wait_(       []()->uint8_t{ return (uint8_t)(cond) ; } )
#define JUMP(target)               jump_(       target )
#define CJUMP(cond, a, b)          cjump_(      []()->uint8_t{ return (uint8_t)(cond) ; }, a, b )
#define TRANSITION(cond, target)   transition_( []()->uint8_t{ return (uint8_t)(cond) ; }, target )

class Simulator
{
public:
    Simulator() ;

    void add_(   uint32_t interval, const __FlashStringHelper* message, void(*action)() ) ;
    void add_(   uint32_t interval, decltype(nullptr),                  void(*action)() ) ;
    void wait_(       uint8_t(*condition)() ) ;
    void jump_(       uint8_t target ) ;
    void cjump_(      uint8_t(*condition)(), uint8_t onFalse, uint8_t onTrue ) ;
    void transition_( uint8_t(*condition)(), uint8_t target ) ;

    void Run() ;
    void Reset() ;

private:
    struct SimEvent
    {
        enum Type : uint8_t { TIMED, WAIT, JUMP, CJUMP, TRANSITION } type ;
        uint32_t                    interval ;
        uint8_t                     (*condition)() ;
        const __FlashStringHelper*  message ;
        void                        (*action)() ;
        uint8_t                     targetA ;
        uint8_t                     targetB ;
    } ;

    SimEvent*   events   = nullptr ;
    uint8_t     nEvents  = 0 ;
    uint8_t     current  = 0 ;
    uint32_t    lastTime = 0 ;

    void AddEvent( SimEvent e ) ;
    void JumpTo(   uint8_t target ) ;
} ;

#endif
