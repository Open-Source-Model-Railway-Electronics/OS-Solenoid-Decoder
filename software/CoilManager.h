#ifndef COILMANAGER_H
#define COILMANAGER_H

#include <EEPROM.h>
#include "CoilDriver.h"
#include "config.h"
#include "types.h"

static const int EE_COILS    = 0 ;
static const int EE_SETTINGS = (int)sizeof(CoilRecord) * nCoils ;

extern CoilDriver  coil[]         ;
extern CoilRecord  coilSettings[] ;
extern Settings    settings       ;

void    saveCoils()       ;
void    loadCoils()       ;
uint8_t squashAddresses() ;
uint8_t getPreset()       ;

#endif
