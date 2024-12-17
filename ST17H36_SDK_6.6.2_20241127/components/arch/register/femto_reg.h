#ifndef _FEMTO_REG_H_
#define _FEMTO_REG_H_

#define _FEMTO_REG_WR(addr, data) (*(volatile unsigned int *)(addr)=(unsigned int)(data))
#define _FEMTO_REG_RD(addr)       (*(volatile unsigned int *)(addr))

#define xC_MACRO_USE_STRUCT


#include "femto_reg_adcc.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_adcc_struct.h"
#endif


#include "femto_reg_aes.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_aes_struct.h"
#endif


#include "femto_reg_aon_pm.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_aon_pm_struct.h"
#endif


#include "femto_reg_aon_rtc.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_aon_rtc_struct.h"
#endif


#include "femto_reg_bb_top.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_bb_top_struct.h"
#endif


#include "femto_reg_com.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_com_struct.h"
#endif


#include "femto_reg_dmac.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_dmac_struct.h"
#endif


#include "femto_reg_efuse.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_efuse_struct.h"
#endif


#include "femto_reg_gpio.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_gpio_struct.h"
#endif


#include "femto_reg_iomux.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_iomux_struct.h"
#endif


#include "femto_reg_linklayer.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_linklayer_struct.h"
#endif


#include "femto_reg_nrz.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_nrz_struct.h"
#endif


#include "femto_reg_otp.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_otp_struct.h"
#endif


#include "femto_reg_pcr.h"


#include "femto_reg_pcrm.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_pcrm_struct.h"
#endif

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_pcr_struct.h"
#endif


#include "femto_reg_spi0.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_spi0_struct.h"
#endif


#include "femto_reg_spif.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_spif_struct.h"
#endif


#include "femto_reg_timx1.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_timx1_struct.h"
#endif


#include "femto_reg_uart0.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_uart0_struct.h"
#endif


#include "femto_reg_usb_device.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_usb_device_struct.h"
#endif


#include "femto_reg_usb_fifo.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_usb_fifo_struct.h"
#endif


#include "femto_reg_wdt.h"

#ifdef C_MACRO_USE_STRUCT
#include "femto_reg_wdt_struct.h"
#endif


#endif // _FEMTO_REG_H_

