
#include "systick.h"
#include "error.h"
#include "jump_function.h"


static uint32_t s_systick_interval = 0;
static tick_cb_t s_systick_cb = NULL;

void __ATTR_FUNC_RAM__ (systick_irq_handler)(void)
{
    uint64_t cur_ticks = SysTimer_GetLoadValue();
    uint64_t reload_ticks = s_systick_interval + cur_ticks;

    SysTimer_SetCompareValue(reload_ticks);
    if(s_systick_cb)
        s_systick_cb();
}

int systick_start(uint32_t intv_ms, tick_cb_t cb)
{
    uint32_t interval = intv_ms * 8000;
    uint64_t loadticks = SysTimer_GetLoadValue();
    s_systick_interval = interval;
	s_systick_cb = cb;
	JUMP_FUNCTION_SET(MTIP_HANDLER,(uint32_t)&systick_irq_handler);
    SysTimer_SetCompareValue(interval + loadticks);
    //ECLIC_SetShvIRQ(SysTimer_IRQn, ECLIC_NON_VECTOR_INTERRUPT);
    NVIC_SetPriority(SysTimer_IRQn, 0);
    NVIC_EnableIRQ(SysTimer_IRQn);
    return PPlus_SUCCESS;
}

int systick_stop(void)
{
    uint64_t loadticks = SysTimer_GetLoadValue();
    SysTimer_SetCompareValue(0);
    NVIC_SetPriority(SysTimer_IRQn, 0);
    NVIC_DisableIRQ(SysTimer_IRQn);
    s_systick_interval = 0;
    s_systick_cb =NULL;
    JUMP_FUNCTION_CLR(MTIP_HANDLER);
    return PPlus_SUCCESS;
}
