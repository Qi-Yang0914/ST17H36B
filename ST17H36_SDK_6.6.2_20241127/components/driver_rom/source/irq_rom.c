
#include "bus_dev.h"
#include "mcu.h"
#include "jump_function.h"


int drv_disable_irq0(void)
{
    uint32_t cs = __RV_CSR_READ_CLEAR(CSR_MSTATUS, MSTATUS_MIE);
    
    return (cs & MSTATUS_MIE);
}

int drv_enable_irq0(int cs)
{
    if(cs != 0){
        __RV_CSR_SET(CSR_MSTATUS, MSTATUS_MIE);
    }
    return 0;
}

