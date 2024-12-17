#ifndef __PWRMGR_ROM_H__
#define __PWRMGR_ROM_H__


#ifdef __cplusplus
extern "C" {
#endif


#include "bus_dev.h"
#include "gpio.h"

#define PWR_MODE_NO_SLEEP           1
#define PWR_MODE_SLEEP              2
#define PWR_MODE_PWROFF_NO_SLEEP    4

//WAKEUP FROM STANDBY MODE
#define WAKEUP_PIN_MAX   3


#define   RET_SRAM0         BIT(0)  /*8, 0x1fff0000~0x1fff1fff*/




#define   DEF_CLKG_CONFIG_0       (PCR_SW_CLK0_CLKG_IOMUX_BIT|\
                                    PCR_SW_CLK0_CLKG_UART0_BIT|\
                                    PCR_SW_CLK0_CLKG_GPIO_BIT|\
                                    PCR_SW_CLK0_HCLKG_SPIF_BIT|\
                                    PCR_SW_CLK0_HCLKG_SPIF_REFCLK_BIT|\
                                    PCR_SW_CLK0_CLKG_HCLK_SL_BIT|\
                                    PCR_SW_CLK0_CLKG_HCLK_SL_EN_BIT|\
                                    PCR_SW_CLK0_CLKG_AES_BIT|\
                                    PCR_SW_CLK0_CLKG_OTP_BIT)

#define   DEF_CLKG_CONFIG_1       (PCR_SW_CLK1_CLKG_CPU_BIT|\
                                    PCR_SW_CLK1_CLKG_BB_BIT|\
                                    PCR_SW_CLK1_CLKG_TIMER_N205_BIT|\
                                    PCR_SW_CLK1_CLKG_BBREG_BIT|\
                                    PCR_SW_CLK1_CLKG_COM_BIT)



typedef struct
{
    gpio_pin_e pin;
    gpio_polarity_e type;
    uint16_t on_time;
} pwroff_cfg_t;

typedef void (*pwrmgr_Hdl_t)(void);
typedef struct _pwrmgr_Context_t
{
    MODULE_e     moudle_id;
    bool         lock;
    pwrmgr_Hdl_t sleep_handler;
    pwrmgr_Hdl_t wakeup_handler;
} pwrmgr_Ctx_t;


extern uint32_t g_system_reset_cause;
extern uint32_t s_gpio_wakeup_src;

int pwrmgr_init(pwrmgr_Ctx_t * pctx, uint8_t num);
bool pwrmgr_config(uint8_t pwrmode);
bool pwrmgr_is_lock(MODULE_e mod);
int pwrmgr_lock(MODULE_e mod);
int pwrmgr_unlock(MODULE_e mod);
int pwrmgr_register(MODULE_e mod, pwrmgr_Hdl_t sleepHandle, pwrmgr_Hdl_t wakeupHandle);
int pwrmgr_unregister(MODULE_e mod);
void pwrmgr_wakeup_process(void) __attribute__((weak));
void pwrmgr_sleep_process(void) __attribute__((weak));
int pwrmgr_RAM_retention(uint32_t sram);
int pwrmgr_clk_gate_config(MODULE_e module);
int pwrmgr_RAM_retention_clr(void);
int pwrmgr_RAM_retention_set(void);
int pwrmgr_LowCurrentLdo_enable(void);
int pwrmgr_LowCurrentLdo_disable(void);

void pwrmgr_poweroff(pwroff_cfg_t* pcfg, uint8_t wakeup_pin_num);
void pwrmgr_enter_standby(pwroff_cfg_t* pcfg,uint8_t wakeup_pin_num) ;

#ifdef __cplusplus
}
#endif


#endif


