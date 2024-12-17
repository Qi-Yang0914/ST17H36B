/**
****************************************************************************
    @file     sotfwave iic driver.c
    @brief    i2c driver source file
    @author   Eric Li
    @version  V1.0.0
    @date     2020/11/05
    @history
    @note
    detailed description:

******************************************************************************
    @attention

    <h2><center>&copy; COPYRIGHT 2020 PHY </center></h2>
*/

#include "rom_sym_def.h"
#include "gpio.h"
#include "error.h"
#include "log.h"
#include "i2c.h"
#include "types.h"
#include "clock.h"

#define EEPROM_PAGE_SIZE 8

#define I2C_DELAY()   wait_hclk_cycle_us(10);

#define I2C_SCL_SET_INPUT(scl_pin) \
		do { \
			gpio_dir(scl_pin, GPIO_INPUT); \
			gpio_pull_set(scl_pin, GPIO_PULL_UP); \
		} while (0)
	
#define I2C_SCL_SET_OUTPUT(scl_pin) \
		do{ \
			gpio_dir(scl_pin,GPIO_OUTPUT); \
			gpio_fast_write(scl_pin,1); \
		}while(0)
	
#define I2C_SCL_OUTPUT_LOW(scl_pin)             gpio_fast_write(scl_pin, 0)
#define I2C_SCL_OUTPUT_HIGH(scl_pin)            gpio_fast_write(scl_pin, 1)
#define READ_SCL_INPUT_STATUES(scl_pin)         gpio_read(scl_pin)
	
	
#define I2C_SDA_SET_INPUT(sda_pin)  \
		do { \
			gpio_dir(sda_pin, GPIO_INPUT); \
			gpio_pull_set(sda_pin, GPIO_PULL_UP); \
		} while (0)
	
#define I2C_SDA_SET_OUTPUT(sda_pin) \
		do{ \
			gpio_dir(sda_pin,GPIO_OUTPUT); \
			gpio_fast_write(sda_pin,1); \
		}while(0)
		
#define I2C_SDA_OUTPUT_LOW(sda_pin)             gpio_fast_write(sda_pin, 0)
#define I2C_SDA_OUTPUT_HIGH(sda_pin)            gpio_fast_write(sda_pin, 1)
#define READ_SDA_INPUT_STATUES(sda_pin)         gpio_read(sda_pin)

static i2c_drv_struct_t* g_p_i2c = NULL;

/*******************************************************************************
    Function Name  : i2c_start
    Description    :
    Input          : None
    Output         : None
    Return         : None
*******************************************************************************/
static void i2c_start(void)
{
    // Make sure both SDA and SCL high.
    I2C_SDA_OUTPUT_HIGH(g_p_i2c->sda);
    I2C_DELAY();
    I2C_SCL_OUTPUT_HIGH(g_p_i2c->scl);
    I2C_DELAY();
    // SDA: \__
    I2C_SDA_OUTPUT_LOW(g_p_i2c->sda);
    I2C_DELAY();
    // SCL: \__
    I2C_SCL_OUTPUT_LOW(g_p_i2c->scl);
    I2C_DELAY();

}
/*******************************************************************************
    Function Name  : i2c_stop
    Description    :
    Input          : None
    Output         : None
    Return         : None
*******************************************************************************/
static void i2c_stop(void)
{
    // Make sure SDA low.
    I2C_SDA_OUTPUT_LOW(g_p_i2c->sda);
    I2C_DELAY();
    // SCL: __/
    I2C_SCL_OUTPUT_HIGH(g_p_i2c->scl);
    I2C_DELAY();
    // SDA: __/
    I2C_SDA_OUTPUT_HIGH(g_p_i2c->sda);
    I2C_DELAY();

}
/*******************************************************************************
    Function Name  : i2c_read_byte
    Description    :
    Input          : None
    Output         : None
    Return         : None
*******************************************************************************/
static void i2c_read_byte(uint8_t* data, bool ack)
{
    uint8_t i, byte_read = 0;
    // Before call the function, SCL should be low.
    // Make sure SDA is an input
    I2C_SDA_SET_INPUT(g_p_i2c->sda);

    // MSB first
    for (i = 0x80; i != 0; i >>= 1)
    {
        I2C_SCL_OUTPUT_HIGH(g_p_i2c->scl);
        I2C_DELAY();

        if (TRUE==READ_SDA_INPUT_STATUES(g_p_i2c->sda))
        {
            byte_read |= i;
        }

        I2C_SCL_OUTPUT_LOW(g_p_i2c->scl);
        I2C_DELAY();
    }

    // Make sure SDA is an output before we exit the function
    I2C_SDA_SET_OUTPUT(g_p_i2c->sda);
    *data = byte_read;

    // Send ACK bit

    // SDA high == NACK, SDA low == ACK
    if (ack==I2C_ACK)
    {
        I2C_SDA_OUTPUT_LOW(g_p_i2c->sda);
    }
    else
    {
        I2C_SDA_OUTPUT_HIGH(g_p_i2c->sda);
    }


    // Let SDA line settle for a moment
    I2C_DELAY();
    // Drive SCL high to start ACK/NACK bit transfer
    I2C_SCL_OUTPUT_HIGH(g_p_i2c->scl);
    I2C_DELAY();
    // Finish ACK/NACK bit clock cycle and give slave a moment to react
    I2C_SCL_OUTPUT_LOW(g_p_i2c->scl);
    I2C_DELAY();
}
/*******************************************************************************
    Function Name  : i2c_write_byte
    Description    :
    Input          : None
    Output         : None
    Return         : None
*******************************************************************************/
static bool i2c_write_byte(uint8_t data)
{
    bool ret = I2C_NAK;
    uint16_t i;

    // Before call the function, SCL should be low.

    // MSB first
    for (i = 0x80; i != 0; i >>= 1)
    {
        if (data & i)
        {
            I2C_SDA_OUTPUT_HIGH(g_p_i2c->sda);
        }
        else
        {
            I2C_SDA_OUTPUT_LOW(g_p_i2c->sda);
        }

        I2C_DELAY();
        I2C_SCL_OUTPUT_HIGH(g_p_i2c->scl);
        I2C_DELAY();
        I2C_SCL_OUTPUT_LOW(g_p_i2c->scl);
        I2C_DELAY();
    }

    // Configure SDA pin as input for receiving the ACK bit
    I2C_SDA_SET_INPUT(g_p_i2c->sda);
    I2C_SCL_OUTPUT_HIGH(g_p_i2c->scl);
    
    #if 0
    {
        //  wait ack sign
        I2C_SCL_SET_INPUT(g_p_i2c->scl);

        for(i=0; i<50000; i++)
        {
            if (TRUE==READ_SCL_INPUT_STATUES(g_p_i2c->scl))
            {
                break;
            }
            else
            {
                I2C_DELAY();
            }
        }

        I2C_SCL_SET_OUTPUT(g_p_i2c->scl);
    }
    #endif

    //  raed ack
    if (TRUE==READ_SDA_INPUT_STATUES(g_p_i2c->sda))
        ret = I2C_ACK;
	
	I2C_DELAY();
    // Finish ACK/NACK bit clock cycle and give slave a moment to release control
    // of the SDA line
    I2C_SCL_OUTPUT_LOW(g_p_i2c->scl);
    I2C_DELAY();
    // Configure SDA pin as output as other module functions expect that
    I2C_SDA_SET_OUTPUT(g_p_i2c->sda);
    return ret;
}

/*******************************************************************************
    Function Name  : i2c_init
    Description    :
    Input          : None
    Output         : None
    Return         : None
*******************************************************************************/
void i2c_soft_init(i2c_drv_struct_t* p_i2c)
{
//	PRINT("soft\n");
    if(p_i2c!=NULL)
    {
		g_p_i2c = p_i2c;
//		PRINT("pin %x %d %d\n", g_p_i2c->vdd_pin, g_p_i2c->scl, g_p_i2c->sda);
		gpio_dir(g_p_i2c->vdd_pin, GPIO_OUTPUT);
        gpio_fast_write(g_p_i2c->vdd_pin, 1);
        
        I2C_SCL_SET_OUTPUT(g_p_i2c->scl);
        I2C_SDA_SET_OUTPUT(g_p_i2c->sda);
    }
}

/*******************************************************************************
    Function Name  : i2c_deinit
    Description    :
    Input          : None
    Output         : None
    Return         : None
*******************************************************************************/
void i2c_soft_deinit(i2c_drv_struct_t* p_i2c)
{
    if(p_i2c!=NULL)
    {
        I2C_SCL_SET_INPUT(p_i2c->scl);
        I2C_SDA_SET_INPUT(p_i2c->sda);
        g_p_i2c = NULL;
    }
}

/*******************************************************************************
    Function Name  : i2c_driver_read
    Description    :
    Input          : None
    Output         : None
    Return         : None
*******************************************************************************/
void i2c_driver_read(uint8_t device_addr, uint16_t reg_addr, uint8_t* buf, uint16_t len, i2c_reg_addrmode_enum_t mode)
{
	i2c_start();
	i2c_write_byte(device_addr);
//		LOG("device addr =%02x\n",device_addr);

	if(mode==IS_8BIT)
	{
		i2c_write_byte((uint8)reg_addr);
	}
	else
	{
		i2c_write_byte((uint8)(reg_addr>>8));
		i2c_write_byte((uint8)reg_addr);
	}

	i2c_start();
	i2c_write_byte(device_addr + READ_CMD);

	while (1)
	{
		if (len <= 1)
		{
			i2c_read_byte(buf, I2C_NAK);
			break;
		}
		else
		{
			i2c_read_byte(buf, I2C_ACK);
			len --;
		}

		buf ++;
		I2C_DELAY();
	}
	
	i2c_stop();
}
/*******************************************************************************
    Function Name  : i2c_driver_write
    Description    :
    Input          : None
    Output         : None
    Return         : None
*******************************************************************************/
void i2c_driver_write(uint8_t device_addr, uint16_t reg_addr, uint8_t* buf, uint16_t len, i2c_reg_addrmode_enum_t mode)
{
	i2c_start();
	i2c_write_byte(device_addr);

	if(mode==IS_8BIT)
	{
		i2c_write_byte((uint8_t)reg_addr);
	}
	else
	{
		i2c_write_byte((uint8_t)(reg_addr>>8));
		i2c_write_byte((uint8_t)reg_addr);
	}

	while (len --)
	{
		i2c_write_byte(*buf ++);
	}

	i2c_stop();
}

int eeprom_soft_read(
	uint16_t device_address,
	uint16_t word_address,
	uint8_t *data_buf,
	uint16_t size)
{
	uint16_t cnt;//,error_cnt = 0;
	int ret = PPlus_SUCCESS;
	
	while(size)
	{
		cnt = size > 8 ? 8 : size;
//		LOG("address = 0x%x\n",device_address|(word_address>>8));

		i2c_driver_read(device_address|(word_address>>8),word_address,data_buf,size,IS_8BIT);
		
		size -= cnt;
		
		for(uint16_t i = cnt;i > 0;i--)
		{
			word_address++;
			data_buf++;
		}	

	}
//	PRINT("ir\n");
	return ret;
}

int eeprom_soft_write(
	uint16_t device_address,
	uint16_t word_address,
	uint8_t *data,
	uint16_t size)
{
	uint16_t cnt = 0;
	uint16_t count, aaddr;

	count = word_address % EEPROM_PAGE_SIZE;
	aaddr = EEPROM_PAGE_SIZE - count;
	int ret = PPlus_SUCCESS;
	
	if(count == 0)
	{
		while(size)
		{	
			cnt = size > 8 ? 8 : size;

			i2c_driver_write(device_address|(word_address>>8), word_address, data, cnt, IS_8BIT);

			size -= cnt;
			
			word_address += cnt;
			data += cnt;

			WaitMs(3);
		}		
	}
	else //not %8
	{
		i2c_driver_write(device_address|(word_address>>8), word_address, data, aaddr, IS_8BIT);
		
		word_address += aaddr;
		data += aaddr;
		
		size -= aaddr;
		
		WaitMs(3);
		
		while(size)
		{
			cnt = size > 8 ? 8 : size;

			i2c_driver_write(device_address|(word_address>>8), word_address, data, cnt, IS_8BIT);
			
			size -= cnt;
			
			word_address += cnt;
			data += cnt;

			WaitMs(3);
		}
	}	

	return ret;
}







