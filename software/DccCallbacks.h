#ifndef DCCCALLBACKS_H
#define DCCCALLBACKS_H

#include "CoilDriver.h"
#include "config.h"
#include "types.h"
#include "CoilManager.h"
#include "src/NmraDcc.h"
#include "src/LedBlink.h"

extern Settings          settings        ;
extern CoilDriver        coil[]          ;
extern LedBlink          rightLed        ;
extern LedBlink          leftLed         ;
extern uint8_t           state           ;
extern volatile uint16_t receivedAddress ;
extern volatile uint8_t  newAddressSet   ;

#endif
