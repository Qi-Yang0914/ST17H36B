
/**************************************************************************************************
  Filename:       ble_at.h
  Revised:        
  Revision:       

  Description:    This file contains the at ble sample application
                  

**************************************************************************************************/

/*********************************************************************
 * INCLUDES
 */
#ifndef __BLE_AT_MODULE_H
#define __BLE_AT_MODULE_H

#ifndef AT_IIC_ENABLE
#define AT_IIC_ENABLE         0
#endif

#define AT_START_DEVICE_EVT                         0x0001
#define AT_PROCESS_UART_RX_CMD_EVT                  0x0040
#define AT_LOOP_EVT                                 0x0080
#define AT_PROCESS_IIC_RX_CMD_EVT                   0x0100
#define AT_PROCESS_IIC_SLAVE_SLEEP_EVT              0x0200
#define AT_ENTER_ATUO_SLEEP_MODE_EVT                0x0400
#define AT_PROCESS_TRANSPARENT_SEND                 0x0800

typedef enum 
{
  AT_CMD_REQ = 1,
  AT_CMD_RSP,
  CONN_EVT,
}packet_type;

#define IIC_SLAVE_SDA_PIN  P4 // P15
#define IIC_SLAVE_SCLK_PIN P5 // P20
#define IIC_DEFAULT_DATA_LEN 8
#define HEADER_LEN 1
#define END_FLAG "\r\n"
#define CRC_SIZE 1

#define EXTRACT_HEADER(value)  ((value&0xE0)>>5)  

extern uint8 bleAT_TaskID;   // Task ID for internal task/event processing

void bleAT_Init( uint8 task_id );
uint16 bleAT_ProcessEvent( uint8 task_id, uint16 events );
#if(AT_IIC_ENABLE)
void iic_encaps_send_data(packet_type type,uint8_t* buffer,uint16_t length);
void iic_encaps_receive_data(uint8_t* buffer,uint8_t length);
#endif

#endif 

