#ifndef TYPES_H
#define TYPES_H

#include <Arduino.h>

// ── EEPROM record for one coil ───────────────────────────────────────────────
struct CoilRecord
{
    uint16_t type      :  3 ;
    uint16_t stateA    :  1 ;
    uint16_t stateB    :  1 ;
    uint16_t dutyCycle :  7 ;
    uint16_t address   : 12 ;
    uint32_t pulseTime ;
} ;

// ── Decoder-wide settings ────────────────────────────────────────────────────
const int LOCO_FUNCTIONS_OFF = 0 ;
const int FANTASTIC_FOUR     = 1 ;
const int EIGHT_BALL         = 2 ;

typedef struct
{
    uint16_t uniqueAddresses :  1 ;
    uint16_t          dccExt :  1 ;
    uint16_t   locoFunctions :  2 ;
    uint16_t   maxCduVoltage : 12 ;
    uint16_t          hasCdu :  1 ;
    uint16_t          rcn213 :  1 ;
} Settings ;

// ── Configuration menu states ────────────────────────────────────────────────
enum modeState
{
    idle,
    setBaseAddress,
    setIndex4Address,
    setIndex4Type,
    setUniqueAddress,
    setCoilType,
    configMode,
    setIndex4pulse,
    setPulseTime,
    setIndex4dutyCycle,
    setDutyCycle_,
    checkButton,
} ;

#endif
