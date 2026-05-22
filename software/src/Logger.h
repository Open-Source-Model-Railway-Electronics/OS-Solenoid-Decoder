#ifndef LOGGER_H
#define LOGGER_H

#include <Arduino.h>

/*
 * Logger — expression watcher for development and testing.
 *
 * All name strings live in flash only. The macros apply F() automatically —
 * just pass a plain string literal, it never touches SRAM.
 *
 *   SUBSCRIBE_BOOL( expr, name )          — fires notifyLog on every 0/1 change.
 *   SUBSCRIBE_VAL(  expr, name )          — fires on change, rate-limited (default 100 ms).
 *   SUBSCRIBE_VAL_MS( expr, name, ms )    — same, with explicit interval.
 *   UNSUBSCRIBE( name )                   — remove watcher by name.
 *
 * Example:
 *
 *   logger.SUBSCRIBE_BOOL( digitalRead( pin4 ),  "pin4"  ) ;
 *   logger.SUBSCRIBE_BOOL( myFlag,               "flag"  ) ;
 *   logger.SUBSCRIBE_VAL(  encoder.getCount(),   "enc"   ) ;
 *   logger.SUBSCRIBE_VAL(  analogRead( A0 ),     "pot"   ) ;
 *   logger.SetInterval( 50 ) ;
 *
 *   void notifyLog( const __FlashStringHelper* name, uint32_t value ) {
 *       Serial.print( name ) ; Serial.print( F(" -> ") ) ; Serial.println( value ) ;
 *   }
 *
 *   logger.UNSUBSCRIBE( "enc" ) ;
 */

#define SUBSCRIBE_BOOL(expr, name)          SubscribeBool_( []()->uint8_t { return (uint8_t)(expr)  ; }, F(name) )
#define SUBSCRIBE_VAL(expr, name)           SubscribeVal_(  []()->uint32_t{ return (uint32_t)(expr) ; }, F(name) )
#define SUBSCRIBE_VAL_MS(expr, name, ms)    SubscribeVal_(  []()->uint32_t{ return (uint32_t)(expr) ; }, F(name), ms )
#define UNSUBSCRIBE(name)                   Unsubscribe_( F(name) )

class Logger
{
public:
    Logger() ;

    void SubscribeBool_( uint8_t(*fn)(),  const __FlashStringHelper* name ) ;
    void SubscribeVal_(  uint32_t(*fn)(), const __FlashStringHelper* name, uint32_t interval = 0 ) ;
    void Unsubscribe_(   const __FlashStringHelper* name ) ;

    void SetInterval( uint32_t ms ) ;
    void Log() ;

private:
    struct Watcher
    {
        enum Type : uint8_t { BOOL, VALUE } type ;
        union {
            uint8_t  (*boolFn)() ;
            uint32_t (*valFn)()  ;
        } fn ;
        const __FlashStringHelper* name ;
        uint32_t    lastValue ;
        uint32_t    lastTime ;
        uint32_t    interval ;
    } ;

    Watcher*    watchers        = nullptr ;
    uint8_t     nWatchers       = 0 ;
    uint32_t    defaultInterval = 100 ;

    void    AddWatcher( Watcher w ) ;
    void    RemoveAt(   uint8_t index ) ;
} ;

extern void notifyLog( const __FlashStringHelper* name, uint32_t value ) __attribute__((weak)) ;

#endif
