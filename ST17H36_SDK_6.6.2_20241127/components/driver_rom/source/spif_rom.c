
#include <string.h>
#include "spif.h"
#include "otp.h"
#include "crc16.h"
#include "mcu.h"
#include "bus_dev.h"
#include "clock.h"
#include "error.h"

// spif config register
#define SPIF_CONFIG_BASE   	0x11080000
#define SPIF_RLEN       	(SPIF_CONFIG_BASE+0x88)  
#define RFIFO_DEPTH     	(SPIF_CONFIG_BASE+0x84)
#define WFIFO_DEPTH     	(SPIF_CONFIG_BASE+0x80)

// commands defines
#define PAGE_PROGRAM_CMD      0x2
#define FAST_PROGRAM_CMD      0xF2

#define WRITE_ENABLE_CMD      0x6
#define WRITE_DISABLE_CMD     0x4

#define READ_STATUS_CMD       0x5
#define WRITE_STATUS_CMD      0x1

#define SECT_ERASE_CMD        0x20
#define BLOCK32_ERASE_CMD     0x52
#define BLOCK64_ERASE_CMD     0xD8
#define CHIP_ERASE_CMD        0xC7

#define DEEP_DOWN_CMD         0xB9
#define RELEASE_DOWN_CMD      0xAB
#define MANUF_ID_CMD          0x90
#define READ_ID_CMD           0x9F

#define FAST_READ_CMD         0x0B
#define READ_DATA_CMD         0x3

#define WAIT_FOR_SPIF()   {while(!( (*(volatile uint32_t *)(SPIF_CONFIG_BASE+0x90)) & 0x4)) ;}
#define SPIF_CHECK_BUSY() { do{wait_hclk_cycle_us((g_spif_cfg.dly_polling)*10);}while( _spif_check_busy()== 1); }

spif_cfg_t g_spif_cfg;
//#warning spif default_config
//__attribute__((aligned(4))) spif_cfg_t g_spif_cfg= {
//    .spif_pin=0x0B090A08,//CLK:P11; CS:P9;SI:P10;; SO:P8;
//    .timing=0x01930000,//spif_clk=RC,mode=dual,dly=1,polling=3
//    };

//enable flash write 
void _spif_write_enable(void)//rom,patch
{
	//HAL_DISABLE_INTERRUPTS();
	WAIT_FOR_SPIF();
	
	*(volatile unsigned int *)SPIF_RLEN = 0;
	*(volatile uint8_t *)(SPIF_CONFIG_BASE) = WRITE_ENABLE_CMD;
	
	WAIT_FOR_SPIF();
	//HAL_ENABLE_INTERRUPTS();		
}

// disable spif write
void _spif_write_disable(void)//rom,patch
{
    //HAL_DISABLE_INTERRUPTS();
    
	WAIT_FOR_SPIF();
	
	*(volatile unsigned int *) SPIF_RLEN = 0;
	*(volatile uint8_t *)(SPIF_CONFIG_BASE) = WRITE_DISABLE_CMD;
	
	WAIT_FOR_SPIF();

    //HAL_ENABLE_INTERRUPTS();	
}

// check flash internal bus busy or notfor erase and program operation
int _spif_check_busy(void)//rom,patch
{
	int  state1=0;

    //HAL_DISABLE_INTERRUPTS();
	
	WAIT_FOR_SPIF();
	
	*(volatile unsigned int *) SPIF_RLEN =1;
	
	*(volatile uint8_t *)(SPIF_CONFIG_BASE) = READ_STATUS_CMD;
	
	WAIT_FOR_SPIF();   //不能去掉
	
	state1= *(volatile  uint8_t *)(SPIF_CONFIG_BASE);	

    //HAL_ENABLE_INTERRUPTS();
	
	return (( state1 & 0x1));
	
}

uint32_t spif_flash_size(void)
{
    uint32_t size;
    spif_id_t id = {0,0,0};
    spif_read_identification(&id);
    size = (1ul << (id.mcapc));
    if(size == 0)
        return 512*1024;
    return size;
}

void spif_cfg_default_load(void)
{
    /* only support PUYA */
	g_spif_cfg.spif_pin = 0x14131011;
    g_spif_cfg.timing = 0x92440105;

}

bool spif_cfg_apply(void)
{
	uint32_t crc;
	crc = crc16(0, (const volatile void*)&g_spif_cfg, sizeof(spif_cfg_t)-2);
	if(crc != g_spif_cfg.crc)
	{
        spif_cfg_default_load();
        //return true;
	}

    //case spif disabled 
	if(g_spif_cfg.spif_pin == 0){
        return false;
	}

	if(g_spif_cfg.dly_polling == 0xff)
        g_spif_cfg.dly_polling = 1;
		if(g_spif_cfg.dly_clk == 0xff)
        g_spif_cfg.dly_clk = 9;//dly=1
    if(g_spif_cfg.mode != 0)    //default 2 wire mode, if set 0, use 1 wire mode
        g_spif_cfg.mode = 1;
    if((g_spif_cfg.spif_ref_clk == 0xff) || (g_spif_cfg.spif_ref_clk >= 4)) //default rc32m ref clk
        g_spif_cfg.spif_ref_clk = 0;
		
    //apply spif setting
	gpio_fmux_set(g_spif_cfg.io0_pin, FMUX_FLH_IO0);
	gpio_fmux_set(g_spif_cfg.io1_pin, FMUX_FLH_IO1);
	gpio_fmux_set(g_spif_cfg.clk_pin, FMUX_FLH_CLK);
	gpio_fmux_set(g_spif_cfg.cs_pin,  FMUX_FLH_CSN);

    //dual_spif set dly 
	subWriteReg(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, 3, 0, g_spif_cfg.dly_clk); 
	subWriteReg(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, 7, 4, g_spif_cfg.dly_clk); 

    clk_spif_ref_clk(g_spif_cfg.spif_ref_clk);
    
	*(volatile unsigned int *)(SPIF_CONFIG_BASE + 0x88) = 4;
	*(volatile unsigned int *)(SPIF_CONFIG_BASE + 0x8c) = 0;
	*(volatile unsigned int *)(SPIF_CONFIG_BASE + 0x8c) = 0x32;
	*(volatile unsigned int *)(SPIF_CONFIG_BASE + 0x90) = 0x3;

	spif_ahb_ctrl_io_mode_setf(g_spif_cfg.mode);
	spif_ahb_ctrl_spif_en_setf(1);

    return true;
}

bool spif_cfg_load(void)
{
    int ret;
    uint32_t cfg_addr0 = OTP_BASE_ADDR + OTP_SPIF_CFG_ADDR;
    uint32_t cfg_addr1 = OTP_BASE_ADDR + OTP_SPIF_CFG_ADDR + sizeof(spif_cfg_t);
    //read cfg1
    ret = otp_read_data(cfg_addr1,(uint32_t *)&g_spif_cfg,sizeof(spif_cfg_t)/4,OTP_USER_READ_MODE);

	//if cfg1 is empty,then try cfg0
	if(g_spif_cfg.spif_pin == 0xFFFFFFFF)
		ret = otp_read_data(cfg_addr0,(uint32_t *)&g_spif_cfg,sizeof(spif_cfg_t)/4,OTP_USER_READ_MODE);

	//case otp read failed, just load default spif config
    if(ret!= PPlus_SUCCESS){
        spif_cfg_default_load();
    }    
    if(spif_cfg_apply() == false)
    {
        return false;
    }
    spif_deep_sleep_release();

    return true;

}

bool spif_cfg_set(spif_cfg_t *spif_conf, bool otp_wr)
{
    bool ret = false;
    int st = PPlus_ERR_FATAL;
    spif_cfg_t spif_cfg0;
    spif_cfg_t spif_cfg1;
    
    uint32_t cfg_addr0 = OTP_BASE_ADDR + OTP_SPIF_CFG_ADDR;
    uint32_t cfg_addr1 = OTP_BASE_ADDR + OTP_SPIF_CFG_ADDR + sizeof(spif_cfg_t);
    
    memcpy(&g_spif_cfg,(uint8_t *)spif_conf,sizeof(spif_cfg_t));
    g_spif_cfg.crc = crc16(0, (uint8_t *)&g_spif_cfg, sizeof(spif_cfg_t)-2);

    ret = spif_cfg_apply();

	if(otp_wr){
		otp_read_data(cfg_addr1,(uint32_t *)&spif_cfg1,(sizeof(spif_cfg_t)/4),OTP_USER_READ_MODE);
		otp_read_data(cfg_addr0,(uint32_t *)&spif_cfg0,(sizeof(spif_cfg_t)/4),OTP_USER_READ_MODE);
		if(spif_cfg0.spif_pin== 0xffffffff)
		{
//			otp_start_dlytime();
			st = otp_program_write(cfg_addr0, (uint32_t *)spif_conf, sizeof(spif_cfg_t)/4);//, OTP_USER_READ_MODE);
//			otp_end_dlytime();
		} 
		else if(spif_cfg1.spif_pin== 0xffffffff)
		{
//			otp_start_dlytime();
			st = otp_program_write(cfg_addr1, (uint32_t *)spif_conf, sizeof(spif_cfg_t)/4);//, OTP_USER_READ_MODE);
//			otp_end_dlytime();
		}
		ret = true;
	}

    if(st)
        ret = false;

	return ret;
}

bool spif_use_spif(void)
{
    if(g_spif_cfg.spif_pin == 0x0)
        return false;
    return true;
}


// read flash internal status regiser
int spif_status_reg_read(void)//rom
{
	 unsigned int  state;

     //HAL_DISABLE_INTERRUPTS();
	
	 WAIT_FOR_SPIF();
	
	 *(volatile unsigned int*)SPIF_RLEN =1;
	
	 *(volatile uint8_t *)(SPIF_CONFIG_BASE) = READ_STATUS_CMD;
	
	 WAIT_FOR_SPIF();
	
	 state = *(volatile uint8_t *)(SPIF_CONFIG_BASE);

     //HAL_ENABLE_INTERRUPTS();

	 return (state & 0xff);
}

// write flash internal status register
void spif_status_reg_write(int value)//rom
{
    //HAL_DISABLE_INTERRUPTS();
	SPIF_CHECK_BUSY();
	
	_spif_write_enable();
			
	*(volatile unsigned int *)SPIF_RLEN = 0;
	
	*(volatile unsigned short *)(SPIF_CONFIG_BASE) = (WRITE_STATUS_CMD | (value << 8));

	SPIF_CHECK_BUSY();
		
	_spif_write_disable();

    //HAL_ENABLE_INTERRUPTS();		
}

// read device ID of flash
void  spif_read_identification(spif_id_t* pid)//rom
{	
	 WAIT_FOR_SPIF();
	
	 *(volatile unsigned int *) SPIF_RLEN = 3;  //set rlen
	
	 *(volatile uint8_t  *) (SPIF_CONFIG_BASE) = READ_ID_CMD;  // command
	
	 WAIT_FOR_SPIF();   //不能去掉
		
	 pid->mid	= (*(volatile uint8_t  *) (SPIF_CONFIG_BASE));  // read data
	 pid->mtype  = (*(volatile uint8_t  *) (SPIF_CONFIG_BASE));  // read data
	 pid->mcapc  = (*(volatile uint8_t  *) (SPIF_CONFIG_BASE));  // read data
	 
}

int spif_erase_all(void)
{
    uint32_t size = spif_flash_size();
    uint32_t addr = SPIF_USER_SPACE;
    for(;addr < SPIF_BLOCK_SIZE; addr += SPIF_SECT_SIZE){
        spif_erase_sector(addr);
    }

    for(addr = SPIF_BLOCK_SIZE; addr < size; addr += SPIF_BLOCK_SIZE){
        spif_erase_block(addr);
    }

	return PPlus_SUCCESS;
}


// erase a sector of flash, size is 4KB
int spif_erase_sector(unsigned int addr)//rom
{   	
	int little_addr;

    //HAL_DISABLE_INTERRUPTS();
	
	SPIF_CHECK_BUSY();
	
	_spif_write_enable();   // enable write
	
	*(volatile unsigned int *) SPIF_RLEN =0;
	
	little_addr = (((addr & 0xff) << 16) | ((addr & 0xff0000) >> 16) | (addr & 0xff00));
	
	*(volatile unsigned int *) (SPIF_CONFIG_BASE) = SECT_ERASE_CMD | (little_addr << 8);
	
	SPIF_CHECK_BUSY();

	_spif_write_disable();   // diasble write
		
    //HAL_ENABLE_INTERRUPTS();
	return PPlus_SUCCESS;
}



//plyplusinc
//form prime patch
// erase a block whose size is 64KB
int spif_erase_block(unsigned int addr)//rom
{   
	int little_addr;

	while( _spif_check_busy() ) ;
	
	_spif_write_enable();   // enable write
	
	*(volatile unsigned int *) SPIF_RLEN =0;
	
	little_addr=(addr & 0xff)<<16 | (addr &0xff0000)>>16 | (addr & 0xff00);
	
	*(volatile uint32_t  *) (SPIF_CONFIG_BASE) = BLOCK64_ERASE_CMD | (little_addr <<8);
		
	SPIF_CHECK_BUSY();
		
	_spif_write_disable();   // diasble write
		
	//HAL_ENABLE_INTERRUPTS();	
	return PPlus_SUCCESS;
}


// erase total chip of flash
int spif_erase_chip(void)//rom
{   
    //HAL_DISABLE_INTERRUPTS();
    
	SPIF_CHECK_BUSY();

    //HAL_DISABLE_INTERRUPTS();
	
	_spif_write_enable();   // enable write
	
	*(volatile unsigned int *) SPIF_RLEN =0;
	
	*(volatile uint8_t  *) (SPIF_CONFIG_BASE) = CHIP_ERASE_CMD;
		
	SPIF_CHECK_BUSY();
	
	_spif_write_disable();   // diasble write

    //HAL_ENABLE_INTERRUPTS();
	return PPlus_SUCCESS;
}


// set flash to deep sleep mode
void spif_deep_sleep_set(void)//rom
{
    //HAL_DISABLE_INTERRUPTS();
	WAIT_FOR_SPIF();
	
	*(volatile unsigned int *) SPIF_RLEN =0;  //set rlen
	
	*(volatile uint8_t  *) (SPIF_CONFIG_BASE) = DEEP_DOWN_CMD;  // command
	
	WAIT_FOR_SPIF();   //不能去掉 
	//HAL_ENABLE_INTERRUPTS();	
}

// wake up flash from sleep state
void spif_deep_sleep_release(void)//rom
{	
    //HAL_DISABLE_INTERRUPTS();
	WAIT_FOR_SPIF();
	
	*(volatile unsigned int *) SPIF_RLEN =0;  //set rlen
	
	*(volatile uint8_t  *) (SPIF_CONFIG_BASE) = RELEASE_DOWN_CMD;  // command
	
	WAIT_FOR_SPIF();   //不能去掉	
	//HAL_ENABLE_INTERRUPTS();
}

/*static*/ 
//int ProgramWordShort(unsigned long offset, const unsigned char *buf,uint8_t size)   
//{
//	int    little_addr;
//    
//	while(_spif_check_busy());
//	
//    _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();
//
//	_spif_write_enable();   // enable write
//	
//	little_addr = (((offset & 0xff) << 16) | ((offset & 0xff0000) >> 16) | (offset & 0xff00));
//		
//    *(volatile unsigned int *) SPIF_RLEN = 0;    // write  0x0 to RLEN	
//
//    *(volatile unsigned int *)SPIF_CONFIG_BASE = (PAGE_PROGRAM_CMD | (little_addr << 8));
//    	
//    *(volatile unsigned char *)(SPIF_CONFIG_BASE) = buf[0];
//    *(volatile unsigned char *)(SPIF_CONFIG_BASE) = buf[1];
//  	
//	while( _spif_check_busy());
//
//	HAL_EXIT_CRITICAL_SECTION();
//	
//	_spif_write_disable();   // disable  write
//		
//	return PPlus_SUCCESS;
//}

int spif_write_word (uint32_t addr, uint32_t data)
{
	int addr_convert;
		
	SPIF_CHECK_BUSY();
	
	 _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();
		
	_spif_write_enable();   // enable write
	
    addr_convert = SPIF_ADDR_CONVERT(addr);

    *(volatile unsigned int *) SPIF_RLEN = 0;    // write  0x0 to RLEN

    *(volatile unsigned int *)SPIF_CONFIG_BASE = (PAGE_PROGRAM_CMD | (addr_convert));// << 8));
       
	*(volatile unsigned int *)(SPIF_CONFIG_BASE) = data;					 
	
	HAL_EXIT_CRITICAL_SECTION();
	
	SPIF_CHECK_BUSY();
	
	_spif_write_disable();   // disable  write
		
	return PPlus_SUCCESS;
}

int spif_write_page_word (uint32_t addr, uint32_t *data,  int size)
{
	volatile int  i;
	int size_in_page, size_write = size*4, size_read = size*4;
	uint32_t addr_convert = 0, addr_write = addr, addr_read = addr;
	uint32_t fifo_deepth;
	uint32_t *data_write = data;
	uint32_t *data_read = (uint32_t*)data;

	addr_write = addr_write & 0xffffff;

	//align check
	if(addr & 3)  return 0;
	if(((uint32_t)data) & 3) return 0;

	while(size_write){

		size_in_page = SPIF_PAGE_SIZE - (addr_write & (SPIF_PAGE_SIZE -1));
		if(size_write < size_in_page)
			size_in_page = size_write;

		SPIF_CHECK_BUSY();

		 _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();
		 i=0;
		addr_convert = SPIF_ADDR_CONVERT(addr_write);
		_spif_write_enable();	// enable write

		//*(volatile unsigned int *) SPIF_RLEN = 0;    // write  0x0 to RLEN

		*(volatile unsigned int *)SPIF_CONFIG_BASE = (PAGE_PROGRAM_CMD | (addr_convert));

		do{
			if(i >= SPIF_FIFO_DEEPTH){
				//need check fifo status
				while(1){
					fifo_deepth = read_reg(WFIFO_DEPTH);
					if(fifo_deepth < (SPIF_FIFO_DEEPTH<<2))
						break;
				}
				if(fifo_deepth == 0)
					break; //case fifo empty, write opration broken

			}
			*(volatile uint32_t *)SPIF_CONFIG_BASE = data_write[i];
			i++;
		}while(i< size_in_page/4);

		HAL_EXIT_CRITICAL_SECTION();

		size_write -= (i*4);
		addr_write += (i*4);
		data_write += i;
	}
	
	SPIF_CHECK_BUSY();

	_spif_write_disable();	 // disable  write

	return size;
}

int spif_write(uint32_t addr, uint32_t *data,  int size)
{
	uint8_t spif_clk_mask,spif_clk_val,dly_val;

	if(size & 3)  return 0;

	spif_clk_mask = pcr_s_wr_reg10_spif_refclk_sel_getf();
	spif_clk_val = pcrm_timer_clk_ctl_spif_refclk_sel_getf();
	dly_val = spif_spif_dly_get();
	
	/* set 4 div */
	pcr_s_wr_reg10_spif_refclk_sel_setf(1);
	pcrm_timer_clk_ctl_spif_refclk_sel_setf(4);

	spif_write_page_word(addr,data,size/4);

	pcr_s_wr_reg10_spif_refclk_sel_setf(spif_clk_mask);
	pcrm_timer_clk_ctl_spif_refclk_sel_setf(spif_clk_val);
	spif_spif_dly_set(dly_val);

	return PPlus_SUCCESS;
}

int spif_write_verified (uint32_t addr, uint32_t value)
{
    spif_write_word(addr, value);

	//HAL_ENABLE_INTERRUPTS();
	if(spif_read_word(addr) != value)
		return PPlus_ERR_FATAL;

	return PPlus_SUCCESS;
}


// read one byte from flash
uint8_t spif_read_byte (uint32_t addr)//rom
{
	uint8_t value;
	uint32_t addr_convert;
    addr = addr & 0xffffff;
    
	WAIT_FOR_SPIF();
    
    _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();

	*(volatile unsigned int *) SPIF_RLEN = 1;	
	
    addr_convert = SPIF_ADDR_CONVERT(addr);
	
	*(volatile unsigned int *)SPIF_CONFIG_BASE = READ_DATA_CMD | (addr_convert );//<< 8);
      
	WAIT_FOR_SPIF();   //不能去掉

    HAL_EXIT_CRITICAL_SECTION();
	
	value = *(volatile uint8_t *)(SPIF_CONFIG_BASE);
	
	return value;
}

//patch
uint32_t spif_read_word(uint32_t addr)
{
	uint32_t value;
	uint32_t addr_convert;
    
	WAIT_FOR_SPIF();
    
     _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();
	*(volatile unsigned int *) SPIF_RLEN = 4;
	
    addr_convert = SPIF_ADDR_CONVERT(addr);
	
	*(volatile unsigned int *)SPIF_CONFIG_BASE = READ_DATA_CMD | (addr_convert);// << 8);
      
	WAIT_FOR_SPIF(); 

    HAL_EXIT_CRITICAL_SECTION();
	
	value= *(volatile uint32_t *)(SPIF_CONFIG_BASE);
	
	return value;
}


