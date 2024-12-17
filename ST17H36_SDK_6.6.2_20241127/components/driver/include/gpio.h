#ifndef __GPIO_SDK_H__
#define __GPIO_SDK_H__

#include "../../driver_rom/include/gpio.h"
#ifndef GPIO_RETENTION_PATCH

#define GPIO_RETENTION_NONE    0
#define GPIO_RETENTION_P20     0 //only use P20*/
#define GPIO_RETENTION_P6      1 //only use P6*/
#define GPIO_RETENTION_P6P20   0 //use P6 and P20*/

#endif

void gpio_retention_patch_handler(void);
int rom_gpio_init(void);
void rom_gpio_wakeup_set(gpio_pin_e pin, gpio_polarity_e type);

#endif

