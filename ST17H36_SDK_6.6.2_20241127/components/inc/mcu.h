
/**************************************************************************************************
  Filename:       bus_dev.h
  Revised:         
  Revision:        

  Description:    Describe the purpose and contents of the file.


 
**************************************************************************************************/

#ifndef _HAL_MCU_H
#define _HAL_MCU_H
 


/* ------------------------------------------------------------------------------------------------
 *                                           Includes
 * ------------------------------------------------------------------------------------------------
 */
#include "types.h"
#include <stdint.h>

//enum{
//  MCU_UNDEF    = 0,
//  MCU_PRIME_A1 = 1,
//  MCU_PRIME_A2 = 2,
//  MCU_BUMBEE_M0,
//  MCU_BUMBEE_CK802
//};

#define MCU_UNDEF 0
#define MCU_PRIME_A1 1
#define MCU_PRIME_A2 2
#define MCU_BUMBEE_M0 3
#define MCU_BUMBEE_CK802 4


/******** ROM memory layout **********/
/*
base    :   0x00028000
memory offset
0000 ~ 0200   512B, jump table and global config
0200 ~ 0600   1KB, rom variable and rom common stack
0600 ~ 1600   4KB, program mode: command buffer and data buffer
1600 ~ 1700   256B, DWC buffer, overlap with programing mode stack, time-shared
1400 ~ 1800   1024, bytes at most, programing mode stack
*/

/* only used in ate mode
1fff1000 ~ 1fff1804  used by ate otp  : otp_default_value_check
1fff1000 ~ 1fff1084  used by ate sram ret test
*/
/*************  end    ***************/


#define SRAM_BASE_ADDR          0x00028000
#define SRAM_END_ADDR           (SRAM_BASE_ADDR+0x2000)  //8KB Sram
#define ROM_BASE_ADDR           0x00000000
#define ROM_END_ADDR            0x00018000


//#define ROM_SRAM_JUMPTABLE      SRAM_BASE_ADDR
//#define ROM_SRAM_GLOBALCFG      (ROM_SRAM_JUMPTABLE+0x100)
//#define ROM_SRAM_JUMPTABLE_MIRROR   0x1fff1800
//#define ROM_SRAM_GLOBALCFG_MIRROR   (ROM_SRAM_JUMPTABLE_MIRROR+0x100)

#define ROM_SRAM_HEAP           (SRAM_BASE_ADDR + 0x800)    //offset 2K 800h~1000h
#define ROM_SRAM_HEAP_SIZE      (1024*2)

//#define ROM_SRAM_DWC_BUF        (SRAM_BASE_ADDR + 0x1600)
//#define ROM_SRAM_DWC_SIZE       (64*4)



#define ROM_PROG_MODE_STACK_TOP (SRAM_END_ADDR - 8) //don't touch the last 8 bytes


#define APP_SRAM_START_ADDR     (SRAM_BASE_ADDR+0x0600) //never referenced


/* ------------------------------------------------------------------------------------------------
 *                                        Target Defines
 * ------------------------------------------------------------------------------------------------
 */
 
#define MAXMEMHEAP 4096

//#define HAL_ISER   *((volatile uint32_t *)(0xe000e100))
//#define HAL_ICER   *((volatile uint32_t *)(0xe000e180))


//#ifdef NO_STACK
//delete this to removing compile error of testcase31_lltest.
//#else

//subWriteReg: write value to register zone: bit[high:low]

#if 1
#define   subWriteReg(addr,high,low,value)    {write_reg(addr,(read_reg(addr)&\
                                              (~((((unsigned int)1<<((high)-(low)+1))-1)<<(low))))|\
                                                  ((unsigned int)(value)<<(low)));__asm volatile("nop");}
#else
extern void subWriteReg(uint32_t addr,uint8_t high,uint8_t low,uint32_t value);
#endif
//#endif
 
																										
#define TIME_BASE               (0x003fffff) // 24bit count shift 2 bit as 1us/bit
#define TIME_DELTA(x,y)         ( (x>=y) ? x-y : TIME_BASE-y+x )
																									
/*------------------------------------------------------
*  add arg for drv_enable_irq suport YoC software tspend
*/
//extern void drv_irq_init(void);
//extern int drv_enable_irq(void);
//extern int drv_disable_irq(void);
//#define HAL_CRITICAL_SECTION_INIT()   drv_irq_init()
//#define HAL_ENTER_CRITICAL_SECTION()  drv_disable_irq()
//#define HAL_EXIT_CRITICAL_SECTION()   drv_enable_irq()

/*-----------------------------------------------------
* for rom symoble use the _HAL_CS_ALLOC_
*/
extern void drv_irq_init(void);
extern int drv_enable_irq(int cs);
extern int drv_disable_irq(void);
//#define HAL_CRITICAL_SECTION_INIT()             drv_irq_init()


#define _HAL_CS_ALLOC_()                        int _drv_irq_cs

#define HAL_ENTER_CRITICAL_SECTION()            { _drv_irq_cs = drv_disable_irq();} 
#define HAL_EXIT_CRITICAL_SECTION()             { drv_enable_irq(_drv_irq_cs);} 


//#define DRV_ENTER_CRITICAL_SECTION()            {drv_disable_irqx();}
//#define DRV_EXIT_CRITICAL_SECTION()             {drv_enable_irqx(0);}


/**************************************************************************************************
 */
#endif
