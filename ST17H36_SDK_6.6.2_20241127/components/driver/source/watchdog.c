#include "rom_sym_def.h"
#include "watchdog.h"
#include "error.h"
#include "clock.h"
#include "jump_function.h"

extern volatile uint8 g_clk32K_config;
extern uint32_t s_config_swClk1;
#define _CLK_WDT         (BIT(5))

#if(CFG_WDT_ENABLE==1)
WDG_CYCLE_Type_e g_wdt_cycle = 0xFF;//valid value:0~15.0xFF:watchdog disable.
#endif


#if(CFG_WDT_ENABLE==1)
void __ATTR_FUNC_RAM__(hal_watchdog_init)(void);
void hal_watchdog_init(void)
{
	watchdog_init(g_wdt_cycle,/*int_mode*/0);//wdt polling_mode
	s_config_swClk1|=_CLK_WDT;
}
#endif

int hal_watchdog_config(WDG_CYCLE_Type_e cycle)
{
	
#if(CFG_WDT_ENABLE==1)
    if(cycle > 15)
        return PPlus_ERR_INVALID_PARAM;
    else
        g_wdt_cycle = cycle;

    hal_watchdog_init();
    JUMP_FUNCTION_SET(HAL_WATCHDOG_INIT, (uint32_t)&hal_watchdog_init);
	return PPlus_SUCCESS;
#else
	(void) cycle;
	return PPlus_ERR_UNINITIALIZED;
#endif

}
