#include "rom_sym_def.h"
#include "bus_dev.h"
#include "uart.h"
#include "gpio.h"
#include "pwrmgr.h"
#include "string.h"
#include "clock.h"
#include "log.h"

extern void gpio_wakeup_handler(void);
extern void gpio_retention_enable(void);
extern gpio_ctx_t m_gpioCtx;

void gpio_wakeup_set(gpio_pin_e pin, gpio_polarity_e type)
{
    uint32_t ret_map = m_gpioCtx.retention_map;
    
    m_gpioCtx.retention_map = 0;
    rom_gpio_wakeup_set(pin, type);
    
    if(pin == P6)
    {
        aon_pm_pm_reg13_set(aon_pm_pm_reg13_get() | BIT(22));
    }
    else if(pin == P20)
    {
        aon_pm_pm_reg13_set(aon_pm_pm_reg13_get() | BIT(21));
    }
    m_gpioCtx.retention_map = ret_map;
}

void gpio_sleep_handler_patch(void)
{
    int i;
    gpio_polarity_e pol;
    gpioin_t* p_gpioin_ctx = m_gpioCtx.gpioin_ctx;

    gpio_retention_enable();
    
    for (i = 0; i < m_gpioCtx.gpioin_nums; i++)
    {
        pol = gpio_read(p_gpioin_ctx[i].pin) ? POL_FALLING : POL_RISING ;
        gpio_wakeup_set(p_gpioin_ctx[i].pin, pol);
        m_gpioCtx.gpioin_ctx[i].pin_state = gpio_read(p_gpioin_ctx[i].pin);
        // PRINT("pin=%d pol=%d\n", p_gpioin_ctx[i].pin, pol);
    }
}

void __ATTR_FUNC_RAM__(gpio_p6p20_handler)(void)
{
#if(GPIO_RETENTION_P20)
    aon_pm_pm_reg13_dig_ldo_trim_setf(1);
#elif(GPIO_RETENTION_P6)
    aon_pm_pm_reg13_dig_ldo_trim_setf(2);
#elif(GPIO_RETENTION_P6P20)
    aon_pm_pm_reg13_dig_ldo_trim_setf(3);
#elif(GPIO_RETENTION_NONE)

#endif
}

int gpio_init(void)
{
    volatile int ret;

    ret = rom_gpio_init();

    // aon_pm_pm_reg13_dig_ldo_trim_setf(0);
    pwrmgr_register(MOD_USR1, NULL, gpio_p6p20_handler); //p6p20 wakeup source flag api, only use p6/p20 need use
	pwrmgr_unregister(MOD_GPIO);
	pwrmgr_register(MOD_GPIO, gpio_sleep_handler_patch, gpio_wakeup_handler);

	return ret;
}

