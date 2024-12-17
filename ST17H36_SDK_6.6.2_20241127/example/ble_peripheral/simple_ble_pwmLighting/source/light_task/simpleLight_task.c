
/**************************************************************************************************
    Filename:       simpleBLEPeripheral.c
    Revised:
    Revision:

    Description:    This file contains the Simple BLE Peripheral sample application


**************************************************************************************************/
/*********************************************************************
    INCLUDES
*/
#include "rom_sym_def.h"
#include "bcomdef.h"
#include "rf_phy_driver.h"
#include "global_config.h"
#include "OSAL.h"
#include "OSAL_PwrMgr.h"
#include "gatt.h"
#include "hci.h"
#include "gapgattserver.h"
#include "gattservapp.h"
#include "devinfoservice.h"
#include "peripheral.h"
#include "gapbondmgr.h"
#include "hci_tl.h"
#include "gatt_uuid.h"
#include "simpleBLEPeripheral.h"
#include "simpleGATTprofile.h"

#include "simpleLight_task.h"
#include "lightBar_color_paint.h"
#include "log.h"
#include "clock.h"
#include "timx_pwm.h"
/*********************************************************************
    MACROS
*/
/*********************************************************************
    CONSTANTS
*/

/*********************************************************************
    TYPEDEFS
*/

/*********************************a************************************
    GLOBAL VARIABLES
*/

uint8 simpleLight_TaskID; // Task ID for internal task/event processing

static void SimpleLight_ProcessOSALMsg(osal_event_hdr_t *pMsg);

static void simpleLight_app_process(void);
/*********************************************************************
    PUBLIC FUNCTIONS
*/

/*********************************************************************
    @fn      SimpleLight_Init

    @brief   Initialization function for the Simple BLE Peripheral App Task.
            This is called during initialization and should contain
            any application specific initialization (ie. hardware
            initialization/setup, table initialization, power up
            notificaiton ... ).

    @param   task_id - the ID assigned by OSAL.  This ID should be
                      used to send messages and set timers.

    @return  none
*/
void SimpleLight_Init(uint8 task_id)
{
    simpleLight_TaskID = task_id;
    LOG("SimpleLight_Init\n");

    device_all_data.line_0 = lightBar_line[device_all_data.light_linear][0];
    device_all_data.line_1 = lightBar_line[device_all_data.light_linear][1];
    device_all_data.line_2 = lightBar_line[device_all_data.light_linear][2];
    osal_start_timerEx(simpleLight_TaskID, SIMPLELIGHT_PAINT_LIGHTBAR_EVT, 100);
    osal_start_timerEx(simpleLight_TaskID, SIMPLELIGHT_FRESH_COLORBUF_EVT, 50);

    timx_pwm_instant_init(16,1000);
    //osal_start_timerEx(simpleLight_TaskID, SBP_PWM_CHANGE_EVT, 1500);
    //timx_pwm_init();

    // osal_start_timerEx(simpleLight_TaskID, SBP_TEST_NRZ_AUTORELOAD_EVT, 800);
}

/*********************************************************************
    @fn      SimpleBLEPeripheral_ProcessEvent

    @brief   Simple BLE Peripheral Application Task event processor.  This function
            is called to process all events for the task.  Events
            include timers, messages and any other user defined events.

    @param   task_id  - The OSAL assigned task ID.
    @param   events - events to process.  This is a bit map and can
                     contain more than one event.

    @return  events not processed
*/
// static int s_tmp_cnt;
uint16 SimpleLight_ProcessEvent(uint8 task_id, uint16 events)
{
    VOID task_id; // OSAL required parameter that isn't used in this function
#ifdef _PHY_DEBUG
    LOG("%s,%s,Line %d\n", __FILE__, __func__, __LINE__);
#endif

    if (events & SYS_EVENT_MSG)
    {
        uint8 *pMsg;

        if ((pMsg = osal_msg_receive(simpleLight_TaskID)) != NULL)
        {
            SimpleLight_ProcessOSALMsg((osal_event_hdr_t *)pMsg);
            // Release the OSAL message
            osal_msg_deallocate(pMsg);
        }

        // return unprocessed events
        return (events ^ SYS_EVENT_MSG);
    }

    if (events & SIMPLELIGHT_PAINT_LIGHTBAR_EVT)
    {

        return (events ^ SIMPLELIGHT_PAINT_LIGHTBAR_EVT);
    }

    if (events & SIMPLELIGHT_FRESH_COLORBUF_EVT)
    {
        // test only
        //  color_driver_mode_Marquee(2);
        // osal_start_timerEx( simpleLight_TaskID, SIMPLELIGHT_FRESH_COLORBUF_EVT, 2500 );
        return (events ^ SIMPLELIGHT_FRESH_COLORBUF_EVT);
    }

    if (events & SIMPLELIGHT_GATT_MESSAGE_EVT)
    {
        // LOG("SimpleLight_ProcessEvent, SIMPLELIGHT_GATT_MESSAGE_EVT\n");
        
        LOG("app len:%d\n", device_all_data.app_data_len);
        LOG_DUMP_BYTE(&device_all_data.app_data[0], device_all_data.app_data_len);
         simpleLight_app_process();
        return (events ^ SIMPLELIGHT_GATT_MESSAGE_EVT);
    }

    if (events & SBP_TEST_NRZ_AUTORELOAD_EVT)
    {

        return (events ^ SBP_TEST_NRZ_AUTORELOAD_EVT);
    }

    if (events & SBP_PWM_CHANGE_EVT)
    {
      static uint8 pwm_duty = 0;

      LOG( "PWM_Duty:%d\n", pwm_duty);
      timx_pwm_shift_pwmDuty(1, pwm_duty);

      pwm_duty=pwm_duty+20;

      if(pwm_duty>100)
        pwm_duty=0;
 
        
       osal_start_timerEx(simpleLight_TaskID, SBP_PWM_CHANGE_EVT, 500);

       return (events ^ SBP_PWM_CHANGE_EVT);
    }

    
    return (0);
}

/*********************************************************************
    @fn      SimpleLight_ProcessOSALMsg

    @brief   Process an incoming task message.

    @param   pMsg - message to process

    @return  none
*/
static void SimpleLight_ProcessOSALMsg(osal_event_hdr_t *pMsg)
{
#ifdef _PHY_DEBUG
    LOG("%s,%s,Line %d\n", __FILE__, __func__, __LINE__);
#endif

    switch (pMsg->event)
    {
#ifdef _PHY_DEBUG

    case GAP_MSG_EVENT:
        LOG("	Peripheral Bypass Message to Application\n");
        LOG("	Message Opcode 0x%X\n", ((gapEventHdr_t *)pMsg)->opcode);

        if (GAP_DEVICE_INIT_DONE_EVENT == ((gapEventHdr_t *)pMsg)->opcode)
        {
            LOG("	Device Initiliaztion Done\n");
            LOG("	Please Start Application Logic...\n");
        }

        break;
#endif
    }
}

//--------------------APP数据判断---------------------//
void simpleLight_app_process(void)
{
    uint8 send_data[20] = {0};
    uint8 app_data[20] = {0};
    uint16 get_cmd_value = 0;
    
    osal_memcpy(app_data, device_all_data.app_data, device_all_data.app_data_len);

    if (app_data[0] != 0x7e)
        return;
   
    get_cmd_value = app_data[1] << 8 | app_data[2];
     LOG("CMD:%x\n",get_cmd_value);
    switch (get_cmd_value)
    {
    case 0x0401: // 亮度控制
        device_all_data.rgb_brightness = app_data[3];
        LOG("RGB_BRIGHT:%d\n", device_all_data.rgb_brightness);
        timx_pwm_shift_pwmDuty(BIT(0),device_all_data.rgb_brightness);
        timx_pwm_shift_pwmDuty(BIT(1),device_all_data.rgb_brightness);
        timx_pwm_shift_pwmDuty(BIT(3),device_all_data.rgb_brightness);
        break;
    case 0x0402: // 速度控制
        device_all_data.light_speed = (100 - app_data[3]) / 10;
        if (device_all_data.light_speed == 0)
        {
            device_all_data.light_speed = 1;
        }
        break;
    case 0x0404: // 灯带使能 禁用
        device_all_data.light_onoff_flag = app_data[5];
        LOG("ONOFF:%d\n", device_all_data.light_onoff_flag);
        break;
    case 0x406: // 灵敏度控制
        break;
    case 0x0503: // 模式控制
        if (app_data[4] == 0x03)
        {
            device_all_data.light_state = 0; // 切换动态
            device_all_data.light_mode = (app_data[3] & 0x7f) + 1;

           // device_all_data.remote_auto_flag = 0; // 退出自动循环
            LOG("mode:%d\n", device_all_data.light_mode);
        }
        else
        {
            LOG("MIC_MODE\n");
        }
        break;
    case 0x0505:                         // 黑白控制
        device_all_data.light_state = 1; // 切换调色
        device_all_data.rgb_pwm_value[0] = 127;
        device_all_data.rgb_pwm_value[1] = 127;
        device_all_data.rgb_pwm_value[2] = 127;
       
        break;
    case 0x0605:                         // 冷暖控制
        device_all_data.light_state = 1; // 切换调色
        device_all_data.rgb_pwm_value[0] = 180;
        device_all_data.rgb_pwm_value[1] = 180;
        device_all_data.rgb_pwm_value[2] = 180 * (100 - app_data[4]) / 100;
        break;
    case 0x0681: // RGB线序
        // device_all_data.light_chioce_linear = app_data[4];
        // LOG("liner:%d\n",app_data[4],device_all_data.light_chioce_linear);
        break;
    case 0x0705:                         // 静态颜色
        device_all_data.light_state = 1; // 切换调色

        device_all_data.rgb_pwm_value[0] = app_data[4];
        device_all_data.rgb_pwm_value[1] = app_data[5];
        device_all_data.rgb_pwm_value[2] = app_data[6];
        LOG("R:%d G:%d B:%d\n", app_data[4], app_data[5], app_data[6]);


        timx_pwm_shift_pwmDuty(BIT(0),(app_data[4]*100)>>8);
        timx_pwm_shift_pwmDuty(BIT(1),(app_data[5]*100)>>8);
        timx_pwm_shift_pwmDuty(BIT(3),(app_data[6]*100)>>8);


        break;
    case 0x0783: // 设置时间
       
        break;
    case 0x0882: // 设置单组定时  //读取单组定时
        if (app_data[3] != 0xff && app_data[4] != 0xff && app_data[5] != 0xff)
        {
            if (!app_data[6])
            { // 设置定时开
                if (app_data[7] & 0x80)
                {
                 
                }
                else
                {
                   
                }
            }
            else
            { // 设置定时关
               
            }
         
            LOG("ID:%d week:%d hour:%d min:%d state:%d\n", app_data[6], app_data[7], app_data[3], app_data[4], app_data[5]);
        }
        else
        {
            // 定时查询
            if (!app_data[6])
            {
                send_data[0] = 0x7e;
                send_data[1] = 0x08;
                send_data[2] = 0x82;
                send_data[3] = 2; // 小时
                send_data[4] = 30; // 分钟
                send_data[5] = 0x00;
                send_data[6] = 1; // 秒
                send_data[7] = 1;
                send_data[8] = 0xef;
            }
            else
            {
                send_data[0] = 0x7e;
                send_data[1] = 0x08;
                send_data[2] = 0x82;
                send_data[3] = 2; // 小时
                send_data[4] = 29; // 分钟
                send_data[5] = 0x01;
                send_data[6] = 5; // 秒
                send_data[7] = 5;
                send_data[8] = 0xef;
            }
            // ble_send_data(0,9,send_data);
           // extern void save_read_value(uint8 len, void *value);
           // save_read_value(9, send_data);
            LOG("app_get_time\n");
        }
        break;
    }
}
