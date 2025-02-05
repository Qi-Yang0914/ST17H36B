﻿

/*******************************************************************************
*@ Module    		:  pre-compiler
*@ Description    :  NULL
*******************************************************************************/
#define _I2C_CMD_

/*******************************************************************************
*@ Module    			:  Includes
*@ Description    :  None
*******************************************************************************/
#include "rom_sym_def.h"
#include "types.h"
#include "gpio.h"
#include "i2c.h"
#include "clock.h"
#include "log.h"
#include "error.h"
#include "OSAL.h"
#include "pwrmgr.h"

bool      i2c_timeout_en = FALSE;
uint16_t  i2c_op_timeout = 100; //100ms for an Byte operation
uint32_t  i2c_to;

void I2C_INIT_TOUT(void)
{
	if(i2c_timeout_en == TRUE)
	{
		i2c_to = get_systick();	
	}
}

int I2C_CHECK_TOUT(int timeout, char* loginfo)
{
	if(i2c_timeout_en == TRUE)
	{
		if(get_ms_intv(i2c_to) > timeout)
		{
			LOG(loginfo);
			return PPlus_ERR_TIMEOUT;
		}
	}
	return PPlus_SUCCESS;
}

/**************************************************************************************
 * @fn          master_send_read_cmd
 *
 * @brief       This function process for master send read command;It's vaild when the chip act as master
 *
 * input parameters
 *
 * @param       uint8_t len: read length
 *
 * output parameters
 *
 * @param       None.
 *
 * @return      None.
 **************************************************************************************/
static void master_send_read_cmd(void* pi2c, uint8_t len)
{
	uint8_t i;
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;
	
	for(i=0;i<len;i++)
	{
		I2C_READ_CMD(pi2cdev);
	}
}

static void i2c_send_byte(void* pi2c, uint8_t data)
{
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;
	pi2cdev->IC_DATA_CMD = data;
}
 
/**************************************************************************************
 * @fn          i2c_send
 *
 * @brief       This function process for send a serial(programe length) data by i2c interface
 *
 * input parameters
 *
 * @param       unsigned char* str: send data(string)
 *              uint32_t len: send length
 *
 * output parameters
 *
 * @param       None.
 *
 * @return      None.
 **************************************************************************************/
int i2c_send(void* pi2c, uint8_t* str,uint8_t len)
{
	uint8_t i;
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;

	if(pi2cdev != AP_I2C0 /*&& pi2cdev != AP_I2C1*/)
	{
		return PPlus_ERR_INVALID_PARAM;
	}

	for(i=0;i<len;i++)
	{		
		i2c_send_byte(pi2c, str[i]);
	}
	return PPlus_SUCCESS;
}

int i2c_wait_tx_completed(void* pi2c)
{
	int cnt = 0;
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;

	I2C_INIT_TOUT();
	if(pi2cdev != AP_I2C0 /*&& pi2cdev != AP_I2C1*/)
	{
		return PPlus_ERR_INVALID_PARAM;
	}

	while(1)
	{
		cnt++;
		if(pi2cdev->IC_RAW_INTR_STAT&0x200)//check tx empty
			break;
		if(PPlus_ERR_TIMEOUT == I2C_CHECK_TOUT(i2c_op_timeout, "i2c_wait_tx_completed TO\n"))
			return PPlus_ERR_TIMEOUT;
	}
	return PPlus_SUCCESS;
}


void* i2c_init(i2c_dev_t dev, I2C_CLOCK_e i2c_clock_rate)
{
	int pclk = clk_get_pclk();
	AP_I2C_TypeDef * pi2cdev = NULL;
	
	if(dev == I2C_0)
	{
		pi2cdev = AP_I2C0;
		clk_gate_enable(MOD_I2C0);
	}
//  else if(dev == I2C_1){
//    pi2cdev = AP_I2C1;
//    clk_gate_enable(MOD_I2C1);
//  }
	else
	{
		return NULL;
	}

	pi2cdev->IC_ENABLE=0;
	pi2cdev->IC_CON=0x61;
	if(i2c_clock_rate==I2C_CLOCK_100K)
	{
		pi2cdev->IC_CON= ((pi2cdev->IC_CON) & 0xfffffff9)|(0x01 << 1);
		if(pclk==16000000)
		{
			pi2cdev->IC_SS_SCL_HCNT=70;  //16
			pi2cdev->IC_SS_SCL_LCNT=76;  //32)
		}
		else if(pclk==32000000)
		{
			pi2cdev->IC_SS_SCL_HCNT=148;  //16
			pi2cdev->IC_SS_SCL_LCNT=154;  //32)
		}
		else if(pclk==48000000)
		{
			pi2cdev->IC_SS_SCL_HCNT=230;  //16
			pi2cdev->IC_SS_SCL_LCNT=236;  //32)
		}
		else if(pclk==64000000)
		{
			pi2cdev->IC_SS_SCL_HCNT=307;  //16
			pi2cdev->IC_SS_SCL_LCNT=320;  //32)
		}
		else if(pclk==96000000)
		{
			pi2cdev->IC_SS_SCL_HCNT=460;  //16
			pi2cdev->IC_SS_SCL_LCNT=470;  //32)
		}
	}else if(i2c_clock_rate==I2C_CLOCK_400K)
	{
		pi2cdev->IC_CON= ((pi2cdev->IC_CON) & 0xfffffff9)|(0x02 << 1);
		if(pclk==16000000)
		{
			pi2cdev->IC_FS_SCL_HCNT=10;  //16
			pi2cdev->IC_FS_SCL_LCNT=17;  //32)
		}
		else if(pclk==32000000)
		{
			pi2cdev->IC_FS_SCL_HCNT=30;  //16
			pi2cdev->IC_FS_SCL_LCNT=35;  //32)
		}
		else if(pclk==48000000)
		{
			pi2cdev->IC_FS_SCL_HCNT=48;  //16
			pi2cdev->IC_FS_SCL_LCNT=54;  //32)
		}
		else if(pclk==64000000)
		{
			pi2cdev->IC_FS_SCL_HCNT=67;  //16
			pi2cdev->IC_FS_SCL_LCNT=75;  //32)
		}
		else if(pclk==96000000)
		{
			pi2cdev->IC_FS_SCL_HCNT=105;  //16
			pi2cdev->IC_FS_SCL_LCNT=113;  //32)
		}
	}

	pi2cdev->IC_TAR = I2C_MASTER_ADDR_DEF;
	pi2cdev->IC_INTR_MASK=0;
	pi2cdev->IC_RX_TL=0x0;
	pi2cdev->IC_TX_TL=0x1;

	pi2cdev->IC_ENABLE=1;
	return (void*)pi2cdev;
}

int i2c_deinit(void* pi2c)
{
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;
	
	if(pi2cdev == AP_I2C0)
	{
		pi2cdev->IC_ENABLE=0;
		clk_gate_disable(MOD_I2C0);
	}
	//  else if(pi2cdev == AP_I2C1){
	//    pi2cdev->IC_ENABLE=0;
	//    clk_gate_enable(MOD_I2C1);
	//  }
	else
	{
		return PPlus_ERR_INVALID_PARAM;
	}
  return PPlus_SUCCESS;
}


/**************************************************************************************
 * @fn          i2c_pin_init
 *
 * @brief       This function process for i2c pin initial(2 lines);You can use two i2c,i2c0 and i2c1,should programe by USE_AP_I2CX 
 *
 * input parameters
 *
 * @param       gpio_pin_e pin_sda: define sda_pin
 *              gpio_pin_e pin_clk: define clk_pin
 *
 * output parameters
 *
 * @param       None.
 *
 * @return      None.
 **************************************************************************************/
int i2c_pin_init(i2c_dev_t dev, gpio_pin_e pin_sda, gpio_pin_e pin_clk){
    if(((pin_clk == P4) || (pin_clk == P9) || (pin_clk == P14) || (pin_clk == P18)) || \
        ((pin_sda == P5) || (pin_sda == P10) || (pin_sda == P15) || (pin_sda == P19)))
    {
        switch(pin_clk)
        {
            case P4:
                gpio_fmux_set(pin_clk,FMUX_P4_IIC_SCL);
                break;
            case P9:
                gpio_fmux_set(pin_clk,FMUX_P9_IIC_SCL);
                break;
            case P14:
                gpio_fmux_set(pin_clk,FMUX_P14_IIC_SCL);
                break;
            case P18:
                gpio_fmux_set(pin_clk,FMUX_P18_IIC_SCL);
                break;
			default:
				break;
        }
        switch(pin_sda)
        {
            case P5:
                gpio_fmux_set(pin_sda,FMUX_P5_IIC_SDA);
                break;
            case P10:
                gpio_fmux_set(pin_sda,FMUX_P10_IIC_SDA);
                break;
            case P15:
                gpio_fmux_set(pin_sda,FMUX_P15_IIC_SDA);
                break;
            case P19:
                gpio_fmux_set(pin_sda,FMUX_P19_IIC_SDA);
                break;
			default:
				break;
        }
    }
	else
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	gpio_pull_set(pin_sda,GPIO_PULL_UP);
	gpio_pull_set(pin_clk,GPIO_PULL_UP);
	
	if(dev == I2C_0)
	{
		clk_gate_enable(MOD_I2C0);
	}
	
	return PPlus_SUCCESS;
}

int i2c_tx_start(void* pi2c)
{
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;

	if(pi2cdev != AP_I2C0)
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	pi2cdev->IC_ENABLE=1;
	
	return PPlus_SUCCESS;
}

/**************************************************************************************
 * @fn          i2c_addr_update
 *
 * @brief       This function process for tar update 
 *
 * input parameters
 *
 * @param       uint8_t addr: address
 *
 * output parameters
 *
 * @param       None.
 *
 * @return      None.
 **************************************************************************************/
int i2c_addr_update(void* pi2c, uint8_t addr)
{
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;
	
	if(pi2cdev != AP_I2C0 /*&& pi2cdev != AP_I2C1*/)
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	pi2cdev->IC_ENABLE=0;
	pi2cdev->IC_TAR = addr;
	pi2cdev->IC_ENABLE=0;
	
	return PPlus_SUCCESS;
}


int i2c_read_s(void* pi2c, uint8_t slave_addr, uint8_t reg, uint8_t* data, uint8_t size)
{
	I2C_INIT_TOUT();
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;
	
	if(pi2cdev != AP_I2C0 /*&& pi2cdev != AP_I2C1*/)
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	i2c_addr_update(pi2c, slave_addr);

	_HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();
	i2c_tx_start(pi2c);
	i2c_send_byte(pi2c, reg);
	master_send_read_cmd(pi2c, size);
	HAL_EXIT_CRITICAL_SECTION();

	while(1)
	{
		if(I2C_RX_FIFO_NOT_EMPTY(pi2cdev))
		{
			*data = (pi2cdev->IC_DATA_CMD&0xff);
			data++;
			
			size--;
			if(size == 0)
				break;
		}
		if(PPlus_ERR_TIMEOUT == I2C_CHECK_TOUT(i2c_op_timeout*size, "I2C RD TO\n"))
			return PPlus_ERR_TIMEOUT;
	}
	return PPlus_SUCCESS;
}

int i2c_read(
  void* pi2c,
  uint8_t slave_addr,
  uint8_t reg,
  uint8_t* data,
  uint8_t size)
{
	uint8_t cnt;
	int ret = PPlus_SUCCESS;
	AP_I2C_TypeDef * pi2cdev = (AP_I2C_TypeDef *)pi2c;

	if(pi2cdev != AP_I2C0 /*&& pi2cdev != AP_I2C1*/)
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	while(size)
	{
		cnt = (size >7) ? 7 : size;
		size -= cnt;
		
		ret = i2c_read_s(pi2c, slave_addr, reg, data , cnt);
		if(ret != PPlus_SUCCESS)
			break;
			
		data += cnt;
	}
	return ret;
}
