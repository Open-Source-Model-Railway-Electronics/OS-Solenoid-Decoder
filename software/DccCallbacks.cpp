#include "DccCallbacks.h"

static volatile uint32_t lastTime = 0 ;

// ── EXT accessory (aspect-based) ─────────────────────────────────────────────
void notifyDccSigOutputState( uint16_t address, uint8_t aspect )
{
    if( settings.dccExt == 0 ) return ;
    for( int i = 0 ; i < nCoils ; i ++ )
    {
        if( coil[i].setCoilExt( address, aspect ) )
        {
            rightLed.setEventBleeps(i+1) ;
             leftLed.setEventBleeps(i+1) ;
        }
    }
}

// ── Standard accessory turnout ────────────────────────────────────────────────
void notifyDccAccTurnoutOutput( uint16_t address, uint8_t direction, uint8_t output )
{
    if( settings.rcn213 == 0 )
    {
        address = constrain( address - 4, 1, 2048 ) ;
    }

    if( millis() - lastTime >= LOCKOUT_TIME ) // deduplicate repeated DCC packets
    {   lastTime = millis() ;
        newAddressSet   = 1 ;
        receivedAddress = address ;
    }

    if( settings.locoFunctions != LOCO_FUNCTIONS_OFF ) return ; // loco functions active — ignore conventional addresses
    if( state                  != idle )               return ; // config menu open
    if( output                 ==    0 )               return ; // legacy DCC flag, don't care

    if( direction > 0 ) direction = 1 ;

    for( int i = 0 ; i < nCoils ; i ++ )
    {
        if( coil[i].setCoil( address, direction, 0 ) )
        {
            rightLed.setEventBleeps( 1 ) ;
             leftLed.setEventBleeps( 1 ) ;
        }
    }
}

// ── Locomotive function support ───────────────────────────────────────────────
static uint16_t funcOldState = 0 ;
static uint16_t funcNewState = 0 ;

void notifyDccFunc( uint16_t Addr, DCC_ADDR_TYPE AddrType, FN_GROUP FuncGrp, uint8_t FuncState )
{
    if( settings.locoFunctions == LOCO_FUNCTIONS_OFF ) return ;

    uint8_t  bitOffset       = 0 ;
    uint8_t  maxFunctions    = squashAddresses() ;
    uint16_t dccBaseAddress  = coil[0].getAddress() ;
    uint8_t  neededAddresses = 1 ;

    if( settings.locoFunctions == FANTASTIC_FOUR ) // LocoMaus: F1-F4 of sequential loco addresses
    {
        if( FuncGrp != FN_0_4 ) return ;

        neededAddresses = (maxFunctions - 1) / 4 + 1 ;
        if( Addr < dccBaseAddress || Addr >= (dccBaseAddress + neededAddresses) ) return ;

        bitOffset = (Addr - dccBaseAddress) * 4 ;
    }

    if( settings.locoFunctions == EIGHT_BALL ) // 1 loco address, up to 16 functions
    {
        if( Addr != dccBaseAddress ) return ;

        if(      FuncGrp ==   FN_0_4 ) { bitOffset =  0 ; }
        else if( FuncGrp ==   FN_5_8 ) { bitOffset =  4 ; }
        else if( FuncGrp ==  FN_9_12 ) { bitOffset =  8 ; }
        else if( FuncGrp == FN_13_20 ) { bitOffset = 12 ; }
        else return ;
    }

    funcNewState &= ~(0x0F << bitOffset) ;
    funcNewState |= (FuncState & 0x0F) << bitOffset ;

    uint16_t changedBits = funcOldState ^ funcNewState ;
    funcOldState = funcNewState ;
    if( changedBits == 0 ) return ;

    for( int i = 0 ; i < maxFunctions ; i++ )
    {
        if(( changedBits & (1 << i) ) == 0 ) continue ;

        uint8_t  coilState  = (funcNewState >> i) & 0x1 ;
        uint16_t dccAddress = dccBaseAddress + i ;

        for( int j = 0 ; j < nCoils ; j++ )
        {
            coil[j].setCoil( dccAddress, coilState, 1 ) ;
        }
    }
}
