
#include "rom_sym_def.h"
#include "types.h"
#include "ll_sleep.h"
#include "bus_dev.h"
#include "string.h"

#include "pwrmgr.h"
#include "error.h"
#include "gpio.h"
#include "log.h"
#include "clock.h"
#include "jump_function.h"
#include "systick.h"

extern uint32_t s_config_swClk0;
extern uint32_t s_config_swClk1;

#define HAL_PWRMGR_TASK_MAX_NUM   5 
uint32_t s_num = HAL_PWRMGR_TASK_MAX_NUM;
static pwrmgr_Ctx_t s_pwrmgrCtx[HAL_PWRMGR_TASK_MAX_NUM];
/*
    osal_idle_task will be call
*/
bool otp_go_read(void);
bool spif_cfg_load(void);
void spif_deep_sleep_set(void);
void systick_wakeup_set(void);

void osal_idle_task (void)
{
    wdt_crr_set(0x76);//AP_WDT_FEED;   
    osal_pwrmgr_powerconserve0();
}
void __ATTR_FUNC_RAM__(pwrmgr_sleep_process1)(void);
void pwrmgr_sleep_process1(void)
{
    pwrmgr_sleep_process();
    spif_deep_sleep_set();
}
pwrmgr_Ctx_t *get_mctx(void)
{
    return s_pwrmgrCtx;
}

int hal_pwrmgr_init(void)
{
	
#if(CFG_SLEEP_MODE == PWR_MODE_NO_SLEEP)
	pwrmgr_config(PWR_MODE_NO_SLEEP);
#else
	pwrmgr_config(PWR_MODE_SLEEP);
#endif
	
  pwrmgr_init(s_pwrmgrCtx, HAL_PWRMGR_TASK_MAX_NUM);
	
  //OTP&XIP should be the 1st MOD in app wakeup process
  pwrmgr_register(MOD_OTP,NULL,(pwrmgr_Hdl_t)otp_go_read);
  pwrmgr_register(MOD_USR0,NULL,(pwrmgr_Hdl_t)spif_cfg_load);
#ifndef BLE_AT_ENABLE
#if(CFG_SLEEP_MODE == PWR_MODE_SLEEP)
  pwrmgr_register(MOD_TIMER1,NULL,(pwrmgr_Hdl_t)systick_wakeup_set);
#endif
#endif
  JUMP_FUNCTION_SET(APP_SLEEP_PROCESS,(uint32_t)&pwrmgr_sleep_process1);
  //pwrmgr_register(MOD_USR0,NULL,(pwrmgr_Hdl_t)spif_cfg_load);
	
  s_config_swClk0 = DEF_CLKG_CONFIG_0;
  s_config_swClk1 = DEF_CLKG_CONFIG_1;
#if(CFG_WDT_ENABLE==1)
  /*
      if wdt enable, set osal idle task to feed wdt before powerconserve
  */
  JUMP_FUNCTION_SET(OSAL_POWER_CONSERVE,(uint32_t)&osal_idle_task);
#endif

  return PPlus_SUCCESS;
}
void pwr_rst_cause_set(uint8_t rst_cause)
{
    aon_pm_pm_reg17_set((aon_pm_pm_reg17_get()&0xFFFFFF00)|rst_cause);
}

void __ATTR_FUNC_RAM__(hal_pwrmgr_poweroff)(pwroff_cfg_t *pcfg, uint8_t wakeup_pin_num );
void hal_pwrmgr_poweroff(pwroff_cfg_t *pcfg, uint8_t wakeup_pin_num) // check
{
    drv_disable_irq();
    aon_pm_pm_reg15_pwr_ctl_mode_setf(0);
    //(void)(wakeup_pin_num);

    for (uint8_t i = 0; i < wakeup_pin_num; i++)
    {
        if (pcfg[i].type == POL_FALLING)
            gpio_pull_set(pcfg[i].pin, GPIO_PULL_UP);
        else
            gpio_pull_set(pcfg[i].pin, GPIO_PULL_DOWN);

        gpio_wakeup_set(pcfg[i].pin, pcfg[i].type);

        if(pcfg[i].pin == P6)
            aon_pm_pm_reg13_dig_ldo_trim_setf(2);
        else if(pcfg[i].pin == P20)
            aon_pm_pm_reg13_dig_ldo_trim_setf(1);
    }
    /**
        config reset casue as RSTC_OFF_MODE
        reset path walkaround dwc
    */
    //AP_AON->SLEEP_R[0] = 2;
    pwr_rst_cause_set(0x02);
    #ifdef DEF_HAS_FLASH
    spif_deep_sleep_set();
    #endif
    
    extern bool otp_go_deepsleep(void);
    otp_go_deepsleep();
    
    enter_sleep_off_mode(SYSTEM_OFF_MODE);

    while (1)
        ;
}
void hal_pwrmgr_poweroff_warmup(pwroff_cfg_t *pcfg, uint8_t wakeup_pin_num) // check
{
    drv_disable_irq();
    aon_pm_pm_reg15_pwr_ctl_mode_setf(0);
    //(void)(wakeup_pin_num);

    for (uint8_t i = 0; i < wakeup_pin_num; i++)
    {
        if (pcfg[i].type == POL_FALLING)
            gpio_pull_set(pcfg[i].pin, GPIO_PULL_UP);
        else
            gpio_pull_set(pcfg[i].pin, GPIO_PULL_DOWN);

        gpio_wakeup_set(pcfg[i].pin, pcfg[i].type);
    }
    /**
        config reset casue as RSTC_OFF_MODE
        reset path walkaround dwc
    */
    //AP_AON->SLEEP_R[0] = 2;
    //aon_pm_pm_reg15_rtc_en_ctl_setf(1);
    aon_pm_pm_reg13_slp_en_rtc_setf(0);
    extern void set_sleep_flag(int flag);
    set_sleep_flag(1);
    pwr_rst_cause_set(0x03);
    #ifdef DEF_HAS_FLASH
    spif_deep_sleep_set();
    #endif
    enter_sleep_off_mode(SYSTEM_SLEEP_MODE);

    while (1)
        ;
}
void hal_system_soft_reset(void)
{
    drv_disable_irq();
    aon_pm_pm_reg15_pwr_ctl_mode_setf(0);
    aon_pm_pm_reg15_retram0_en_setf(0);
    //AP_AON->SLEEP_R[0] = 0x04;
    pwr_rst_cause_set(0x05);
    config_RTC(320);
    enter_sleep_off_mode(SYSTEM_SLEEP_MODE);
}

void _rst_cause_init(void)
{
    g_system_reset_cause = aon_pm_pm_reg17_get()&0xFF;
    pwr_rst_cause_set(0x01);
}
void systick_wakeup_set(void)
{
    systick_start(1, NULL);
}