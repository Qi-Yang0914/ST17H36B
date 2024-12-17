
/**************************************************************************************************
    Filename:       OSAL_adc.c
    Revised:        $Date: 2011-03-30 20:15:59 -0700 (Wed, 30 Mar 2011) $
    Revision:       $Revision: 16 $


**************************************************************************************************/

/**************************************************************************************************
                                              INCLUDES
 **************************************************************************************************/
#include "OSAL.h"
#include "OSAL_Tasks.h"
#include "ll.h"

/* Application */
#include "timx_app.h"
/*********************************************************************
    GLOBAL VARIABLES
*/

// The order in this table must be identical to the task initialization calls below in osalInitTask.
pTaskEventHandlerFn tasksArr[] =
{
    LL_ProcessEvent,
    timx_demo_ProcessEvent,
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
    LL_Init( taskID++);
    /* Application */
    timx_demo_Init(taskID);
}

/*********************************************************************
*********************************************************************/
