
#ifndef __RISCV_CMSIS_H
#define __RISCV_CMSIS_H

#include "femto_iot.h"

#define NVIC_EnableIRQ(IRQn)                            ECLIC_EnableIRQ(IRQn)
#define NVIC_DisableIRQ(IRQn)                           ECLIC_DisableIRQ(IRQn)
#define NVIC_GetPendingIRQ(IRQn)                        ECLIC_GetPendingIRQ(IRQn)
#define NVIC_SetPendingIRQ(IRQn)                        ECLIC_SetPendingIRQ(IRQn)
#define NVIC_ClearPendingIRQ(IRQn)                      ECLIC_ClearPendingIRQ(IRQn)
#define NVIC_GetWakeupIRQ(IRQn)                         (0)
#define NVIC_SetWakeupIRQ(IRQn)                         
#define NVIC_ClearWakeupIRQ(IRQn)                       
#define NVIC_GetActive(IRQn)                            (0)
#define NVIC_SetThreshold(VectThreshold, PrioThreshold) 
#define NVIC_SetPriority(IRQn, priority)                ECLIC_SetLevelIRQ(IRQn, priority)
#define NVIC_GetPriority(IRQn)                          ECLIC_GetLevelIRQ(IRQn)
#define NVIC_SystemReset()								SysTimer_SoftwareReset();

__STATIC_FORCEINLINE unsigned int NVIC_GetPendingIRQs(void)
{
    unsigned int pending = 0;
    for(int i = 0; i< 32; i++)
    {
        if(ECLIC_GetPendingIRQ(i+Ext_IRQn)){
            pending |=  BIT(i);
        }
    }
    return pending;
}
__STATIC_FORCEINLINE void NVIC_ClearPendingIRQs(unsigned int pending)
{
    for(int i = 0; i< 32; i++)
    {
        if(pending & BIT (i) ){
            ECLIC_ClearPendingIRQ(i+Ext_IRQn);
        }
    }
}
__STATIC_FORCEINLINE void NVIC_SetPendingIRQs(unsigned int pending)
{
    for(int i = 0; i< 32; i++)
    {
        if(pending & BIT (i) ){
            ECLIC_SetPendingIRQ(i+Ext_IRQn);
        }
    }
}

#define NVIC_GetEnableIRQs()        (0)
#define NVIC_DisableIRQs(irqs)      
#define NVIC_EnableIRQs(iser)       


#endif

