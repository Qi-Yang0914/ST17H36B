

/**************************************************************************************************
  Filename:       OSAL_SimpleBLEPeripheral.c
  Revised:         
  Revision:       

  Description:    This file contains function that allows user setup tasks



**************************************************************************************************/

/**************************************************************************************************
 *                                            INCLUDES
 **************************************************************************************************/
#include "rom_sym_def.h"
#include "OSAL.h"
#include "OSAL_Tasks.h"

/* LL */
#include "ll.h"

/* Application */
#include "gpio_demo.h"

/*********************************************************************
 * GLOBAL VARIABLES
 */
// The order in this table must be identical to the task initialization calls below in osalInitTask.
pTaskEventHandlerFn tasksArr[] =
{
  LL_ProcessEvent,                                                  // task 0
#if(CFG_EVEVT==1)
  Osal_Time_ProcessEvent
  
#else
  gpio_ProcessEvent                                  				// task 1

#endif
};

uint16 tasksCnt = sizeof( tasksArr ) / sizeof( tasksArr[0] );
uint16 *tasksEvents;

/*********************************************************************
 * FUNCTIONS
 *********************************************************************/

/*********************************************************************
 * @fn      osalInitTasks
 *
 * @brief   This function invokes the initialization function for each task.
 *
 * @param   void
 *
 * @return  none
 */
void __ATTR_FUNC_RAM__(osalInitTasks)(void);
void osalInitTasks( void )
{
  uint8 taskID = 0;

  tasksEvents = (uint16 *)osal_mem_alloc( sizeof( uint16 ) * tasksCnt);
//  PRINT("osalInitTasks,tasksEvents %p\n",tasksEvents);
  osal_memset( tasksEvents, 0, (sizeof( uint16 ) * tasksCnt));

  /* LL Task */
  LL_Init( taskID++ );

  /* Application */
#if(CFG_EVEVT==1)
  Osal_Time_Init(taskID);

#else
  gpio_Init( taskID );

#endif	
}
/*********************************************************************
*********************************************************************/