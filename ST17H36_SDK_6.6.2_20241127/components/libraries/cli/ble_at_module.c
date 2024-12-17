
/**************************************************************************************************
  Filename:       ble_at_module.c
  Revised:        
  Revision:       

  Description:    This file contains the at ble sample application
                  

**************************************************************************************************/

/*********************************************************************
 * INCLUDES
 */
#include "rom_sym_def.h"
#include "OSAL.h"
#include "OSAL_PwrMgr.h"
#include "uart.h"
#include "ble_at_module.h"
#include "at_ble_cmd.h"
#include "jump_function.h"
#include "gpio.h"
#include "pwrmgr.h"
#include "gap.h"
#include "att.h"

#ifdef BLE_AT_IIC
#include "ll_def.h"
#include "i2c_s.h"
#include "osal_bufmgr.h"
#include "clock.h"
#define JUDGE_CRC FALSE
#endif
// Task ID for internal task/event processing
uint8 bleAT_TaskID;
#define BLE_AT_GAP_DEFAULT_ADV_POLICY					 GAP_FILTER_POLICY_ALL
#define AT_UART_WAKEUP_PIN P5
extern at_env_param at_parameters;
uint8_t at_transparent_flag = 0xff;
static unsigned char cmdstr[262];
static uint16 cmdlen;

const at_efuse_data at_efuse_config =
{
    .auto_sleep_mode = 0,
    .stay_awake_time = 100,
    .Device_name = "at_device",//length？in this way ,just use strlen is ok
    .Baud_rate = 2,
    .tx_pin = P4,
    .rx_pin = P5,
    .wakeup_pin = P5,
    .adv_switch = 1,
    .adv_IND = 32,
    //.unknown = 0,
    // .version = "1.0.0"
};

#ifdef BLE_AT_IIC
typedef struct 
{
    uint8_t* buffer;
    uint16_t length;
}iic_tx_data;

static llDataQ_t cmd_rsp_buf;
static llDataQ_t conn_evt_buf;

extern uint8 llEnqueueDataQ( llDataQ_t *pDataQ, txData_t *pTxData );
extern txData_t *llDequeueDataQ( llDataQ_t *pDataQ );

void iic_slave_tx_jump(void)
{
    if(cmd_rsp_buf.head != NULL)
    {
        osal_bm_free( llDequeueDataQ( &cmd_rsp_buf ) );
    }
}
extern at_env_param at_parameters;

/// @brief encapsulation receive data 
void iic_encaps_receive_data(uint8_t* buffer,uint8_t length)
{
    uint16_t c_len = cmdlen + length;
    if(c_len < sizeof(cmdstr))
    {
        osal_memcpy((cmdstr + cmdlen), buffer, length);
        cmdlen += length;
        // AT_LOG("RX %d\n",cmdlen);
        osal_set_event( bleAT_TaskID, AT_PROCESS_IIC_RX_CMD_EVT );
        // if(at_parameters.auto_sleep_mode)
        // {
        //     osal_start_timerEx(bleAT_TaskID,AT_PROCESS_IIC_SLAVE_SLEEP_EVT,25);
        // }
        
    }
    else
    {
        cmdlen = 0;
    }

}

#if JUDGE_CRC
/// XOR calculate
uint8_t XOR_check(uint8_t *Buf, uint16_t Len)
{
    uint8_t i = 0;
    uint8_t x = 0;

    for(i=0; i<Len; i++)
    {
        x = x^(*(Buf+i));
    }

    return x;
}
#endif

/// @brief encapsulation send data 
/// abandon frame counter 
void iic_encaps_send_data(packet_type type,uint8_t* buffer,uint16_t length)
{
  uint8_t* total_buffer;
  uint8_t header = 0,total_frame_num,remain_length,crc_value = 0;
  uint16_t total_length;
  total_length = length + HEADER_LEN + osal_strlen(END_FLAG) + CRC_SIZE;
  /// 1. calculate total buffer sizes
  total_frame_num = total_length/IIC_DEFAULT_DATA_LEN;
  remain_length = total_length%IIC_DEFAULT_DATA_LEN;
  if(remain_length)
  total_frame_num += 1;
  total_length = total_frame_num*IIC_DEFAULT_DATA_LEN;
  /// 2.alloc memory 
  total_buffer = osal_mem_alloc(total_length);
  osal_memset(total_buffer,0,total_length);
  /// 3.encapsulation packets
  // header = (type&0x7)<<5 | frame_counter&0x1F;
  header = (uint8_t)(type&0x7)<<5;
  total_buffer[0] = header;
  osal_memcpy((uint8_t *)&total_buffer[1],buffer,length);
  total_buffer[length+1] = '\r';
  total_buffer[length+2] = '\n';
  #if JUDGE_CRC
  crc_value = XOR_check((uint8_t *)&total_buffer[0],total_length-1);//exclued crc byte
  #else
    crc_value = 0xcc;
  #endif
  /// 4.if have remain length, need add 0 at the end
  if(remain_length)
  {
    total_buffer[length+3] = crc_value;
    for(uint8_t i = remain_length; i < IIC_DEFAULT_DATA_LEN; i++)
    {
      total_buffer[length+4+(i-remain_length)] = 0;
    }
  }
  else
  {
    *(total_buffer) = crc_value;
  }
    // AT_LOG("total_length: %d remain_length: %d\n",total_length,remain_length);
    // for(uint8_t i = 0; i < total_length; i++)
    // {
    //     AT_LOG("%02x",total_buffer[i]);
    // }
    // AT_LOG("\n");
  /// 5.copy data and free the total buffer
  if(type == AT_CMD_RSP)
  {
    ///push data to tx dataQ
    for(uint8_t i = 0; i < total_frame_num; i++)
    {
        uint8_t *txdata = NULL;
        txData_t      *pTxData;
        txdata = osal_mem_alloc(IIC_DEFAULT_DATA_LEN);
        if(txdata)
        {
            osal_memcpy(txdata,&total_buffer[i*IIC_DEFAULT_DATA_LEN],IIC_DEFAULT_DATA_LEN);
            pTxData = (txData_t *)(txdata - sizeof(txData_t));
            llEnqueueDataQ( &cmd_rsp_buf, pTxData );
            // AT_LOG("tx dataQ OK\n");
        }
        // else
        // {
        //     AT_LOG("tx dataQ er\n");
        // }
    }
    osal_mem_free(total_buffer);
  }
  else if (type == CONN_EVT)
  {
    ///push data to tx dataQ
    for(uint8_t i = 0; i < total_frame_num; i++)
    {
        uint8_t *txdata;
        txData_t      *pTxData;
        txdata = osal_mem_alloc(IIC_DEFAULT_DATA_LEN);
        if(txdata)
        {
            osal_memcpy(txdata,&total_buffer[0],IIC_DEFAULT_DATA_LEN);
            pTxData = (txData_t *)(txdata - sizeof(txData_t));
            llEnqueueDataQ( &conn_evt_buf, pTxData );
        }
        // else
        // {
        //     AT_LOG("tx dataQ er\n");
        // }
    }
    osal_mem_free(total_buffer);
  }
  else
  {
    AT_LOG("ERROR IIC SEND TYPE\n");
  } 

}

#endif

void bleAT_Init( uint8 task_id )
{
    bleAT_TaskID = task_id;
    osal_set_event( bleAT_TaskID, AT_START_DEVICE_EVT );
}

// static void ProcessAtUartData(comm_evt_t* evt)
// {
//     AT_LOG("AtUart\n");
//     // LOG("AtUart\n");
//     // gpio_write(P14, 1);
//     // gpio_write(P14, 0);
//     switch(evt->type)
// 	{
// 		case  UART_EVT_TYPE_RX_DATA:
// 		//case  UART_EVT_TYPE_RX_DATA_TO:
//         {
//             // gpio_write(P13, 1);
//             // gpio_write(P13, 0);
//             uint16_t c_len = cmdlen + evt->len;
//             if(c_len < sizeof(cmdstr))
//             {
//                 // gpio_write(P10, 1);
//                 // gpio_write(P10, 0);
//                 osal_memcpy((cmdstr + cmdlen), evt->data, evt->len);
//                 cmdlen += evt->len;
//                 //AT_LOG("RX %d\n", cmdlen);
//                 osal_set_event( bleAT_TaskID, AT_PROCESS_UART_RX_CMD_EVT );
//             }
//             else
//             {
//                 cmdlen = 0;
//             }
//         }
// 		break;
		
// 		default:
//         // {
//         //     gpio_write(P12, 1);
//         //     gpio_write(P12, 0);
//         // }
// 		break;
// 	}   
// }
uint8_t urat_drop_flag = 0;
void AT_UART_IRQHandler(void)
{
    // gpio_write(P10, 1);
    // gpio_write(P10, 0);
    uint8_t data[UART_RX_FIFO_SIZE];
    uint16 i, len;
    uint16 c_len;
    uint8_t mtu = ATT_GetCurrentMTUSize(0) - 7; // get mtu
    osal_stop_timerEx(bleAT_TaskID, AT_PROCESS_TRANSPARENT_SEND);
    uint8 urat_state = uart0_iir_interrupt_identity_register_get() & 0xf;
    switch (urat_state)
    {
    case RDA_IRQ:
    case TIMEOUT_IRQ:
        len = uart0_rfl_receive_fifo_level_get(); // AP_UART0->RFL;
        for (i = 0; i < len; i++)
        {
            data[i] = (uint8_t)(uart0_rbr_receive_buffer_register_get() & 0xff);
        }
        if (urat_state == TIMEOUT_IRQ && urat_drop_flag)
        {
            urat_drop_flag = 0;
        }
        if (urat_drop_flag)
        {
            return;
        }
        c_len = cmdlen + len;
        if (c_len < sizeof(cmdstr))
        {
            osal_memcpy((cmdstr + cmdlen), data, len);
            cmdlen += len;
            if (cmdstr[0] == 'A' && cmdstr[1] == 'T') // at cmd mode
            {
                osal_set_event(bleAT_TaskID, AT_PROCESS_UART_RX_CMD_EVT);
            }
            else // transparent mode
            {
                if (cmdlen > mtu)
                {
                    urat_drop_flag = 1;
                    cmdlen = 0;
                }
                else if (urat_state == TIMEOUT_IRQ)
                {
                    osal_set_event(bleAT_TaskID, AT_PROCESS_TRANSPARENT_SEND);
                }
                else
                {
                    osal_start_timerEx(bleAT_TaskID, AT_PROCESS_TRANSPARENT_SEND, 10);
                }
            }
        }
        else
        {
            cmdlen = 0;
        }
        break;
    // case TIMEOUT_IRQ:
    //     len = uart0_rfl_receive_fifo_level_get(); // AP_UART0->RFL;
    //     if(len!=0)
    //     {
    //         for (i = 0; i < len; i++)
    //         {
    //             data[i] = (uint8_t)(uart0_rbr_receive_buffer_register_get() & 0xff);
    //         }
    //         if (urat_drop_flag)
    //         {
    //             urat_drop_flag = 0;
    //             return;
    //         }
    //         c_len = cmdlen + len;
    //         if (c_len < sizeof(cmdstr))
    //         {
    //             osal_memcpy((cmdstr + cmdlen), data, len);
    //             cmdlen += len;
    //             if (cmdstr[0] == 'A' && cmdstr[1] == 'T') // at cmd mode
    //             {
    //                 osal_set_event(bleAT_TaskID, AT_PROCESS_UART_RX_CMD_EVT);
    //                 // cmdlen = 0;
    //             }
    //             else // transparent mode
    //             {
    //                 osal_set_event(bleAT_TaskID, AT_PROCESS_TRANSPARENT_SEND);
    //             }
    //         }
    //         else
    //         {
    //             cmdlen = 0;
    //         }
    //     }
    //     break;
    case BUSY_IRQ:
        (void)uart0_usr_uart_status_register_get();
        break;
    }
}

gpioin_t pin_test[1];

void __ATTR_FUNC_RAM__ (ble_at_swu_uart_init)(void)
{
    uart_deinit();
    #ifndef BLE_AT_OTP
    uart_init(at_parameters.Baud_rate_real, at_parameters.tx_pin, at_parameters.rx_pin, uart_cb); // To open irq,here cant be NULL
    #else
    uart_init(115200, P4, P5, uart_cb);
    #endif
    //  uart_deinit();
    //uart_init(115200, P4, P5, ProcessAtUartData);
    JUMP_FUNCTION_SET(V11_IRQ_HANDLER, (uint32_t)&AT_UART_IRQHandler);
    //AT_UART_IRQHandler shall be pulled to ram
    //JUMP_FUNCTION_SET(V11_IRQ_HANDLER, (uint32_t)&AT_UART_IRQHandler);
    //AT_LOG("%d %d %d\n", at_parameters.Baud_rate_real, at_parameters.rx_pin, at_parameters.tx_pin);
    uart0_fcr_fifo_control_register_set(0x81); // rx 1/2 trigger, enable fifo
    uint32 rtc_cnt = aon_rtc_rtc_reg1_rtc_cnt_getf();
    //if (rtc_cnt)
    #if 0
    volatile uint32_t localVal = _FEMTO_REG_RD(0x88 + FEMTO_REG_AON_RTC_BASE_ADDR);
    int num = localVal - rtc_cnt;
    if (num!=(-45))
    {
        pwrmgr_lock(MOD_USR7);
        osal_start_timerEx(bleAT_TaskID, AT_ENTER_ATUO_SLEEP_MODE_EVT, at_parameters.stay_awake_time * 10);
    }
    #else
    pwrmgr_lock(MOD_USR7);
    #ifndef BLE_AT_OTP
    osal_start_timerEx(bleAT_TaskID, AT_ENTER_ATUO_SLEEP_MODE_EVT, at_parameters.stay_awake_time * 10);
    #else
    osal_start_timerEx(bleAT_TaskID, AT_ENTER_ATUO_SLEEP_MODE_EVT, 1000);
    #endif
    //osal_start_timerEx(bleAT_TaskID, AT_ENTER_ATUO_SLEEP_MODE_EVT, at_parameters.stay_awake_time * 10);
    #endif
}



void at_sleep_handle(void)
{
    //AT_LOG("enter sleep\n");
    /// 1.disable funllmx fun
    //AT_LOG("before sleep 05sel %X,mux0 %X\n", _FEMTO_REG_RD(0x4000381c), _FEMTO_REG_RD(0x4000380c));
    gpio_fmux_control(at_parameters.wakeup_pin, Bit_DISABLE);
    /// 2.set and config wakeup pin
    // hal_gpio_pin_init(AT_UART_WAKEUP_PIN, GPIO_INPUT);
    //AT_LOG("before sleep 05sel %X,mux0 %X\n", _FEMTO_REG_RD(0x4000381c), _FEMTO_REG_RD(0x4000380c));
    gpio_pull_set(at_parameters.wakeup_pin, GPIO_PULL_UP);
    rom_gpio_wakeup_set(at_parameters.wakeup_pin, NEGEDGE); //  NEGEDGE
    /// 3.set change clk patch
    // JUMP_FUNCTION(ENTER_SLEEP_OFF_MODE)              =   (uint32_t)&enter_sleep_off_mode2;
    /// 3.dbg: close rtc fun
    // *((volatile uint32 *)0x4000F024) &= ~(1<<0);
    //gpioin_enable(pin_test);
    //gpioin_register(at_parameters.wakeup_pin, (gpioin_Hdl_t)gpio_cb, (gpioin_Hdl_t)gpio_cb);
    //NVIC_EnableIRQ(gpio_IRQn);
}


void GPIO_IRQHandler1(void)
{
    //GPIO_IRQHandler();
    // gpio_write(P9, 1);
    // gpio_write(P9, 0);
    uint32 st = gpio_gpio_intstatus_get();
    // clear interrupt
    gpio_gpio_porta_eoi_set(st);
    pwrmgr_lock(MOD_USR7);
    osal_start_timerEx(bleAT_TaskID, AT_ENTER_ATUO_SLEEP_MODE_EVT, at_parameters.stay_awake_time * 50);
    gpioin_disable(pin_test);
    //NVIC_DisableIRQ(gpio_IRQn);
    gpio_fmux_set(at_parameters.wakeup_pin, FMUX_UART0_RX);
    //osal_set_event(bleAT_TaskID, AT_ENTER_ATUO_SLEEP_MODE_EVT, at_parameters.stay_awake_time * 50);
    //uart_deinit();
    //uart_init(at_parameters.Baud_rate_real, at_parameters.tx_pin, at_parameters.rx_pin, gpio_cb); // To open irq,here cant be NULL
    // JUMP_FUNCTION_SET(V11_IRQ_HANDLER, (uint32_t)&AT_UART_IRQHandler);
    //uart0_fcr_fifo_control_register_set(0x81); 
}


void ble_at_uart_init(void)
{
    //JUMP_FUNCTION_SET(V11_IRQ_HANDLER, (uint32_t)&AT_UART_IRQHandler);
    //pwrmgr_unregister(MOD_USR0);
    int ret = pwrmgr_register(MOD_USR7, at_sleep_handle, ble_at_swu_uart_init);
    //int ret = pwrmgr_register(MOD_USR7, NULL, ble_at_swu_uart_init);
    //pwrmgr_lock(MOD_USR7);
    //JUMP_FUNCTION_SET(GPIO_IRQ_HANDLER, (uint32_t)&GPIO_IRQHandler1);
    // gpio_init();
    // JUMP_FUNCTION_SET(GPIO_IRQ_HANDLER, (uint32_t)&GPIO_IRQHandler1);
    // gpioin_init(pin_test, 1);
    // gpioin_register(at_parameters.wakeup_pin, (gpioin_Hdl_t)gpio_cb, (gpioin_Hdl_t)gpio_cb);
    ble_at_swu_uart_init();
    //gpioin_register(at_parameters.wakeup_pin, NULL, NULL);
    AT_LOG("swu uart init  ret  %d\n",ret );
}

extern uint8 gapAddAddrAdj(uint8 addrType, uint8 *pAddr);
void at_device_config_init(void)
{
    // get efuse and make sure addr is ready
    extern uint8 ownPublicAddr[];
    ownPublicAddr[3] = 0x35; //*(addr++); // 0x35; //*(p++);
    ownPublicAddr[2] = 0x35; //*(addr++); // 0x35; //*(p++);
    ownPublicAddr[1] = 0x35; //*(addr++); // 0x35; //*(p++);
    ownPublicAddr[0] = 0x35; //*(addr++); // 0x35; //*(p++);
    ownPublicAddr[5] = 0x79; //*(addr++); // 0x70; //*(p++);
    ownPublicAddr[4] = 0x79; //*(addr); // 0x70; //*(p);
    // at_parameters.stackcheck1 = 0;
    // at_parameters.stackcheck2 = 0;
    // AT_LOG("stacknum %x %x\n", &at_parameters.stackcheck1, &at_parameters.stackcheck2)
    if (at_efuse_config.sleep_config != 0)
    {
        at_parameters.auto_sleep_mode = at_efuse_config.auto_sleep_mode;
        if (at_efuse_config.stay_awake_time != 0)
            at_parameters.stay_awake_time = at_efuse_config.stay_awake_time;
        else
            at_parameters.stay_awake_time = 100;
    }
    if (at_efuse_config.urat_config != 0)
    {
        switch (at_efuse_config.Baud_rate)
        {
        case 1:
            at_parameters.Baud_rate_real = 9600;
            break;
        case 2:
            at_parameters.Baud_rate_real = 115200;
            break;
        case 3:
            at_parameters.Baud_rate_real = 250000;
            break;
        case 4:
            at_parameters.Baud_rate_real = 500000;
            break;
        default:
            at_parameters.Baud_rate_real = 115200;
        }
        if (at_efuse_config.tx_pin)
            at_parameters.tx_pin = at_efuse_config.tx_pin;
        else
            at_parameters.tx_pin = P4;
        if (at_efuse_config.rx_pin)
            at_parameters.rx_pin = at_efuse_config.rx_pin;
        else
            at_parameters.rx_pin = P5;
        if (at_efuse_config.wakeup_pin)
            at_parameters.wakeup_pin = at_efuse_config.wakeup_pin;
        else
            at_parameters.wakeup_pin = P5;
    }
    if (at_efuse_config.Device_name[0] != 0)
    {
        osal_memcpy(at_parameters.Device_name, at_efuse_config.Device_name, sizeof(at_parameters.Device_name));
    }
    else
    {
        strcpy(at_parameters.Device_name, "at_device");
    }
    // if (at_efuse_config.adv_config!=0)
    // {
    at_parameters.adv_param.adv_mode = at_efuse_config.adv_switch;
    if (at_efuse_config.adv_IND != 0)
        at_parameters.adv_param.adv_int = at_efuse_config.adv_IND;
    else
        at_parameters.adv_param.adv_int = 32;
    //}
    // if (at_efuse_config.version[0] != 0)
    // {
    //     osal_memcpy(at_parameters.version, at_efuse_config.version, sizeof(at_parameters.version));
    // }
    // else
    // {
    //     strcpy(at_parameters.version, "1.0.0");
    // }

    at_parameters.adv_param.adv_type = 0;
    at_parameters.adv_param.peer_addr_type = 0;

    // service uuid
    extern void set_default_uuid(void);
    set_default_uuid();

    // adv data
    uint8 adv_data[3] = {0x02, 0x01, 0x06};
    osal_memcpy(&at_parameters.adv_data[0], adv_data, 3);
    uint8_t ret = HCI_LE_SetAdvDataCmd(3, adv_data);
    if (ret != SUCCESS)
    {
        LOG("ERROR 0\n");
    }
    // scan rsp data
    uint8_t name_length = strlen(at_efuse_config.Device_name) + 1;
    at_parameters.scan_rsp_data[0] = name_length;
    at_parameters.scan_rsp_data[1] = 0x09;
    osal_memcpy(&at_parameters.scan_rsp_data[2], at_parameters.Device_name, name_length - 1);
    ret = HCI_LE_SetScanRspDataCmd(sizeof(at_parameters.scan_rsp_data), at_parameters.scan_rsp_data);
    if (ret != SUCCESS)
    {
        LOG("ERROR 1\n");
    }
    if (at_parameters.adv_param.adv_mode == 1)
    {
        ret = HCI_LE_SetAdvParamCmd(at_parameters.adv_param.adv_int,
                                    at_parameters.adv_param.adv_int,
                                    at_parameters.adv_param.adv_type,
                                    ADDRTYPE_PUBLIC,
                                    gapAddAddrAdj(at_parameters.adv_param.peer_addr_type, at_parameters.adv_param.peer_addr.addr),
                                    at_parameters.adv_param.peer_addr.addr,
                                    at_parameters.adv_param.adv_chnl_map,
                                    BLE_AT_GAP_DEFAULT_ADV_POLICY);
        ret = ret & HCI_LE_SetAdvEnableCmd(1);
        if (ret != SUCCESS)
        {
            LOG("ERROR 2\n");
        }
    }
}

uint16_t bleAT_ProcessEvent( uint8 task_id, uint16_t events )
{
    VOID task_id; // OSAL required parameter that isn't used in this function

    if ( events & SYS_EVENT_MSG )
    {
        uint8* pMsg;

        if ( (pMsg = osal_msg_receive( bleAT_TaskID )) != NULL )
        {
            // Release the OSAL message
            VOID osal_msg_deallocate( pMsg );
        }

        return (events ^ SYS_EVENT_MSG);
    }
    #ifdef BLE_AT_IIC
    // if ( events & AT_PROCESS_IIC_SLAVE_SLEEP_EVT )
    // {
    //     /// enter sleep mode
    //     // pwrmgr_unlock(MOD_USR1);

    //     return (events ^ AT_PROCESS_IIC_SLAVE_SLEEP_EVT);
    // }
    #endif

    if ( events & AT_START_DEVICE_EVT )
    {
        ///ble at uart config & at cmd list init
		AT_LOG("ble at init\n");
        #ifndef BLE_AT_OTP
        at_device_config_init();
        #endif
        #ifndef BLE_AT_IIC
        ble_at_uart_init();

        #else
        // hal_uart_deinit(UART0);
        i2cs_ctx_t  cfg = 
        {
            .id = I2C_0,
            .speed_mod = SPEED_FAST,
            .slave_adr = 0x7d,
            .sda_pin = IIC_SLAVE_SDA_PIN,
            .scl_pin = IIC_SLAVE_SCLK_PIN,
            .rx_done_func = iic_encaps_receive_data,
            .tx_done_func = iic_slave_tx_jump,
        };
        i2cs_initial(cfg);
        rx_OK_register(cfg.rx_done_func);
        tx_OK_register(cfg.tx_done_func);
        pwrmgr_register(MOD_USR1, NULL, NULL);
        // gpio_write(P14,1);gpio_write(P14,0);
        pwrmgr_lock(MOD_USR1);
        AT_LOG("iic slave init\n");
        #endif
        // at_parameters.major = 0x02;
        // at_parameters.minor = 0x08;
        CLI_init((CLI_COMMAND*)ble_at_cmd_list,(sizeof (ble_at_cmd_list)/sizeof(CLI_COMMAND)));
        osal_start_reload_timer(bleAT_TaskID,AT_LOOP_EVT,30000);
        return ( events ^ AT_START_DEVICE_EVT );
    }

    #ifdef BLE_AT_IIC
    if ( events & AT_PROCESS_IIC_RX_CMD_EVT )
    {
        switch (EXTRACT_HEADER(cmdstr[0]))
        {
            case AT_CMD_REQ:
            {
                uint16_t len = cmdlen;
                for(uint8_t i = 0; i < IIC_DEFAULT_DATA_LEN; i++)
                {
                    if (('\r' == cmdstr[len - 2]) && ('\n' == cmdstr[len - 1]))
                    {
                        ///judge CRC ok
                        cmdlen = len;
                        cmdstr[cmdlen] = '\0';
                        // AT_LOG("cmdlen %d\n",cmdlen);
                        CLI_process_line_manual
                        (
                            &cmdstr[1], ///jump header byte
                            cmdlen-1
                        );
                        memset(cmdstr, 0, cmdlen+1);
                        cmdlen = 0;
                        len = 0;
                        break;
                    }
                    else
                    {
                        len--;
                    }

                } 
                /* code */
                break;
            }

            case AT_CMD_RSP:
            {
                uint16_t len = cmdlen;
                /// find end flag and check crc value
                for(uint8_t i = 0; i < IIC_DEFAULT_DATA_LEN; i++)
                {
                    if (('\r' == cmdstr[len - 2]) && ('\n' == cmdstr[len - 1]))
                    {
                        #if JUDGE_CRC
                        ///judge CRC ok
                        uint8_t crc_check = XOR_check((uint8_t *)&cmdstr[0],len);
                        if(crc_check == cmdstr[len])
                        #endif
                        {
                            // AT_LOG("CRC OK\n");
                            cmdlen = len;
                            if(cmd_rsp_buf.head != NULL)
                            {
                                uint8 *pBuf;
                                pBuf = (uint8 *)(cmd_rsp_buf.head + 1);
                                /// iic send data api
                                i2c_slave_send(pBuf,IIC_DEFAULT_DATA_LEN);
                            }
                            else
                            {
                                ///cmd rsp data list empty,while rsp 0xff data to master
                                LOG("cmd rsp data empty\n");
                            }
                        }
                        memset(cmdstr, 0, cmdlen);
                        cmdlen = 0;
                        len = 0;
                        break;
                    }
                    else
                    {
                        len--;
                    }

                } 
                
                break;
            }

            case CONN_EVT:
            {
                break;
            }

            default:
            {
                // LOG("iic master write data error %x cmdlen %d\n",cmdstr[0],cmdlen);
                memset(cmdstr, 0, cmdlen);
                cmdlen = 0;
            }
            break;
        }

        return ( events ^ AT_PROCESS_IIC_RX_CMD_EVT);
    }
    #endif

    if ( events & AT_PROCESS_UART_RX_CMD_EVT )
    {
        // AT_LOG("\n");
        // AT_LOG("str %x\n", cmdstr[cmdlen - 1]);
        // if (('\r' == cmdstr[cmdlen - 2]) && ('\n' == cmdstr[cmdlen - 1])) /// ble_at proj :set cmd end flag:\r\n;
        // if('\r' == cmdstr[cmdlen - 2])
        // {
        //     AT_LOG("2r\n");
        // }
        // if ('\n' == cmdstr[cmdlen - 1])
        // {
        //     AT_LOG("1n\n");
        // }

        //if ('\n' == cmdstr[cmdlen - 1] && '\r' == cmdstr[cmdlen - 2]) /// 
        uint8 t_len = 0;
        unsigned char t_str[100];
        _HAL_CS_ALLOC_();
        HAL_ENTER_CRITICAL_SECTION();
        if ('\n' == cmdstr[cmdlen - 1] && '\r' == cmdstr[cmdlen - 2])
        {
            //cmdstr[cmdlen] = '\0';
            t_len = cmdlen ;
            if (t_len > 100)
            {
                t_len = 0;
            }
            osal_memcpy(t_str, cmdstr, t_len); // copy str[100]/le
            cmdlen = 0;
        }
        HAL_EXIT_CRITICAL_SECTION();
        if (t_len != 0)
        {
            CLI_process_line_manual(
                t_str,
                t_len);
        }
        // if ('\n' == cmdstr[cmdlen - 1] && '\r' == cmdstr[cmdlen - 2])
        // {
        //     cmdstr[cmdlen] = '\0';
        //     CLI_process_line_manual(
        //         cmdstr,
        //         cmdlen); 
        //     memset(cmdstr, 0, cmdlen + 1);
        //     cmdlen = 0;
        // }
        // else
        // {
        //     // gpio_write(P12, 1);
        //     // gpio_write(P12, 0);
        // }

        return ( events ^ AT_PROCESS_UART_RX_CMD_EVT);
    }

    if( events & AT_PROCESS_TRANSPARENT_SEND )
    {
        // extern uint8_t at_cccd_handle[2];
        // AT_LOG("cmdlen %d\n", cmdlen);
        // if(cmdlen<=1)
        // {
        //     cmdlen = 0;
        //     return (events ^ AT_PROCESS_TRANSPARENT_SEND);
        // }
        // else
        // {
        //     AT_LOG("cmdlen %d\n", cmdlen);
        // }
        //AT_LOG("len %d value ",cmdlen);
        extern uint16 gapRole_ConnectionHandle;
        uint8_t return_s=1;
        // uint8_t t_len = 0;
        // unsigned char t_str[262];
        attHandleValueNoti_t *Notif;
        Notif = osal_mem_alloc(sizeof(attHandleValueNoti_t));
        //AT_LOG("stackcheck %04X %04X\n", at_parameters.stackcheck1, at_parameters.stackcheck2);
        if(Notif)
        {
            _HAL_CS_ALLOC_();
            HAL_ENTER_CRITICAL_SECTION();
            Notif->len = cmdlen;
            memcpy(Notif->value, cmdstr, Notif->len);
            cmdlen = 0;
            HAL_EXIT_CRITICAL_SECTION();
            extern uint8_t ATGATTProfile_Notify(uint16 connHandle, attHandleValueNoti_t * Notif);
            return_s = ATGATTProfile_Notify(gapRole_ConnectionHandle, Notif);
            osal_mem_free(Notif);
        }
        else
        {
            cmdlen = 0;
        }
        // app_stack_monitor();
        // osal_memory_statics();
        //AT_LOG("ret %x\n", return_s);
        // _HAL_CS_ALLOC_();
        // HAL_ENTER_CRITICAL_SECTION();
        // Notif.len = cmdlen;
        // memcpy(Notif.value, cmdstr, Notif.len);
        // cmdlen = 0;
        // HAL_EXIT_CRITICAL_SECTION();
        // AT_LOG("value ");
        // for (int i = 0; i < Notif.len;i++)
        //     AT_LOG("%2X", Notif.value[i]);
        // AT_LOG("\n");
        // return_s = ATGATTProfile_Notify(gapRole_ConnectionHandle, &Notif);
        //AT_LOG("ret %x\n", return_s);
        if (return_s == LL_STATUS_ERROR_OUT_OF_TX_MEM || return_s == bleMemAllocError || return_s == blePending)
        {
            //osal_start_timerEx(bleAT_TaskID, AT_PROCESS_TRANSPARENT_SEND, 30);
            //cmdlen = 0;
        }
        else if(return_s==SUCCESS)
        {
            //cmdlen = 0;
            AT_LOG("ACK\r\n");
        }
        else
        {
            //cmdlen = 0;
        }
        return (events ^ AT_PROCESS_TRANSPARENT_SEND);
    }

    if( events & AT_LOOP_EVT )
    {
		// AT_LOG("LOOP\n");
        // osal_memory_statics();
        // app_stack_monitor();
        //extern uint16 stackcheak;
        // extern uint8_t at_cccd_handle[];
        //AT_LOG("stackcheck %04X %04X\n", at_parameters.stackcheck1, at_parameters.stackcheck2);
        return (events ^ AT_LOOP_EVT);
    }

    if (events & AT_ENTER_ATUO_SLEEP_MODE_EVT)
    {
        if(at_parameters.auto_sleep_mode)
        {
            pwrmgr_unlock(MOD_USR7);
        }
        return (events ^ AT_ENTER_ATUO_SLEEP_MODE_EVT);
    }
    

    return 0;
}





