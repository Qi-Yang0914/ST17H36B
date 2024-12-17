


/**************************************************************************************************
  Filename:       jump_table.c
  Revised:        
  Revision:       

  Description:    Jump table that holds function pointers and veriables used in ROM code.
                  

**************************************************************************************************/

/*******************************************************************************
 * INCLUDES
 */
//#include "rom_sym_def.h"
#include "jump_function.h"
#include "global_config.h"
#include "OSAL_Tasks.h"
#include "rf_phy_driver.h"
//#include "pwrmgr.h"
#include "gpio.h"
#include "timer.h"
#include "uart.h"
#include "log.h"

/*******************************************************************************
 * MACROS
 */


static void hard_fault(void)
{
#if (PHY_MCU_TYPE == MCU_BUMBEE_M0)
    unsigned int cur_sp = __current_sp();
    LOG("Hard Fault SP is %x\n",cur_sp);
	for(int i = 0; i< 0x10; i++){
	    LOG("0x%x,", ((uint32_t*)cur_sp)[i]);
	}
	while(1){
        ;
	}
#endif
}

extern void trap_c(uint32_t *regs);
/*******************************************************************************
 * CONSTANTS
 */
// jump table, this table save the function entry which will be called by ROM code
// item 1 - 4 for OSAL task entry
// item 224 - 255 for ISR(Interrupt Service Routine) entry
// others are reserved by ROM code
volatile  uint16_t* jump_table_base = (uint16_t*)0x1fff0000;
volatile  uint32_t* global_config   = (uint32_t*)0x1fff0100;





