#ifndef CONFIGMENU_H
#define CONFIGMENU_H

#include <EEPROM.h>
#include "CoilDriver.h"
#include "config.h"
#include "types.h"
#include "CoilManager.h"
#include "src/LedBlink.h"
#include "src/debounceClass.h"

extern uint8_t           state          ;
extern uint32_t          beginTime      ;
extern uint8_t           coilIndex      ;
extern volatile uint16_t receivedAddress ;
extern volatile uint8_t  newAddressSet  ;
extern Settings          settings       ;
extern CoilDriver        coil[]         ;
extern LedBlink          rightLed       ;
extern LedBlink          leftLed        ;
extern Debounce          configButton   ;

uint8_t addressReceived() ;
void    config()          ;

#endif
