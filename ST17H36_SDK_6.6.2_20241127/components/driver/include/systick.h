
#ifndef __SYS_TICK_H_
#define __SYS_TICK_H_

#include "bus_dev.h"


typedef void (*tick_cb_t)(void);


void systick_irq_handler(void);
int systick_start(uint32_t intv_ms, tick_cb_t cb);
int systick_stop(void);

#endif

