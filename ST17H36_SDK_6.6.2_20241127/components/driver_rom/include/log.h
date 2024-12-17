
#ifndef __PHY_LOG_H
#define __PHY_LOG_H

#include "types.h"
#include "uart.h"
#include "pwrmgr.h"
#include <stdarg.h>
#include <stdio.h>

#ifndef DEBUG_LEVEL
#define DEBUG_LEVEL 0
#endif

#define LOG_LEVEL_NONE  0 //no log output*/
#define LOG_LEVEL_ERROR 1 //only log error*/
#define LOG_LEVEL_DEBUG 2 //output debug info and error info*/
#define LOG_LEVEL_LOG   3 //output all infomation*/
void my_dump_byte(uint8_t* pData, int dlen);
#if(DEBUG_LEVEL!=LOG_LEVEL_NONE)
void uart_cb(comm_evt_t* pev);
#endif

#if(DEBUG_LEVEL==LOG_LEVEL_NONE)
#define LOG_INIT()                  //{uart_init(115200,P6,P7,NULL);}
#define LOG(...)                    //{if(s_rom_debug_level == LOG_LEVEL_LOG) log_printf(__VA_ARGS__);}
#define LOG_DEBUG(...)              // {if(s_rom_debug_level >= LOG_LEVEL_DEBUG) log_printf(__VA_ARGS__);}
#define LOG_ERROR(...)              // {if(s_rom_debug_level >= LOG_LEVEL_ERROR) log_printf(__VA_ARGS__);}
#define AT_LOG(...)                 {log_printf(__VA_ARGS__);}
#define LOG_DUMP_BYTE(a,b)

#elif(DEBUG_LEVEL==LOG_LEVEL_ERROR)

#define LOG_INIT()                  {uart_init(115200,P6,P7,uart_cb); uart0_fcr_fifo_control_register_pack(2, 0, 0, 0, 0, 1); pwrmgr_register(MOD_UART0,NULL,uart_wakeup_init2);}
#define LOG(...)                    //{log_printf(__VA_ARGS__);}
#define LOG_DEBUG(...)              //{log_printf("[DBG]");log_printf(__VA_ARGS__);}
#define LOG_ERROR(...)              {log_printf("[ERR]");log_printf(__VA_ARGS__);}
#define AT_LOG(...)                 {log_printf(__VA_ARGS__);}
#define LOG_DUMP_BYTE(a,b)          my_dump_byte(a,b)

#elif(DEBUG_LEVEL==LOG_LEVEL_DEBUG)
#define LOG_INIT()                  {uart_init(115200,P6,P7,uart_cb); uart0_fcr_fifo_control_register_pack(2, 0, 0, 0, 0, 1); pwrmgr_register(MOD_UART0,NULL,uart_wakeup_init2);}
#define LOG(...)                    //{log_printf(__VA_ARGS__);}
#define LOG_DEBUG(...)              {log_printf("[DBG]");log_printf(__VA_ARGS__);}
#define LOG_ERROR(...)              //{log_printf("[ERR]");log_printf(__VA_ARGS__);}
#define AT_LOG(...)                 {log_printf(__VA_ARGS__);}
#define LOG_DUMP_BYTE(a,b)          my_dump_byte(a,b)

#elif(DEBUG_LEVEL==LOG_LEVEL_LOG)

#define LOG_INIT()                  {uart_init(115200,P6,P7,uart_cb); uart0_fcr_fifo_control_register_pack(2, 0, 0, 0, 0, 1); pwrmgr_register(MOD_UART0,NULL,uart_wakeup_init2);}
#define LOG(...)                    {log_printf(__VA_ARGS__);}
#define LOG_DEBUG(...)              {log_printf("[DBG]");log_printf(__VA_ARGS__);}
#define LOG_ERROR(...)              {log_printf("[ERR]");log_printf(__VA_ARGS__);}
#define AT_LOG(...)                 {log_printf(__VA_ARGS__);}
#define LOG_DUMP_BYTE(a,b)          my_dump_byte(a,b)

#endif


//tx data anyway
#define PRINT(...)                  {SWU_TX(); log_printf(__VA_ARGS__);}

extern volatile uint32_t s_rom_debug_level;

typedef void(*std_putc)(char* data, int size);

void log_vsprintf(std_putc putc, const char *fmt, va_list args);
void log_printf(const char *format, ...);
void log_set_putc(std_putc putc);
void log_clr_putc(std_putc putc);
int log_debug_level(uint8_t level);
uint32_t log_get_debug_level(void);


#endif
