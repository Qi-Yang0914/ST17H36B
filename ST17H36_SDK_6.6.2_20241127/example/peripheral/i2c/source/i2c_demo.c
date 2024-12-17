
#include "rom_sym_def.h"
#include "OSAL.h"
#include "i2c_demo.h"
#include "log.h"
#include "gpio.h"
#include "clock.h"
#include "pwrmgr.h"
#include "error.h"
#include "i2c_soft.h"
//#include "jump_function.h"
//#include "rf_phy_driver.h"
//#include "global_config.h"
/*********************************************************************
 * MACROS
 */

/*********************************************************************
 * LOCAL VARIABLES
 */
uint8 application_TaskID;   // Task ID for internal task/event processing

#define DATA_LEN  16
static uint8 i2c_tx_buf[DATA_LEN];//= {0x50,0x51,0x52,0x53,0x54,0x55,0x56};
uint8 i2c_rx_buf[DATA_LEN];
#define slave_i2c_addr 0xA0
#define REG_ADDR       0

i2c_drv_struct_t i2c_t = {
	.scl = P12,
	.sda = P13,
	.vdd_pin = P14,
};

void i2c_test(void)
{
	for(int i=0; i < DATA_LEN; i++)
	{
		i2c_tx_buf[i] = i*2;
	}
	
	for(uint32_t i=0;i<1;i++)
	{
		LOG("I2C_SOFT_WRITE_DATA_EVT\n");
    //    i2c_driver_write(slave_i2c_addr, REG_ADDR, i2c_tx_buf, DATA_LEN,IS_8BIT);
        // i2c_driver_write(slave_i2c_addr, REG_ADDR, i2c_tx_buf, DATA_LEN,IS_16BIT);
		eeprom_soft_write(slave_i2c_addr, REG_ADDR, i2c_tx_buf, DATA_LEN);
        LOG("soft i2c write data ok\n");
		WaitMs(500);
	}
	
	for(uint32_t i=0;i<1;i++)
	{
		LOG("I2C_SOFT_READ_DATA_EVT\n");
    //    i2c_driver_read(slave_i2c_addr, REG_ADDR, i2c_rx_buf, DATA_LEN,IS_8BIT);
        // i2c_driver_read(slave_i2c_addr, REG_ADDR, i2c_rx_buf, DATA_LEN,IS_16BIT);
		eeprom_soft_read(slave_i2c_addr, REG_ADDR, i2c_rx_buf, DATA_LEN);
		LOG("I2C_RX_data=[");

        for(uint8 i=0; i<DATA_LEN; i++)
        {
            LOG("0x%x,",i2c_rx_buf[i]);
        }

        LOG("]\n");
		WaitMs(500);
	}
	
}

/*********************************************************************
 * PUBLIC FUNCTIONS
 */
void i2c_Init(uint8 task_id)
{
	application_TaskID = task_id;
	LOG("i2c_eeprom_demo\n");
	
	i2c_soft_init(&i2c_t);

	// osal_set_event(application_TaskID,OSAL_SET_EVENT_EVT);
	// osal_start_timerEx(application_TaskID, OSAL_ONCE_TIMER_EVT, 1000);

	osal_start_reload_timer(application_TaskID, OSAL_RELOAY_TIMER_EVT, 1000);
}


uint16 i2c_ProcessEvent( uint8 task_id, uint16 events )
{
	static uint32_t once_timer_counter = 0;
	static uint32_t cycle_timer_counter = 0;
//	LOG("gpio_ProcessEvent %x\n", events);
	if(task_id != application_TaskID){
		return 0;
	}

	if ( events & OSAL_SET_EVENT_EVT )
	{
		LOG("osal_set_event runs ok\n");
		return ( events ^ OSAL_SET_EVENT_EVT );
	}
	
	if ( events & OSAL_RELOAY_TIMER_EVT )
	{
		i2c_test();

		return ( events ^ OSAL_RELOAY_TIMER_EVT );
	}

  // Discard unknown events
  return 0;
}


/******************************  end  ***************************************/
