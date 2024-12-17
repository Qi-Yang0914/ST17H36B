
#include <string.h>
#include "mcu_phy_femto.h"
#include "otp.h"
#include "clock.h"
#include "gpio.h"
#include "error.h"

//#include "log.h"

volatile int otp_mode_switch_timeout_delay = 100;

#define OTP_NORMAL_START	0x00020000
#define OTP_NORMAL_END		0x00022000
#define OTP_NORMAL_SIZE     (8*1024)
#define OTP_DATA_SIZE		(2*1024)

otp_pw_t otp_program_write = otp_prog_data_hard_polling;

bool otp_go_read(void);

/*******************************************************************
* @fn	   otp_init
*
* @brief   Initialization function for init otp wite/read.
*		   
*
* @param   void
*
* @return  none
********************************************************************/
void otp_init(void)
{
//	otp_power_timing_control_pack(2, 2, 2, 15, 4, 15, 3, 3);
//	otp_setting1_pack(3, 15, 8, 15, 3);
//	otp_setting2_pack(2, 15, 8);

	otp_addr_prog_3_tvps_setf(0);
	otp_addr_prog_3_tvph_setf(0);
	
	otp_addr_prog_m_hclk_sel_d_setf(1); //read 
		
	otp_test_ctrl_tcs_setf(1);

	otp_int_clr_set(0x7f);	//clear all interrupt
	otp_int_mask_set(0);	//mask all interrupt,note!!! 0 is mask, 1 for enable interrupt

	otp_go_read();			//check read mode

}

void otp_prog_pin(gpio_pin_e otp_pin)
{
	gpio_dir(otp_pin, GPIO_OUTPUT);
    gpio_fmux_set(otp_pin, FMUX_OTP_HARDWARE);
}

int otp_prog_mode(uint8_t wmod)
{
	
	switch(wmod)
	{
		case 0:	//hard
			otp_program_write = otp_prog_data_hard_polling;
			break;
		case 1:	//delay or soft
        	otp_program_write = otp_prog_data_soft_dly_polling;
			break;
		case 2:	//6v control 
			otp_program_write = otp_prog_data_polling;
			break;	
		default:
			return PPlus_ERR_NOT_SUPPORTED;
	}
	
    return PPlus_SUCCESS;
}

void otp_delay_nop(void)
{
	volatile uint8_t i = 8;
	while(i--)
	{
		__asm volatile("nop");
	}
}

uint8_t get_otp_state(void)
{
	return (otp_state_get() & 0x1F);
}

bool otp_go_standby(void)
{
	int otp_internal_delay = otp_mode_switch_timeout_delay;
	otp_mode_setting_read_en_setf(0);
	otp_mode_setting_power_on_setf(1);
	otp_delay_nop();
	while((get_otp_state() != OTP_W_S_STANDBY) && otp_internal_delay--)
	{
		otp_delay_nop();
	}
		
	if(otp_internal_delay > 0)
	{
		return TRUE;
	}
	return FALSE;	
}

bool otp_go_test(uint8_t test_mode)
{	
	uint32_t temp;
	uint32_t next_mode;
	int otp_internal_delay = otp_mode_switch_timeout_delay;
	
	switch(test_mode)
	{
		case OTP_W_S_TEST_MODE0:
			temp = (BIT(9)|BIT(4)|0x01);
			next_mode = OTP_W_S_TEST_MODE0;
			break;	
		case OTP_W_S_TEST_MODE1:
			temp = (BIT(9)|BIT(6)|0x01);
			next_mode = OTP_W_S_TEST_MODE1;
			break;
		case OTP_W_S_TEST_MODE2:
			temp = (BIT(9)|(9ul<<4)|1);
			next_mode = OTP_W_S_TEST_MODE2;
			break;
		case OTP_W_S_TEST_MODE3:
			temp = (BIT(9)|(12ul<<4)|1);
			next_mode = OTP_W_S_TEST_MODE3;
			break;
		default:
			return FALSE;	
	}	
	
	otp_mode_setting_set(temp);	
	otp_delay_nop();
	while((get_otp_state() != next_mode) && otp_internal_delay--)
	{
		otp_delay_nop();
	}
	
	if(otp_internal_delay > 0)
	{
		return TRUE;
	}
	
	return FALSE;	
}

bool otp_go_read(void)
{	
	int otp_internal_delay = otp_mode_switch_timeout_delay;
	otp_mode_setting_power_on_setf(1);
	otp_mode_setting_read_en_setf(1);

	otp_delay_nop();
	while((get_otp_state() != OTP_W_S_READ) && otp_internal_delay--)
	{
		otp_delay_nop();
	}

	if(otp_internal_delay > 0)
	{
		return TRUE;
	}
	
	return FALSE;	
}

bool otp_go_prog(void)
{	
	int otp_internal_delay = otp_mode_switch_timeout_delay;
	otp_mode_setting_power_on_setf(1);
	otp_mode_setting_progream_mode_en_setf(1);

	while((get_otp_state() != OTP_W_S_PROG_ACCESS) && otp_internal_delay--)//16
	{
		otp_delay_nop();
	}
	
	if(otp_internal_delay > 0)
	{
		return TRUE;
	}
	
	return FALSE;	
}

bool otp_go_soft_dly_prog(void)
{	
	int otp_internal_delay = otp_mode_switch_timeout_delay;
	otp_mode_setting_power_on_setf(1);
	otp_mode_setting_progream_mode_en_setf(1);

	while((otp_addr_prog_s_wdt1_getf() != 0x1)&&(otp_internal_delay--)){	// && otp_internal_delay--){
		otp_delay_nop(); 
	}
	
//	#warning "time delay xx"
	wait_hclk_cycle_us(300);
	
	otp_addr_prog_s_wdt2_setf(1);	//wdt2
	
	if(otp_internal_delay > 0)
	{
		return TRUE;
	}
	
	return FALSE;	
}

bool otp_go_deepsleep(void)
{
	int otp_internal_delay = otp_mode_switch_timeout_delay;
	otp_mode_setting_power_on_setf(1);
	otp_mode_setting_deep_sleep_mode_en_setf(1);

	otp_delay_nop();
	while((get_otp_state() != OTP_W_S_DEEPLEEP_IN) && otp_internal_delay--)
	{
		otp_delay_nop();
	}
	
	if(otp_internal_delay > 0)
	{
		return TRUE;
	}
	
	return FALSE;	
}

void otp_control_software_mode(bool flag)
{
	if(flag == TRUE)
	{
		OTP_SOFTWARE_CONTROL;
	}
	else
	{
		OTP_HARDWARE_CONTROL;//default mode
	}
}

bool otp_go_powerdown(void)
{	
	int otp_internal_delay = otp_mode_switch_timeout_delay;
	otp_mode_setting_set(0);	
	otp_delay_nop();
	while((get_otp_state() != OTP_W_S_IDLE) && otp_internal_delay--)
	{
		otp_delay_nop();
	}
	
	if(otp_internal_delay > 0)
	{
		return TRUE;
	}
	
	return FALSE;	
}

/*******************************************************************
* @fn	   otp_read_mode_switch
*
* @brief   this function for switch the otp data read mode
*		   
*
* @param   mode	    - read mode 
*
* @return  PPlus_SUCCESS
********************************************************************/
static int otp_read_mode_switch(OTP_READ_Mode_e mode)
{	
	if(mode == OTP_USER_READ_MODE)
	{
		if(FALSE == otp_go_read())
		{
			return PPlus_ERR_TIMEOUT;
		}		
	}
	else if(mode <=  OTP_PGM_MARGIN_READ_HIGH_TEMP)
	{
		if(FALSE == otp_go_test(mode + OTP_W_S_TEST_MODE0 - OTP_INIT_MARGIN_READ_ROOM_TEMP))
		{
			return PPlus_ERR_TIMEOUT;
		}
	}
	else
	{		
		return PPlus_ERR_INVALID_PARAM;
	}	
	return PPlus_SUCCESS;
}

/*******************************************************************
* @fn	   otp_read_data
*
* @brief   this function for the otp data read by word.
*		   
*
* @param   read_addr - the read addr
*		   data_buf	- the read data buffer
*		   data_len	- the data length, the unit length is word 
*		   mode	    - read mode 
*
* @return  PPlus_SUCCESS
********************************************************************/
int otp_read_data(uint32_t read_addr, uint32_t* data_buf, uint32_t data_len,OTP_READ_Mode_e mode)
{
	int ret;

	if((read_addr < OTP_NORMAL_START) || (read_addr >= OTP_NORMAL_END) || (read_addr & 0x03) || (data_buf == NULL) || (data_len > OTP_DATA_SIZE))
	{
		return PPlus_ERR_INVALID_PARAM;
	}
		
	if((OTP_NORMAL_END - read_addr) < (data_len * 4))
	{
		return PPlus_ERR_INVALID_PARAM;
	}
		
	
	if(mode == OTP_NO_READ_CHECK)
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	otp_control_software_mode(FALSE);

	ret = otp_read_mode_switch(mode);
	if(ret != PPlus_SUCCESS)
	{
		return ret;
	}
	
	otp_delay_nop();
	memcpy(data_buf, (uint32_t*)read_addr, (sizeof(uint32_t)*data_len));

	return PPlus_SUCCESS;
}

/*******************************************************************
* @fn	   otp_read_data_byte
*
* @brief   this function for the otp data read by byte.
*		   
*
* @param   read_addr - the read addr
*		   data_buf	- the read data buffer
*		   data_len	- the data length, the unit length is byte 
*		   mode	    - read mode 
*
* @return  PPlus_SUCCESS
********************************************************************/
int otp_read_data_byte(uint32_t read_addr, uint8_t* data_buf, uint32_t data_len,OTP_READ_Mode_e mode)
{
	int ret;
	
	if((read_addr < OTP_NORMAL_START) || (read_addr >= OTP_NORMAL_END) || (data_buf == NULL) || (data_len > OTP_NORMAL_SIZE) || (mode == OTP_NO_READ_CHECK))
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	if((OTP_NORMAL_END - read_addr) < data_len)
	{
		return PPlus_ERR_INVALID_PARAM;
	}

	if(mode == OTP_NO_READ_CHECK)
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	otp_control_software_mode(FALSE);

	
	ret = otp_read_mode_switch(mode);
	if(ret != PPlus_SUCCESS)
	{
		return ret;
	}
	
	otp_delay_nop();//16 NOP  16 32 48
	memcpy((void *)data_buf, (void *)read_addr, (sizeof(uint8_t)*data_len));

	return PPlus_SUCCESS;
}

/*******************************************************************
* @fn	   otp_prog_data_polling
*
* @brief   this function for the otp data write and read by word.
*		   
*
* @param   prog_addr - the program addr
*		   data_buf	- the program data buffer
*		   data_len	- the data length, the unit length is word 
*		   mode	    - read mode 
*
* @return  PPlus_SUCCESS
********************************************************************/
int otp_prog_data_polling(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len)//, OTP_READ_Mode_e mode)
{
	uint32_t addr,i;
	int ret;
	
	if((prog_addr < OTP_NORMAL_START) || (prog_addr >= OTP_NORMAL_END) || (prog_addr & 0x03) || (data_buf == NULL) || (data_len > OTP_DATA_SIZE))
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	if((OTP_NORMAL_END - prog_addr) < (data_len * 4))
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	otp_control_software_mode(FALSE);
	otp_int_mask_set(0x00);
	otp_int_clr_set(otp_int_source_get());// = AP_OTP->int_source;
	otp_mode_clr(OTP_USER_READ_MODE);
	 
	otp_prog_num_program_number_setf(1);

	otp_addr_prog_s_hs_mux_setf(1);		//hard

	addr = prog_addr;
	
//	gpio_write((gpio_pin_e)m_otpCtx.otp_gpin, Bit_ENABLE);	//signal
//	#warning "add delay 300us"
		
	otp_prog_protect_set(0x5a5aa5a5);
	
    //goto deep sleep mode before program
//    otp_go_deepsleep();
//    otp_mode_setting_deep_sleep_mode_en_setf(0);

	if(data_len > 1)
	{
		for(i = 0;i < 2;i++)
		{
			otp_prog_addr_program_address_setf(addr);
			otp_prog_data_program_data_in_setf(*(data_buf+i));
			addr += 4;
		}

		if(FALSE == otp_go_prog())
		{
			otp_prog_protect_set(0);
			return PPlus_ERR_TIMEOUT;
		}

		for(i = 2; i < data_len;i++)
		{
			while(otp_fifo_fifo_full_getf() != 0){
					;
			}
		
			otp_prog_addr_program_address_setf(addr);
			otp_prog_data_program_data_in_setf(*(data_buf+i));
			addr += 4;
		}

	}
	else
	{
		otp_prog_addr_program_address_setf(addr);
		otp_prog_data_program_data_in_setf(*(data_buf));
		
		if(FALSE == otp_go_prog())
		{
			otp_prog_protect_set(0);
			return PPlus_ERR_TIMEOUT;
		}

	}

	while(get_otp_state() != OTP_W_S_STANDBY){
			;
	}
	
	otp_prog_protect_set(0);
//	#warning "prog completed add delay time and move gpio_write api to checksum"

	return PPlus_SUCCESS;
}

/*******************************************************************
* @fn	   otp_prog_data_hard_polling
*
* @brief   this function for the otp data write and read by word.
*		   
*
* @param   prog_addr - the program addr
*		   data_buf	- the program data buffer
*		   data_len	- the data length, the unit length is word 
*		   mode	    - read mode 
*
* @return  PPlus_SUCCESS
********************************************************************/
int otp_prog_data_hard_polling(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len)//, OTP_READ_Mode_e mode)
{
	uint32_t addr,i;
	int ret;
	
	if((prog_addr < OTP_NORMAL_START) || (prog_addr >= OTP_NORMAL_END) || (prog_addr & 0x03) || (data_buf == NULL) || (data_len > OTP_DATA_SIZE))
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	if((OTP_NORMAL_END - prog_addr) < (data_len * 4))
	{
		return PPlus_ERR_INVALID_PARAM;
	}

	otp_prog_data_polling(prog_addr,data_buf, data_len);
	
	otp_go_read();

	return PPlus_SUCCESS;
}


/*******************************************************************
* @fn	   otp_prog_data_soft_polling
*
* @brief   this function for the otp data write and read by word.
*		   
*
* @param   prog_addr - the program addr
*		   data_buf	- the program data buffer
*		   data_len	- the data length, the unit length is word 
*		   mode	    - read mode 
*
* @return  PPlus_SUCCESS
********************************************************************/
int otp_prog_data_soft_dly_polling(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len)//, OTP_READ_Mode_e mode)
{
	uint32_t addr,i;
	int ret;
	
	if((prog_addr < OTP_NORMAL_START) || (prog_addr >= OTP_NORMAL_END) || (prog_addr & 0x03) || (data_buf == NULL) || (data_len > OTP_DATA_SIZE))
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	if((OTP_NORMAL_END - prog_addr) < (data_len * 4))
	{
		return PPlus_ERR_INVALID_PARAM;
	}
	
	otp_control_software_mode(FALSE);
	otp_int_mask_set(0x00);
	otp_int_clr_set(otp_int_source_get());// = AP_OTP->int_source;
	otp_mode_clr(OTP_USER_READ_MODE);
	
	otp_prog_num_program_number_setf(1);

	otp_addr_prog_s_hs_mux_setf(0);		//soft

	addr = prog_addr;
	
	otp_prog_protect_set(0x5a5aa5a5);
	
    //goto deep sleep mode before program
//    otp_go_deepsleep();
//    otp_mode_setting_deep_sleep_mode_en_setf(0);
	
	if(data_len > 1)
	{
		for(i = 0;i < 2;i++)
		{
			otp_prog_addr_program_address_setf(addr);
			otp_prog_data_program_data_in_setf(*(data_buf+i));
			addr += 4;
		}

		if(FALSE == otp_go_soft_dly_prog())
		{
			otp_prog_protect_set(0);
			return PPlus_ERR_TIMEOUT;
		}

		for(i = 2; i < data_len;i++)
		{
			while(otp_fifo_fifo_full_getf() != 0){
					;
			}
		
			otp_prog_addr_program_address_setf(addr);
			otp_prog_data_program_data_in_setf(*(data_buf+i));
			addr += 4;
		}

	}
	else
	{
		otp_prog_addr_program_address_setf(addr);
		otp_prog_data_program_data_in_setf(*(data_buf));
		
		if(FALSE == otp_go_soft_dly_prog())
		{
			otp_prog_protect_set(0);
			return PPlus_ERR_TIMEOUT;
		}

	}

	otp_enable_wdt();

	while(get_otp_state() != OTP_W_S_STANDBY){
			;
	}

	if(get_otp_state() == OTP_W_S_STANDBY)
	{
		otp_disable_wdt();
	}

	otp_prog_protect_set(0);

	otp_go_read();

	return PPlus_SUCCESS;
}

/*******************************************************************
* @fn	   otp_default_value_check
*
* @brief   this function is used to check the otp default data .
*		   
*
* @param   default_value - the default_value
*		   mode	- read mode 
*		   addr	- the program addr
*		   len	- the read data length
*
* @return  PPlus_SUCCESS
********************************************************************/
int otp_default_value_check(uint32_t default_value,OTP_READ_Mode_e mode,uint32_t addr,uint32_t len)
{
	int ret;
	uint32_t otp_i = 0;
	//write_reg(OTP_ATE_ERR_CHECK_ADDR, 0);//clear opt check err reg
	
	if(mode == OTP_NO_READ_CHECK)
	{
		return PPlus_ERR_INVALID_PARAM;
	}

	otp_control_software_mode(FALSE);
	ret = otp_read_mode_switch(mode);
	if(ret != PPlus_SUCCESS)
	{
		return ret;
	}
	
	//WaitRTCCount(1);//
	otp_delay_nop();//16 NOP
    uint16_t err=0;  
    uint32_t opt_read_val = 0;
	for(otp_i=0;otp_i<len;otp_i++)
	{
	    opt_read_val = *(volatile int*)(OTP_NORMAL_START+addr+(otp_i<<2));
		if(default_value != opt_read_val)
		{
			//otp_mode_clr(mode);
			return PPlus_ERR_FATAL;
		}
	}
	
	return PPlus_SUCCESS;
}
#if 0
//simulation
uint16_t otp_ate_test_read(uint32_t default_val,uint8_t main_read_mode,uint32_t addr,uint32_t len)
{
	int ret;
	ret = otp_default_value_check(default_val,main_read_mode,addr,len);
	return ret;
}

uint16_t otp_ate_test_row_prog(uint16_t prog_num,uint32_t prog_data)
{
	uint16_t otp_result = 0;
	int ret;
	
	OTP_TEST_ROW_ENABLE;
	
	for(uint8_t i=0;i<16;i++){
		if(prog_num & BIT(i)){
			ret = otp_program_write(OTP_BASE_ADDR +i*4,(uint32_t*)(&prog_data), 1);//, OTP_NO_READ_CHECK);
			if(ret == 0){
				otp_result |= BIT(i);
			}
		}			
	}
	otp_go_powerdown();
	otp_go_standby();
	OTP_TEST_ROW_DISABLE;
	return otp_result;
}

uint16_t otp_ate_test_row_read(uint16_t read_num,uint32_t read_data,uint8_t read_mode)
{
	uint16_t otp_result = 0;
	uint32_t temp;
	int ret;
	
	OTP_TEST_ROW_ENABLE;

	for(uint8_t i=0;i<16;i++){						     		
		if(read_num & BIT(i)){
			ret = otp_read_data(OTP_BASE_ADDR +i*4,(uint32_t*)(&temp),1,read_mode);
				if((PPlus_SUCCESS == ret) && (temp == read_data)){
					otp_result |= BIT(i);
			}
		}
	}	
	otp_go_powerdown();
	otp_go_standby();
	OTP_TEST_ROW_DISABLE;	
	return otp_result;
}
#endif
void otp_mode_clr(OTP_READ_Mode_e mode)
{
	if(mode == OTP_USER_READ_MODE)
	{
		otp_mode_setting_read_en_setf(0);	//no read
	}
	else if(mode <=  OTP_PGM_MARGIN_READ_HIGH_TEMP)
	{
		otp_mode_setting_margin_en_setf(0);
		otp_mode_setting_test_mode_setf(0);
	}
}

void otp_enable_wdt(void)
{
	while(otp_addr_prog_s_wdt3_getf() != 0x1){
		;
	}
	
	wait_hclk_cycle_us(700);
//		WaitMs(20);

	otp_addr_prog_s_wdt4_setf(1);	//wdt4
	otp_addr_prog_s_wdt2_setf(0);	//wdt2

}

void otp_disable_wdt(void)
{
	otp_addr_prog_s_wdt2_setf(0); //wdt2
	otp_addr_prog_s_wdt4_setf(0); //wdt4
}


