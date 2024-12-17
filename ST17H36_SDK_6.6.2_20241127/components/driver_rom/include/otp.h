
#ifndef __OTP_ROM_H__
#define __OTP_ROM_H__

#ifdef __cplusplus
extern "C" {
#endif


#include "bus_dev.h"
#include "gpio.h"


/*test row*/
#define OTP_TEST_ROW_ENABLE   com_new_add_reg0_set(1)//AP_COM->new_add_reg1 |= BIT(0)


#define OTP_TEST_ROW_DISABLE  com_new_add_reg0_set(0)//AP_COM->new_add_reg1 &= ~BIT(0)


//0x00
#define OTP_HARDWARE_CONTROL 		otp_mode_setting_soft_mode_setf(0)//AP_OTP->otp_mode_setting &= ~BIT(8)
#define OTP_SOFTWARE_CONTROL 		otp_mode_setting_soft_mode_setf(1)//AP_OTP->otp_mode_setting |= BIT(8)

#define    OTP_OUT_TEST_MODE	        otp_mode_setting_test_mode_setf(~(15ul))//AP_OTP->otp_mode_setting &= ~(15ul<<4)
#define    OTP_IN_TEST_MODE_1        	do{\
											OTP_OUT_TEST_MODE;\
											otp_mode_setting_test_mode_setf(1);\
											}while(0)

#define    OTP_IN_TEST_MODE_2        	do{\
											OTP_OUT_TEST_MODE;\
											otp_mode_setting_test_mode_setf(4);\
											}while(0)

#define    OTP_IN_TEST_MODE_3        	do{\
										OTP_OUT_TEST_MODE;\
										otp_mode_setting_test_mode_setf(9);\
										}while(0)

#define    OTP_IN_TEST_MODE_4        	do{\
										OTP_OUT_TEST_MODE;\
										otp_mode_setting_test_mode_setf(12);\
										}while(0)
										
#define OTP_PROG_MODE_EN			otp_mode_setting_progream_mode_en_setf(1)
#define OTP_PROG_MODE_DIS			otp_mode_setting_progream_mode_en_setf(0)

#define OTP_DEEPSLEEP_MODE_EN		otp_mode_setting_deep_sleep_mode_en_setf(1)
#define OTP_DEEPSLEEP_MODE_DIS		otp_mode_setting_deep_sleep_mode_en_setf(0)

#define OTP_READ_EN				otp_mode_setting_read_en_setf(1)
#define OTP_READ_DIS			otp_mode_setting_read_en_setf(0)
										
#define OTP_POWERON			otp_mode_setting_power_on_setf(1)
#define OTP_POWERDOWM		otp_mode_setting_power_on_setf(0)
		
//0x44
#define OTP_PTM_SET(n)             otp_ptm_ptm_setf(n)
										
//0x50
#define OTP_PCLK_EN			otp_pclk_clockgate_en_pclk_clockgate_en_setf(1)						
#define OTP_PCLK_DIS		otp_pclk_clockgate_en_pclk_clockgate_en_setf(0)

//0x54
#define OTP_PCE_SET		otp_pce_pce_setf(1)
#define OTP_PCE_CLR		otp_pce_pce_setf(0)


#define OTP_W_S_IDLE         (0)
//#define OTP_W_S_POWER_UP     (1)
#define OTP_W_S_STANDBY      (2)
#define OTP_W_S_READ         (3)
#define OTP_W_S_DEEPLEEP_IN  (4) 
//#define OTP_W_S_DEEPLEEP_OUT (5)
//#define OTP_W_S_PROG_ENTRY   (6)
#define OTP_W_S_PROG_ACCESS  (7)
#define OTP_W_S_TEST_MODE0   (8)
#define OTP_W_S_TEST_MODE1   (9)
#define OTP_W_S_TEST_MODE2   (10)
#define OTP_W_S_TEST_MODE3   (11)
//#define OTP_W_S_POWER_DOWN   (15)


typedef enum
{	
	OTP_USER_READ_MODE = 0,
	OTP_INIT_MARGIN_READ_ROOM_TEMP = 1,
	OTP_PGM_MARGIN_READ_ROOM_TEMP = 2,
	OTP_INIT_MARGIN_READ_HIGH_TEMP = 3,  
	OTP_PGM_MARGIN_READ_HIGH_TEMP = 4,  
	OTP_NO_READ_CHECK = 5,
	
}OTP_READ_Mode_e;

typedef struct{
  uint32_t id0;
  uint32_t id1;
  uint32_t id2;
  uint32_t id3;
}otp_cid_t;

#define OTP_CID_USB_FLG BIT(6)  //ref <FEMTO_CP_CHIPID(0603).xlsx>
#define OTP_CID_2P4_FLG BIT(5)  //only broadcast working
#define OTP_CID_BLE_FLG BIT(4)

#define OTP_ATE_ERR_CHECK_ADDR  (0x00021000)
//otp mapping
#define OTP_BASE_ADDR              (0x00020000)
#define OTP_END_ADDR               (0x00022000)
//offset:0x00~0x1f otp config
#define OTP_CHIPID_ADDR            (OTP_BASE_ADDR + 0xa8) //16 bytes

#define OTP_USER_SPACE             (0x20)

/*boot info*/
#define OTP_BOOT_AREA_ADDR             (OTP_USER_SPACE)

#define OTP_SPIF_CFG_ADDR              (0x80)

/*secure info*/
#define OTP_SECURE_AREA_ADDR           (0x90)



#define OTP_DWC_BYPASS_ADDR            (0xf0)   //a0 ~ bf, total 4 words
#define OTP_DWC_BYPASS_NUM             (4)      //total 8 words
/*chip id & FCDS info*/
#define OTP_CHIPID_AREA_ADDR           (0xa8)
#define OTP_FCDS_AREA_ADDR             (0xb0)
/*cal result info*/
#define OTP_CALIB_RES_AREA_ADDR        (0x10)

#define OTP_CALIB_RES_RC32M            (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_CALIB_RES_AREA_ADDR)) //RC 32M Calibration result
#define OTP_CALIB_RES_RC32768          (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_CALIB_RES_AREA_ADDR + 4)) //RC 32K Calibration result
#if 1
//boot secure mic include all image info
#define OTP_CHIP_ID                    ((otp_cid_t*)(OTP_CHIPID_ADDR))

#define OTP_BOOT_SEC_ADDR              ((uint8_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR+0x10))
#define OTP_BOOT_BIN_NUM               (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR))
#define OTP_BOOT_MIC                   (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR + 4))
#define OTP_BOOT_RUN_ADDR              (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR + 8))

#define OTP_BOOT_PART_FADDR(n)         (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR+0x10+(n)*0x10))
#define OTP_BOOT_PART_SIZE(n)          ((*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR+0x14+(n)*0x10))&0xffffff)
#define OTP_BOOT_PART_SEC(n)           ((*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR+0x14+(n)*0x10))&0x80000000)
#define OTP_BOOT_PART_AUTH(n)          ((*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR+0x14+(n)*0x10))&0x40000000)
#define OTP_BOOT_PART_RADDR(n)         (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR+0x18+(n)*0x10))
#define OTP_BOOT_PART_SEC_MIC(n)       (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR+0x1c+(n)*0x10))
#define OTP_BOOT_PART_CRC(n)           (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_BOOT_AREA_ADDR+0x1c+(n)*0x10))


#define OTP_SECURE_AUTH_WORD           (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR)) //fct mode flag
#define OTP_SECURE_USE_SELECT          (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR + 0x4))
#define OTP_SECURE_KEY1_L              (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR + 0x8)) //replace efuse data[0]
#define OTP_SECURE_KEY1_H              (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR + 0xc)) //replace efuse data[1]
#define OTP_SECURE_KEY2_L              (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR + 0x10)) //replace efuse data[0]
#define OTP_SECURE_KEY2_H              (*(volatile uint32_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR + 0x14)) //replace efuse data[1]
////#define pOTP_SECURE_PLAINTEXT          ((volatile uint8_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR + 0x10)) //default value
//#define pOTP_SECURE_MIC                ((volatile uint8_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR + 0x10))
//#define pOTP_SECURE_IV                 ((volatile uint8_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR + 0x20))//128 bit, secure IV ffff_ffff --> 0000_0000

#define OTP_KEY_TYPE_CHIPID_WORD       (0x8e89bed6)
#define OTP_KEY_TYPE_SECKEY_WORD       (0xa5a55a5a)

#define OTP_KEY_TYPE_CHIPID            (0xff&OTP_KEY_TYPE_CHIPID_WORD)
#define OTP_KEY_TYPE_SECKEY            (0xff&OTP_KEY_TYPE_SECKEY_WORD)

#define pOTP_SECURE_CHIPID              ((volatile uint8_t*)(OTP_BASE_ADDR + OTP_CHIPID_AREA_ADDR))
#define pOTP_SECURE_KEY_16B             ((volatile uint8_t*)(OTP_BASE_ADDR + OTP_SECURE_AREA_ADDR+8)) 
#endif

typedef int (*otp_pw_t)(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len);
//typedef int (*otp_pr_t)(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len, OTP_READ_Mode_e mode);

extern otp_pw_t otp_program_write;	//otp_prog_data_polling;
//extern otp_pr_t otp_program_read;	//otp_prog_data_polling;

void otp_init(void);
void otp_prog_pin(gpio_pin_e otp_pin);
int otp_prog_mode(uint8_t wmod);
//int otp_prog_mode(gpio_pin_e otp_pin, uint8_t wmod, uint8_t st_time, uint8_t end_time);

bool otp_go_standby(void);
bool otp_go_test(uint8_t test_mode);
bool otp_go_prog(void);
bool otp_go_soft_dly_prog(void);
bool otp_go_deepsleep(void);
bool otp_go_powerdown(void);
bool otp_go_read(void);

void otp_enable_wdt(void);
void otp_disable_wdt(void);
void otp_mode_clr(OTP_READ_Mode_e mode);


//otp driver using hardmode(default mode)
void otp_control_software_mode(bool flag);
int otp_read_data_byte(uint32_t read_addr, uint8_t* data_buf, uint32_t data_len,OTP_READ_Mode_e mode);

int otp_read_data(uint32_t read_addr, uint32_t* data_buf, uint32_t data_len,OTP_READ_Mode_e mode);
int otp_prog_data_polling(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len);
int otp_prog_data_hard_polling(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len);
int otp_prog_data_soft_dly_polling(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len);//,OTP_READ_Mode_e mode);

#if 0
//prog_addr:valid scope [0x1FFF8000,0x1FFFC000)
//data_buf:data unit is word
//data_len:word data number to prog
//timeout_us:0 means not timeout just wait otp finish int.
int otp_prog_data_int(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len,uint32_t timeout_us);
#endif

int otp_default_value_check(uint32_t default_value,OTP_READ_Mode_e mode,uint32_t addr,uint32_t len);

//ate used api
uint16_t otp_ate_test_read(uint32_t default_val,uint8_t main_read_mode,uint32_t addr,uint32_t len);
uint16_t otp_ate_test_row_prog(uint16_t prog_num,uint32_t prog_data);
uint16_t otp_ate_test_row_read(uint16_t read_num,uint32_t read_data,uint8_t read_mode);


#ifdef __cplusplus
}
#endif



#endif
