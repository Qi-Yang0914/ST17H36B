#include "jump_function.h"
#include "watchdog.h"
#include "error.h"
#include "pwrmgr.h"
#include "clock.h"
#include "OSAL_Timers.h"

#define WATCHDOG_1000MS_EVENT    0x0001


#if 1
void __attribute__((used))  WDT_IRQHandler(void)
{
    //volatile uint32_t a;
    wdt_eoi_get();
    wdt_crr_set(0x76);
	
}

#else

//extern bool feed_watchdog_in_cycle;
//extern uint8_t feed_wdg_int;
//void __attribute__((used))  WDT_IRQHandler(void)
//{
//	if(feed_watchdog_in_cycle == TRUE)
//	{
//		volatile uint32_t a;
//		a = AP_WDT->EOI;
//		AP_WDT->CRR = 0x76;	
//		
//		feed_wdg_int = 1;
//	}
//}

#endif

void watchdog_feed(void)
{
     wdt_crr_set(0x76);
}

/*
cycke: 0 -- 15
int_mode: false true
*/
bool watchdog_init(int cycle, bool int_mode)
{
    volatile uint32_t a;
	uint8_t delay;
	
	if(cycle > 15)
        return PPlus_ERR_INVALID_PARAM;
	
	//clk_gate_enable(MOD_WDT);
	pcr_sw_clk1_clkg_wdt_setf(1);
//	if((pcr_sw_reset0_get()& 0x04)==0)
//	{
//		pcr_sw_reset0_set(pcr_sw_reset0_get() | 0x04);
//		delay = 20;
//		while(delay-->0);
//	}

	if((pcr_sw_reset2_get() & 0x04)==0)
	{   
		pcr_sw_reset2_wdt_reset_en_setf(1);//AP_PCR->SW_RESET2 |= 0x04;
		delay=20;
		while(delay-->0);
	}
  
	pcr_sw_reset2_srst_wdt_n_setf(0);//AP_PCR->SW_RESET2 &= ~0x20;
	delay=20;
	while(delay-->0);
  
	pcr_sw_reset2_srst_wdt_n_setf(1);//AP_PCR->SW_RESET2 |= 0x20;
	delay=20;
	while(delay-->0);

    a = wdt_eoi_get(); 
	wdt_torr_set(cycle);

	if(TRUE == int_mode)
	{
//		JUMP_FUNCTION(WDT_IRQ_HANDLER)                  =   (uint32_t)&WDT_IRQHandler;
//		JUMP_FUNCTION_SET(WDT_IRQ_HANDLER,(uint32_t)&WDT_IRQHandler);
//		JUMP_FUNCTION_SET(WDT_IRQ_HANDLER,0);


		wdt_cr_set(0x1F);//use int
		NVIC_SetPriority((IRQn_Type)wdt_IRQn, IRQ_PRIO_HAL);
		NVIC_EnableIRQ((IRQn_Type)wdt_IRQn);
	}
	else  
	{
//		JUMP_FUNCTION_SET(WDT_IRQ_HANDLER,0);
		wdt_cr_set(0x1D);//no use int
		NVIC_DisableIRQ((IRQn_Type)wdt_IRQn);
	}

   wdt_crr_set(0x76);

	return TRUE;
}
//extern uint32_t s_config_swClk1;
//void hal_watchdog_init(void)
//{
//
//	watchdog_init(g_wdt_cycle,/*int_mode*/0);//wdt polling_mode
//	s_config_swClk1|=_CLK_WDT;
//}
//
//int hal_watchdog_config(WDG_CYCLE_Type_e cycle)
//{
//    if(cycle > WDG_256S)
//        return PPlus_ERR_INVALID_PARAM;
//    else
//        g_wdt_cycle = cycle;
//
//    hal_watchdog_init();
//    JUMP_FUNCTION_SET(HAL_WATCHDOG_INIT, (uint32_t)&hal_watchdog_init);
//	return PPlus_SUCCESS;
//    
//}


