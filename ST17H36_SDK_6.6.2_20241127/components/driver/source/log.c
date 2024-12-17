
#include "rom_sym_def.h"
#include "types.h"
#include "uart.h"
#include "log.h"
#include "jump_function.h"

#ifndef _LOG_PRINTF_SWU_
#define _LOG_PRINTF_SWU_ 1
#endif

void my_dump_byte(uint8_t* pData, int dlen)
{
    for(int i=0; i<dlen; i++)
    {
        log_printf("%02x ",pData[i]);
    }

    log_printf("\n");
}

#if(DEBUG_LEVEL!=LOG_LEVEL_NONE)
void uart_cb(comm_evt_t* pev)
{    
}
#endif
void uart_wakeup_init2(void)
{
	uart_init(115200, P6, P7, NULL);
}
