﻿
#ifndef __MCU_FEMTO_M0__
#define __MCU_FEMTO_M0__

#ifdef __cplusplus
 extern "C" {
#endif 

#include "types.h"
//#include "jump_function.h"
typedef enum{
	MOD_NONE = 0, MOD_CK802_CPU   = 0,
	//MOD_DMA     =3,//
	MOD_AES     =4,
	MOD_IOMUX   =7,
	MOD_UART0    =8,
	MOD_I2C0    =9,
	//MOD_I2C1    =10,//
	MOD_SPI0    =11,
	MOD_SPI1    =12,
	MOD_GPIO    =13,
	MOD_QDEC    =15,
	MOD_ADCC    =17,
	MOD_PWM     =18,
	MOD_OTP     =19,
    	MOD_VOC     =20,//
	MOD_TIMER5  =21,//
	MOD_TIMER6  =22,//
	MOD_UART1   =25,

	MOD_CP_CPU   = 0+32,
	MOD_BB       = MOD_CP_CPU+3,
	MOD_TIMER    = MOD_CP_CPU+4,
	MOD_WDT      = MOD_CP_CPU+5,
	MOD_COM      = MOD_CP_CPU+6,
	MOD_KSCAN    = MOD_CP_CPU+7,
	MOD_BBREG    = MOD_CP_CPU+9,
	BBLL_RST 	 = MOD_CP_CPU+10,//can reset,but not gate in here //
	BBTX_RST 	 = MOD_CP_CPU+11,//can reset,but not gate in here //
	BBRX_RST 	 = MOD_CP_CPU+12,//can reset,but not gate in here //
	BBMIX_RST 	 = MOD_CP_CPU+13,//can reset,but not gate in here //
	MOD_TIMER1   = MOD_CP_CPU+21,
	MOD_TIMER2   = MOD_CP_CPU+22,
	MOD_TIMER3   = MOD_CP_CPU+23,
	MOD_TIMER4   = MOD_CP_CPU+24,

	MOD_PCLK_CACHE	= 0+64,//
	MOD_HCLK_CACHE	= MOD_PCLK_CACHE+1,//

    
	MOD_USR0    =0+96,
	MOD_USR1    =MOD_USR0+1,
	MOD_USR2    =MOD_USR0+2,
	MOD_USR3    =MOD_USR0+3,
	MOD_USR4    =MOD_USR0+4,
	MOD_USR5    =MOD_USR0+5,
	MOD_USR6    =MOD_USR0+6,
	MOD_USR7    =MOD_USR0+7,
	MOD_USR8    =MOD_USR0+8,
}MODULE_e;







#ifndef __I
#ifdef __cplusplus
#define     __I      volatile             /*!< Defines 'read only' permissions */
#else
#define     __I      volatile const       /*!< Defines 'read only' permissions */
#endif
#endif


#ifndef __O
#define     __O      volatile             /*!< Defines 'write only' permissions */
#endif

#ifndef __IO
#define     __IO     volatile             /*!< Defines 'read / write' permissions */
#endif

/* following defines should be used for structure members */
#ifndef __IM
#define     __IM     volatile const       /*! Defines 'read only' structure member permissions */
#endif

#ifndef __OM
#define     __OM     volatile             /*! Defines 'write only' structure member permissions */
#endif

#ifndef __IOM
#define     __IOM    volatile             /*! Defines 'read / write' structure member permissions */
#endif


/*******************************************************************************
 * TYPEDEFS
 */
/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/
//typedef struct{	
//	__IO uint32_t  CH0_AP_MBOX;
//	__IO uint32_t  CH0_CP_MBOX;
//	__IO uint32_t  CH1_AP_MBOX;
//	__IO uint32_t  CH1_CP_MBOX;
//	__IO uint32_t  AP_STATUS;
//	__IO uint32_t  CP_STATUS;
//	__IO uint32_t  AP_INTEN;
//	__IO uint32_t  CP_INTEN;
//	__IO uint32_t  remap;
//	__IO uint32_t  RXEV_EN;
//	__IO uint32_t  STCALIB;
//	__IO uint32_t  PERI_MASTER_SELECT;	
//	__IO uint32_t  new_add_reg0;
//	__IO uint32_t  new_add_reg1;
//	__IO uint32_t  new_add_reg2;
//	__IO uint32_t  new_add_reg3;
//	__IO uint32_t  cache_ctrl0;
//	__IO uint32_t  cache_ctrl1;
//}AP_COM_TypeDef;
//
//typedef struct{	
//	__IO uint32_t  CTRL0;//0x40
//	__IO uint32_t  CTRL1;//0x44
//			 uint32_t  reserverd[13];
//	__IO uint32_t REMAP_TABLE;//0x7c
//	__IO uint32_t REMAP_CTRL[32];//0x80
//}AP_CACHE_TypeDef;
//
//typedef struct
//{
//    __IO uint8_t  CR;   //0x0
//         uint8_t  RESERVED0[3];
//    __IO uint32_t TORR;  //0x4
//    __O  uint32_t CCVR;  //0x8
//    __IO uint32_t CRR;    //0xc
//         uint8_t  STAT;   //0x10
//         uint8_t  reserverd1[3];
//    __IO uint8_t  EOI;    //0x14
//         uint8_t  reserverd2[3];	
//} AP_WDT_TypeDef;
//
//
//
typedef struct
{
	__IO uint32_t SW_RESET0;   //0x0
	__IO uint32_t SW_RESET1;   //0x4
	__IO uint32_t SW_CLK;   //0x8
	__IO uint32_t SW_RESET2;   //0xc
	__IO uint32_t SW_RESET3;   //0x10
	__IO uint32_t SW_CLK1;   //0x14
	__IO uint32_t APB_CLK;   //0x18
	__IO uint32_t APB_CLK_UPDATE;   //0x1c
	__IO uint32_t CACHE_CLOCK_GATE;//0x20
	__IO uint32_t CACHE_RST;//0x24
	__IO uint32_t FLH_BUS_SEL;//0x28
} AP_PCR_TypeDef;

//typedef struct
//{
//    __IO uint32_t LoadCount;  //0x0
//	__IO uint32_t CurrentCount;  //0x4
//	__IO uint32_t ControlReg;  //0x8
//	__IO uint32_t EOI;  //0xc
//	__IO uint32_t status;   //0x10
//	
//} AP_TIM_TypeDef;

typedef struct
{
    __IO uint32_t IntStatus;
	__IO uint32_t EOI;
	__IO uint32_t unMaskIntStatus;
	__IO uint32_t version;
} AP_TIM_SYS_TypeDef;


//#if defined ( __CC_ARM   )
//#pragma anon_unions
//#endif
//
///*------------- Universal Asynchronous Receiver Transmitter (UARTx) -----------*/
//
//typedef struct
//{
//	union
//	{
//		__I  uint8_t  RBR;
//		__IO  uint8_t  THR;
//		__IO uint8_t  DLL;
//		uint32_t RESERVED0;    //0x0
//	};
//	union
//	{
//		__IO uint8_t  DLM;
//		__IO uint32_t IER;   //0x4
//	};
//	union
//	{
//		__I  uint32_t IIR;   //0x8
//		__IO  uint8_t  FCR;
//	};
//	__IO uint8_t  LCR;   //0xc
//	uint8_t  RESERVED1[3];//Reserved
//	__IO uint32_t MCR; //0x10
//	
//	__I  uint8_t  LSR;  //0x14
//	uint8_t  RESERVED2[3];//Reserved
//	__IO uint32_t MSR;   //0x18
//	
//	__IO uint8_t  SCR;   //0x1c
//	uint8_t  RESERVED3[3];//Reserved
//	
//	__IO uint32_t LPDLL;  //0x20
//	
//	__IO uint32_t LPDLH;  //0x24
//	
//	__IO uint32_t  recerved[2];
//	
//	union
//    {		
//		__IO uint32_t SRBR[16];  // 0x30~60xc
//		__IO uint32_t STHR[16];		
//	};
//	__IO uint32_t  FAR;  //0x70
//	
//	__IO uint32_t  TFR;  //0x74
//	
//	__IO uint32_t  RFW;  // 0x78
//	
//	__IO uint32_t  USR;  // 0x7c
//	
//	__IO uint32_t  TFL;
//	
//	__IO uint32_t  RFL;
//	
//	__IO uint32_t  SRR;
//	
//	__IO uint32_t  SRTS;
//	
//	__IO uint32_t  SBCR;
//	
//	__IO uint32_t  SDMAM;
//	
//	__IO uint32_t  SFE;
//	
//	__IO uint32_t  SRT;
//	
//	__IO uint32_t  STET;  //0xa0
//	
//	__IO uint32_t  HTX;
//	
//	__IO uint32_t  DMASA;  //0xa8
//	
//	__IO uint32_t  reserved[18];
//	
//	__IO uint32_t  CPR;  //0xf4
//	
//	__IO uint32_t  UCV;
//	
//	__IO uint32_t  CTR;
//
//}AP_UART_TypeDef;
//
//
/*------------- Inter-Integrated Circuit (I2C)  setup by zjp-------------------------------*/
//typedef struct
//{
//    __IO uint32_t  IC_CON; 
//    __IO uint32_t  IC_TAR;
//    __IO uint32_t  IC_SAR;
//    __IO uint32_t  IC_HS_MADDR;
//    __IO uint32_t  IC_DATA_CMD; //0x10
//    __IO uint32_t  IC_SS_SCL_HCNT;
//    __IO uint32_t  IC_SS_SCL_LCNT;
//    __IO uint32_t  IC_FS_SCL_HCNT;
//    __IO uint32_t  IC_FS_SCL_LCNT; //0x20
//    __IO uint32_t  IC_HS_SCL_HCNT;   
//    __IO uint32_t  IC_HS_SCL_LCNT;
//    __IO uint32_t  IC_INTR_STAT;
//    __IO uint32_t  IC_INTR_MASK;  //0x30
//    __IO uint32_t  IC_RAW_INTR_STAT;
//    __IO uint32_t  IC_RX_TL;   
//    __IO uint32_t  IC_TX_TL;
//    __IO uint32_t  IC_CLR_INTR;  //0x40
//    __IO uint32_t  IC_CLR_UNDER;
//    __IO uint32_t  IC_CLR_RX_OVER;
//    __IO uint32_t  IC_CLR_TX_OVER;  
//    __IO uint32_t  IC_CLR_RD_REG;  //0x50
//    __IO uint32_t  IC_CLR_TX_ABRT;
//    __IO uint32_t  IC_CLR_RX_DONE;
//    __IO uint32_t  IC_CLR_ACTIVITY;
//    __IO uint32_t  IC_CLR_STOP_DET;  //0x60  
//    __IO uint32_t  IC_CLR_START_DET;
//    __IO uint32_t  IC_CLR_GEN_CALL;
//    __IO uint32_t  IC_ENABLE;
//    __IO uint32_t  IC_STATUS;  //0x70
//    __IO uint32_t  IC_TXFLR;  
//    __IO uint32_t  IC_RXFLR;
//    __IO uint32_t  IC_SDA_HOLD;
//    __IO uint32_t  IC_TX_ABRT_SOURCE;  //0x80
//    __IO uint32_t  IC_SLV_DATA_NACK_ONLY;
//    __IO uint32_t  IC_DMA_CR;  
//    __IO uint32_t  IC_DMA_TDLR;
//    __IO uint32_t  IC_DMA_RDLR; //0x90
//    __IO uint32_t  IC_SDA_SETUP;
//    __IO uint32_t  IC_ACK_GENERAL_CALL;
//    __IO uint32_t  IC_ENABLE_STATUS;
//    __IO uint32_t  IC_FS_SPKLEN;  //0xa0
//    __IO uint32_t  IC_HS_SPKLEN;
//   	
//} AP_I2C_TypeDef;
//
///*------------- General Purpose Input/Output (GPIO) --------------------------*/
//typedef struct
//{
//    __IO uint32_t swporta_dr;                              //0x00
//    __IO uint32_t swporta_ddr;                             //0x04
//    __IO uint32_t swporta_ctl;                             //0x08
//	     uint32_t reserved8[9];                            //0x18-0x2c portC&D
//    __IO uint32_t inten;		                           //0x30
//    __IO uint32_t intmask;                                 //0x34
//    __IO uint32_t inttype_level;                           //0x38
//    __IO uint32_t int_polarity;                            //0x3c
//    __I  uint32_t int_status;                              //0x40
//    __IO uint32_t raw_instatus;                            //0x44
//    __IO uint32_t debounce;                                //0x48
//    __O  uint32_t porta_eoi;                               //0x4c
//    __I  uint32_t ext_porta;                               //0x50
//	     uint32_t reserved9[3];                              //0x58 0x5c
//    __IO uint32_t ls_sync;                                 //0x60
//    __I  uint32_t id_code;                                 //0x64
//	     uint32_t reserved10[1];                             //0x68
//    __I  uint32_t ver_id_code;                             //0x6c
//    __I  uint32_t config_reg2;                             //0x70
//    __I  uint32_t config_reg1;                             //0x74	
//} AP_GPIO_TypeDef;
//
//
///*--------------------  (SPI) --------------------------------*/
//typedef struct
//{
//    __IO uint16_t     CR0;           //0x0                /*!< Offset: 0x000 Control Register 0 (R/W) */
//    uint16_t     reserved1;
//    __IO uint16_t     CR1;           //0x04                 /*!< Offset: 0x004 Control Register 1 (R/W) */
//    uint16_t     reserved2;
//    __IO uint8_t      SSIEN;         //0x08
//    uint8_t      reserved3[3];
//    __IO uint8_t      MWCR;          // 0x0c
//    uint8_t      reserved4[3];
//    __IO uint8_t      SER;           //0x10
//    uint8_t      reserved5[3];
//    __IO uint32_t     BAUDR;         //0x14
//    __IO uint32_t     TXFTLR;        //0x18
//    __IO uint32_t     RXFTLR;        //0x1c
//    __O  uint32_t     TXFLR;         //0x20
//    __O  uint32_t     RXFLR;         //0x24
//
//    __IO uint8_t      SR;            //0x28
//    uint8_t      reserved7[3];
//    __IO uint32_t     IMR;           //0x2c
//    __IO uint32_t     ISR;           //0x30
//    __IO uint32_t     RISR;          //0x34
//    __IO uint32_t     TXOICR;        //0x38
//    __IO uint32_t     RXOICR;        //0x3c
//    __IO uint32_t     RXUICR;        //0x40
//    __IO uint32_t     MSTICR;        //0x44
//    __IO uint32_t     ICR;           //0x48
//    __IO uint32_t     DMACR;         //0x4c
//    __IO uint32_t     DMATDLR;       //0x50
//    __IO uint32_t     DMARDLR;       //0x54
//    __IO uint32_t     IDR;           //0x5c
//    __IO uint32_t     SSI_COM_VER;   //0x5c
//    __IO uint32_t     DataReg;
//
//} AP_SSI_TypeDef;
//
//
//typedef struct{
//	__IO uint32_t    Analog_IO_en;//0x00
//	__IO uint32_t    SPI_debug_en;//0x04
//	__IO uint32_t    debug_mux_en;//0x08
//	__IO uint32_t    full_mux0_en;//0x0c
//	__IO uint32_t    full_mux1_en;//0x10 reserved in some soc
//	__IO uint32_t    gpio_pad_en; //0x14         
//	__IO uint32_t    gpio_sel[9]; //0x18	
//	__IO uint32_t    pad_pe0;//0x3c
//	__IO uint32_t    pad_pe1;//0x40
//	__IO uint32_t    pad_ps0;//0x44               
//	__IO uint32_t    pad_ps1;//0x48         
//	__IO uint32_t    keyscan_in_en;//0x4c         
//	__IO uint32_t    keyscan_out_en;//0x50
//}IOMUX_TypeDef;
//
//
//typedef struct{
//	__IO uint32_t    PWROFF;        //0x00
//	__IO uint32_t    PWRSLP;        //0x04
//	__IO uint32_t    IOCTL[3];      //0x08 0x0c 0x10
//	__IO uint32_t    PMCTL0;        //0x14
//	__IO uint32_t    PMCTL1;        //0x18  
//	__IO uint32_t    PMCTL2_0;      //0x1c
//	__IO uint32_t    PMCTL2_1;      //0x20
//	__IO uint32_t    RTCCTL;				//0x24
//	__IO uint32_t    RTCCNT;				//0x28
//	__IO uint32_t    RTCCC0;				//0x2c
//	__IO uint32_t    RTCCC1;				//0x30
//	__IO uint32_t    RTCCC2;				//0x34
//	__IO uint32_t    RTCFLAG;				//0x38
//	__IO uint32_t    reserved[25];
//	__IO uint32_t    REG_S9;        //0xa0
//	__IO uint32_t    REG_S10;       //0xa4
//	__IO uint32_t    REG_S11;       //0xa8
//	__IO uint32_t    IDLE_REG;     //0xac
//	__IO uint32_t    GPIO_WAKEUP_SRC[2]; //0xb0 b4    
//    __IO uint32_t    PCLK_CLK_GATE; //0xb8
//    __IO uint32_t    XTAL_16M_CTRL; //0xbc
//    __IO uint32_t    SLEEP_R[4];    //0xc0 c4 c8 cc
//        
//}AP_AON_TypeDef;
//
//
//typedef struct{
//	__IO uint32_t    RTCCTL;          //0x24
//	__IO uint32_t    RTCCNT;          //0x28
//	__IO uint32_t    RTCCC0;          //0x2c
//	__IO uint32_t    RTCCC1;          //0x30
//	__IO uint32_t    RTCCC2;          //0x34
//	__IO uint32_t    RTCFLAG;         //0x38
//}AP_RTC_TypeDef;
//
//typedef struct{
//	__IO uint32_t    io_wu_mask_31_0;          //0xa0
//	__IO uint32_t    io_wu_mask_34_32;          //0xa4
//}AP_Wakeup_TypeDef;
//
//typedef struct{
//	__IO uint32_t    CLKSEL;          //0x3c
//	__IO uint32_t    CLKHF_CTL0;          //0x40
//	__IO uint32_t    CLKHF_CTL1;          //0x44
//	__IO uint32_t    ANA_CTL;          //0x48
//	__IO uint32_t    mem_0_1_dvs;          //0x4c
//	__IO uint32_t    mem_2_3_4_dvs;          //0x50
//	__IO uint32_t    efuse_cfg;          //0x54
//	__IO uint32_t    chip_state;          //0x58
//	__IO uint32_t    cal_rw;          //0x5c
//	__IO uint32_t    cal_ro0;          //0x60
//	__IO uint32_t    cal_ro1;          //0x64
//	__IO uint32_t    cal_ro2;          //0x68
//	__IO uint32_t    ADC_CTL0;          //0x6c
//	__IO uint32_t    ADC_CTL1;          //0x70
//	__IO uint32_t    ADC_CTL2;          //0x74
//	__IO uint32_t    ADC_CTL3;          //0x78
//	__IO uint32_t    ADC_CTL4;          //0x7c
//	__IO uint32_t    reserved0[65];
//}AP_PCRM_TypeDef;
//
//typedef struct{
//	__IO uint32_t    enable;          //0x00
//	__IO uint32_t    reserved0[2];    //0x04~0x08
//	__IO uint32_t    control[4];      //0x0c~0x18
//	__IO uint32_t    compare_reset;   //0x1c
//	__IO uint32_t    int_pointer[2];  //0x20~0x24
//	__IO uint32_t    reserved1[3];    //0x28~0x30
//	__IO uint32_t    intr_mask;       //0x34
//	__IO uint32_t    intr_clear;      //0x38
//	__IO uint32_t    intr_status;     //0x3c
//	__IO uint32_t    compare_cfg[8];  //0x40~0x5c
//}AP_ADCC_TypeDef;
//
//
//
//
//
//typedef struct{
//    __IO uint32_t PWMEN;   //0x00
//
//    __IO uint32_t PWM0CTL0;//0x04
//    __IO uint32_t PWM0CTL1;//0x08
//         uint32_t RESERVED0;
//
//    __IO uint32_t PWM1CTL0;//0x10
//    __IO uint32_t PWM1CTL1;//0x14
//         uint32_t RESERVED1;    
//
//    __IO uint32_t PWM2CTL0;//0x1c
//    __IO uint32_t PWM2CTL1;//0x20
//         uint32_t RESERVED2;   
//
//    __IO uint32_t PWM3CTL0;//0x28
//    __IO uint32_t PWM3CTL1;//0x2c
//         uint32_t RESERVED3;   
//
//    __IO uint32_t PWM4CTL0;//0x34
//    __IO uint32_t PWM4CTL1;//0x38
//         uint32_t RESERVED4;
//   
//    __IO uint32_t PWM5CTL0;//0x40
//    __IO uint32_t PWM5CTL1;//0x44
//}AP_PWM_TypeDef;
//
//typedef struct{
//	__IO uint32_t    otp_mode_setting;//0x00
//	__IO uint32_t    power_timing_control;//0x04
//	__IO uint32_t    setting1;//0x08
//	__IO uint32_t    setting2;//0x0c
//	__IO uint32_t    test_ctrl;//0x10 reserved in some soc
//	__IO uint32_t    state; //0x14         
//	__IO uint32_t    prog_num; //0x18	
//	__IO uint32_t    prog_addr;//0x1c
//	__IO uint32_t    prog_data;//0x20
//	__IO uint32_t    int_mask;//0x24               
//	__IO uint32_t    int_clr;//0x28         
//	__IO uint32_t    int_source;//0x2c
//	__IO uint32_t    reserved[4];
//	__IO uint32_t    paio;//0x40
//	__IO uint32_t    ptm;//0x44
//	__IO uint32_t    pwe;//0x48
//	__IO uint32_t    prog;//0x4c
//	__IO uint32_t    pclk_clockgate_en;//0x50
//	__IO uint32_t    pce;//0x54
//	__IO uint32_t    ptr;//0x58
//	__IO uint32_t    pdstb;//0x5c
//	__IO uint32_t    pldo;//0x60
//	__IO uint32_t    pldo2;//0x64
//	__IO uint32_t    pa;//0x68
//	__IO uint32_t    reserved1[1];//0x6c
//	__IO uint32_t    prog_protect;//0x70
//}OTP_TypeDef;
//
//
#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif


/******************************************************************************/
/*                         Peripheral memory map(AP)                          */
/******************************************************************************/
/* Base addresses                                                             */
#define AP_APB0_BASE         (0x40000000UL)
//#define SPIF_BASE_ADDR       (0x11000000)           /*spif*/
//
#define AP_PCR_BASE          (AP_APB0_BASE + 0x0000)/*pcr*//* APB0 peripherals   */
//
//#define AP_TIM1_BASE         (AP_APB0_BASE + 0x1000)
//#define AP_TIM2_BASE         (AP_APB0_BASE + 0x1014)
//#define AP_TIM3_BASE         (AP_APB0_BASE + 0x1028)
//#define AP_TIM4_BASE         (AP_APB0_BASE + 0x103c)
////#define AP_TIM5_BASE         (AP_APB0_BASE + 0x1050)
////#define AP_TIM6_BASE         (AP_APB0_BASE + 0x1064)
//#define AP_TIM_SYS_BASE      (AP_APB0_BASE + 0x10a0)
//
//#define AP_WDT_BASE          (AP_APB0_BASE + 0x2000)
//#define AP_COM_BASE          (AP_APB0_BASE + 0x3000)/*com*/
//#define AP_IOMUX_BASE        (AP_APB0_BASE + 0x3800)/*iomux*/
//#define AP_UART0_BASE        (AP_APB0_BASE + 0x4000)/*uart0*/
//#define AP_I2C0_BASE         (AP_APB0_BASE + 0x5000)/*i2c0*/
//#define AP_SPI0_BASE         (AP_APB0_BASE + 0x6000)/*spi0*/
//#define AP_GPIOA_BASE        (AP_APB0_BASE + 0x8000)/*gpio*/
//#define AP_CACHE_BASE        (AP_APB0_BASE + 0xC000)
//
//#define AP_PWM_BASE          (AP_APB0_BASE + 0xE000)/*pwm*/
//#define AP_AON_BASE          (AP_APB0_BASE + 0xF000)/*aon*/
//#define AP_RTC_BASE          (AP_APB0_BASE + 0xF024)/*rtc*/
//#define AP_PCRM_BASE         (AP_APB0_BASE + 0xF03c)/*pcrm*/
//#define AP_WAKEUP_BASE       (AP_APB0_BASE + 0xF0a0)/*wakeup*/
//#define ADCC_BASE_ADDR        0x40050000
//
///*
//    watchdog enable state,enable or not.
//*/
//#define AP_WDT_ENABLE_STATE     ((AP_WDT->CR & 0x01))//1:enable 0:disable
//#define AP_WDT_FEED             do{AP_WDT->CRR = 0x76;}while(0)
//
///*bb_top*/
///*linklayer*/
//
//#define SRAM0_BASE_ADDRESS     0x1FFF0000
////#define SRAM1_BASE_ADDRESS     0x1FFF4000
////#define SRAM2_BASE_ADDRESS     0x1FFF8000
///*
////#define SRAM3_BASE_ADDRESS     0x20010000
////#define SRAM4_BASE_ADDRESS     0x20012000
//RAM_BB
//RAM_CACHE
//*/   
//
//#define OTP_CONTROL_BASE_ADDRESS    0x1FFFC000

/////////////////////////////////////////////////////////////
#define AP_PCR               ((AP_PCR_TypeDef *) AP_PCR_BASE)
//
//#define AP_TIM1               ((AP_TIM_TypeDef *) AP_TIM1_BASE)
//#define AP_TIM2               ((AP_TIM_TypeDef *) AP_TIM2_BASE)
//#define AP_TIM3               ((AP_TIM_TypeDef *) AP_TIM3_BASE)
//#define AP_TIM4               ((AP_TIM_TypeDef *) AP_TIM4_BASE)
//#define AP_TIMS              ((AP_TIM_SYS_TypeDef *) AP_TIM_SYS_BASE)
//
//#define AP_WDT               ((AP_WDT_TypeDef *) AP_WDT_BASE)
//#define AP_COM               ((AP_COM_TypeDef *) AP_COM_BASE)
//#define AP_IOMUX             ((IOMUX_TypeDef *) AP_IOMUX_BASE)
//#define AP_UART0             ((AP_UART_TypeDef *) AP_UART0_BASE)
//#define AP_I2C0              ((AP_I2C_TypeDef  *) AP_I2C0_BASE)
//
//#define AP_SPI0              ((AP_SSI_TypeDef *) AP_SPI0_BASE)
//
//#define AP_GPIO              ((AP_GPIO_TypeDef *) AP_GPIOA_BASE)
//
//
//#define AP_CACHE             ((AP_CACHE_TypeDef *) AP_CACHE_BASE)
//
//#define AP_PWM               ((AP_PWM_TypeDef *) AP_PWM_BASE)//
//
//#define AP_AON               ((AP_AON_TypeDef  *) AP_AON_BASE)
//#define AP_RTC               ((AP_RTC_TypeDef  *) AP_RTC_BASE)
//#define AP_PCRM              ((AP_PCRM_TypeDef  *) AP_PCRM_BASE)//
//#define AP_WAKEUP            ((AP_Wakeup_TypeDef*) AP_WAKEUP_BASE)
//#define AP_ADCC              ((AP_ADCC_TypeDef  *) ADCC_BASE_ADDR)
//#define AP_OTP              ((OTP_TypeDef  *) OTP_CONTROL_BASE_ADDRESS)
//
//
//
//#define AP_STATUS1_REG          (unsigned int *) 0x40003010
//#define AP_STATUS2_REG          (unsigned int *) 0x40003014	
//#define AP_EVENT_REC_REG        (unsigned int *) 0x40003024
//#define AP_STCALIB              (unsigned int *) 0x40003028
//#define AP_PERI_MASTER_SELECT   *(volatile unsigned int  *)0x4000302C	
    


/******************************************************************************/
/*                         Peripheral memory map(CP)                          */
/******************************************************************************/
/* Base addresses                                                             */
#define IRQ_PRIO_REALTIME     0
#define IRQ_PRIO_HIGH         1
#define IRQ_PRIO_HAL          2
#define IRQ_PRIO_THREAD       3
#define IRQ_PRIO_APP          3


#endif
