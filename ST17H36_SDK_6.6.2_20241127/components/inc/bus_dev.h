
/**************************************************************************************************
  Filename:       bus_dev.h
  Revised:         
  Revision:       

  Description:    This file contains the SoC MCU relate definitions

 **************************************************************************************************/
 
#ifndef __BUS_DEV_H__
#define __BUS_DEV_H__

#ifdef __cplusplus
 extern "C" {
#endif 

#include "mcu.h"
#include "rom_sym_def.h"

enum{
    RSTC_COLD_UP = 0,
    RSTC_WARM_UP = 1,
    RSTC_OFF_MODE = 2,
    RSTC_WAKE_IO = 3,
    RSTC_WAKE_RTC = 4,
    RSTC_WARM_NDWC = 5,  //user mode, no dwc
    RSTC_DLL_RST_NDWC = 6,  //user mode, no dwc
    RSTC_XTAL_RST_NDWC = 7  //user mode, no dwc

};

/* -------------------------  Interrupt Number Definition  ------------------------ */
#if 0
typedef enum IRQn
{
/* -------------------  Cortex-M0 Processor Exceptions Numbers  ------------------- */
  NonMaskableInt_IRQn           = -14,      /*  2 Non Maskable Interrupt */
  HardFault_IRQn                = -13,      /*  3 HardFault Interrupt */



  SVCall_IRQn                   =  -5,      /* 11 SV Call Interrupt */

  PendSV_IRQn                   =  -2,      /* 14 Pend SV Interrupt */
  SysTick_IRQn                  =  -1,      /* 15 System Tick Interrupt */

/* ----------------------  PHY BUMBEE M0 Interrupt Numbers  --------------------- */
  CK_Systick_IRQn               =   1, 
  CORET_IRQn                    =   1,
  OTP_IRQn                      =   3, 
  BB_IRQn                       =   4,      /* Base band Interrupt */
  //KSCAN_IRQn                    =   5,      /* Key scan Interrupt */
  //RTC_IRQn                      =   6,      /* RTC Timer Interrupt */
  CPCOM_AP_IPC_IRQn             =   7,
  APCOM_AP_IPC_IRQn             =   8,	
  WDT_IRQn                      =  10,      /* Watchdog Timer Interrupt */
  UART0_IRQn                    =  11,      /* UART0 Interrupt */
  I2C0_IRQn                     =  12,      /* I2C0 Interrupt */
  //I2C1_IRQn                     =  13,      /* I2C1 Interrupt */
  SPI0_IRQn                     =  14,       /* SPI0 Interrupt */
  //SPI1_IRQn                     =  15,       /* SPI1 Interrupt */
  GPIO_IRQn                     =  16,      /* GPIO Interrupt */
  XTAL_IRQn                     =  17,      /* XTAL TRACKING Interrupt */
  DLL_IRQn                      =  18,      /* DLL TRACKING Interrupt */
  //DMAC_IRQn                     =  19,      /* DMAC Interrupt */
  TIM1_IRQn                     =  20,      /* Timer1 Interrupt */
  TIM2_IRQn                     =  21,      /* Timer2 Interrupt */
  TIM3_IRQn                     =  22,      /* Timer3 Interrupt */
  TIM4_IRQn                     =  23,      /* Timer4 Interrupt */
  //TIM5_IRQn                     =  24,      /* Timer5 Interrupt */
  //TIM6_IRQn                     =  25,      /* Timer6 Interrupt */

  USB_IRQn                   =  26,      /* OTGTOP Interrupt */
  OTGTOP_RF_IRQn                =  27,      /* OTGTOP_RF Interrupt */
  AES_IRQn                      =  28,      /* AES Interrupt */
  ADCC_IRQn                     =  29,      /* ADC Interrupt */
  //QDEC_IRQn                     =  30,      /* QDEC Interrupt */
  RNG_IRQn                      =  31      /* RNG Interrupt */
} xIRQn_Type;
#endif

#define ATTRIBUTE_ISR
//#define ATTRIBUTE_ISR  __attribute__((isr))

#undef SET_BIT
#undef GET_BIT
#undef CLR_BIT
#undef BIT

#include "femto_iot.h"
#include "riscv_cmsis.h"

#include "mcu_phy_femto.h"

#include "femto_reg.h"

#endif
