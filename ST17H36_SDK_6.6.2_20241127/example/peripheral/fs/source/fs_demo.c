
/**************************************************************************************************
    Filename:       fs_demo.c
    Revised:        $Date $
    Revision:       $Revision $


**************************************************************************************************/

/*********************************************************************
    INCLUDES
*/
#include "OSAL.h"
#include "gpio.h"
#include "clock.h"
#include "timer.h"
//#include "fs_test.h"

#include "fs_demo.h"
#include "cliface.h"
#include "fs_autotest.h"
#include "fs_test.h"
#include "flash.h"

#include "log.h"
#include "cliface.h"

static uint8 fs_TaskID;


/*********************************************************************
    @fn      AP_TIMER_Demo_Init

    @brief

    @param

    @return
*/

/*
    void fs_Init( uint8 task_id )
    {

      fs_TaskID = task_id;

    #if (FS_TEST_TYPE == FS_MODULE_TEST)
    osal_start_timerEx(fs_TaskID, FS_TEST_EVT,1000);
    #elif (FS_TEST_TYPE == FS_EXAMPLE)
    osal_start_timerEx(fs_TaskID, FS_EXAMPLE_EVT,1000);
    #elif (FS_TEST_TYPE == FS_TIMING_TEST)
    osal_start_timerEx(fs_TaskID, FS_TIMING_EVT,1000);
    #elif (FS_TEST_TYPE == FS_XIP_TEST)
    osal_start_timerEx(fs_TaskID, FS_XIP_EVT,1000);
    #else
    #error please check your config parameter
    #endif
    }
    uint16 fs_ProcessEvent( uint8 task_id, uint16 events )
    {
    if (events & FS_TEST_EVT)
    {
        #if (FS_TEST_TYPE == FS_MODULE_TEST)
        LOG("ftcase_write_del_test\n");
        ftcase_write_del_test();
        osal_start_timerEx(fs_TaskID, FS_EXAMPLE_EVT,10000);
        #endif
        return (events ^ FS_TEST_EVT);
    }

    if (events & FS_EXAMPLE_EVT)
    {
        #if (FS_TEST_TYPE == FS_EXAMPLE)
        LOG("fs_example\n");
        fs_example();
        osal_start_timerEx(fs_TaskID, FS_EXAMPLE_EVT,500);
        #endif
        return (events ^ FS_EXAMPLE_EVT);
    }

    if (events & FS_XIP_EVT)
    {
        #if (FS_TEST_TYPE == FS_XIP_TEST)
        LOG("fs_xip_test\n");
        fs_xip_test();
        osal_start_timerEx(fs_TaskID, FS_XIP_EVT,500);
        #endif
        return (events ^ FS_EXAMPLE_EVT);
    }

    if (events & FS_TIMING_EVT)
    {
        #if (FS_TEST_TYPE == FS_TIMING_TEST)
        LOG("fs_timing_test\n");
        fs_timing_test();
        #endif
        return (events ^ FS_TIMING_EVT);
    }

    return 0;
    }
*/
void CLI_msg_send(uint8_t* pmsg)
{
    osal_msg_send(fs_TaskID, pmsg);
}

void fs_Init( uint8 task_id )
{
    fs_TaskID = task_id;
    // hal_fs_init(FS_OFFSET_ADDRESS, FS_SECTOR_NUM);
    // hal_fs_init(FS_OFFSET_ADDRESS,BACKUP_BASE_ADDR, FS_SECTOR_NUM);

    CLI_UART_INIT("fstcmd>>:");
    fst_cmd_register();

}
uint16 fs_ProcessEvent( uint8 task_id, uint16 events )
{
    if ( events & SYS_EVENT_MSG )
    {
         osal_event_hdr_t* pmsg;
        pmsg =  (osal_event_hdr_t*)osal_msg_receive( fs_TaskID);

        if((pmsg) != NULL)
        {
            if(pmsg->event == CLI_OSAL_MSG_EVENT)
            {
                extern void CLI_cmd_msg_handler(osal_event_hdr_t* pmsg);
                CLI_cmd_msg_handler(pmsg);
            }

            VOID osal_msg_deallocate( (uint8_t*) pmsg );
            return (events ^ SYS_EVENT_MSG);
        }
    }

    return 0;
}
