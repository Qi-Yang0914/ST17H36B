
#ifndef __PWRMGR_SDK_H__
#define __PWRMGR_SDK_H__

#include "../../driver_rom/include/pwrmgr.h"

#ifndef CFG_SLEEP_MODE
#error CFG_SLEEP_MODE did not defined
#endif


int hal_pwrmgr_init(void);
void hal_system_soft_reset(void);
void hal_pwrmgr_poweroff(pwroff_cfg_t *pcfg, uint8_t wakeup_pin_num);
void hal_pwrmgr_poweroff_warmup(pwroff_cfg_t *pcfg, uint8_t wakeup_pin_num);

#endif

