
/**************************************************************************************************
    Filename:       OSAL_PropProtocol.c
    Revised:
    Revision:

    Description:    This file contains function that allows user setup tasks



**************************************************************************************************/

/**************************************************************************************************
                                              INCLUDES
 **************************************************************************************************/
#include "rom_sym_def.h"
#include "types.h"
#include "OSAL.h"
#include "OSAL_Tasks.h"

/* Application */
#include "prop_protocol.h"
/*********************************************************************
    GLOBAL VARIABLES
*/

// The order in this table must be identical to the task initialization calls below in osalInitTask.
pTaskEventHandlerFn tasksArr[] =
{
    PPP_ProcessEvent,                                  // task
};

uint16 tasksCnt = sizeof( tasksArr ) / sizeof( tasksArr[0] );
uint16* tasksEvents;

/*********************************************************************
    FUNCTIONS
 *********************************************************************/

/*********************************************************************
    @fn      osalInitTasks

    @brief   This function invokes the initialization function for each task.

    @param   void

    @return  none
*/
void __ATTR_FUNC_RAM__(osalInitTasks)(void);
void osalInitTasks( void )
{
    uint8 taskID = 0;
    tasksEvents = (uint16*)osal_mem_alloc( sizeof( uint16 ) * tasksCnt);
    osal_memset( tasksEvents, 0, (sizeof( uint16 ) * tasksCnt));
    /* Application */
    PropProtocol_Init( taskID++ );
}

/*********************************************************************
*********************************************************************/
