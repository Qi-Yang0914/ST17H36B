#ifndef _FEMTO_REG_PCR_STRUCT_H_
#define _FEMTO_REG_PCR_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:7;
      __IO uint32_t srst_uart0_n:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t hsrst_spif_n:1;
      __IO uint32_t hsrst_spif_refclk_n:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t srst_adcc_n:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t srst_gpio_n:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t srst_otp_n:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t srst_spi0_n:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t srst_nrz1_n:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t srst_iomux_n:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t srst_aes_n:1;
      __IO uint32_t srst_dma_n:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t srst_sync_n:1;
      __IO uint32_t reserved:1;
    }sw_reset0_fld;
    __IO uint32_t sw_reset0;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t cpu_srst_n_pls:1;
      __IO uint32_t sys_srst_n_pls:1;
    }sw_reset1_fld;
    __IO uint32_t sw_reset1;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t clkg_hclk_sl_en:1;
      __IO uint32_t clkg_hclk_sl:1;
      __IO uint32_t reserved0:5;
      __IO uint32_t clkg_uart0:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t hclkg_spif:1;
      __IO uint32_t hclkg_spif_refclk:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clkg_adcc:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clkg_gpio:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clkg_otp:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clkg_spi0:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clkg_nrz1:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clkg_iomux:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t clkg_aes:1;
      __IO uint32_t clkg_dma:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clkg_sync:1;
      __IO uint32_t reserved:1;
    }sw_clk0_fld;
    __IO uint32_t sw_clk0;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t srst_timerx1_n:1;
      __IO uint32_t srst_timer_n205_n:1;
      __IO uint32_t reserved1:6;
      __IO uint32_t rst_usb_n:1;
      __IO uint32_t hsrst_usb_n:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t srst_bbmix_n:1;
      __IO uint32_t srst_bbrx_n:1;
      __IO uint32_t srst_bbtx_n:1;
      __IO uint32_t srst_bbll_n:1;
      __IO uint32_t srst_bbreg_n:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t srst_com_n:1;
      __IO uint32_t srst_wdt_n:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t srst_bb_n:1;
      __IO uint32_t wdt_reset_en:1;
      __IO uint32_t m0_lockup_reset_en:1;
      __IO uint32_t m0_soft_reset:1;
    }sw_reset2_fld;
    __IO uint32_t sw_reset2;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved:32;
    }sw_reset3_fld;
    __IO uint32_t sw_reset3;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t clkg_timerx1:1;
      __IO uint32_t clkg_timer_n205:1;
      __IO uint32_t clkg_dbg_n205:1;
      __IO uint32_t reserved1:5;
      __IO uint32_t hclkg_usb_48:1;
      __IO uint32_t hclkg_usb:1;
      __IO uint32_t reserved1:5;
      __IO uint32_t clkg_timx1:1;
      __IO uint32_t clkg_bbreg:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t clkg_com:1;
      __IO uint32_t clkg_wdt:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clkg_bb:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t clkg_cpu:1;
    }sw_clk1_fld;
    __IO uint32_t sw_clk1;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t pclk_div_m1:4;
      __IO uint32_t reserved:4;
    }apb_clk_fld;
    __IO uint32_t apb_clk;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t pclk_update:1;
    }apb_clk_update_fld;
    __IO uint32_t apb_clk_update;

  };

  __IO uint32_t rsved0[0x3];

  union{ //offset addr 0x0028

    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t spif_refclk_sel:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t otp_core_pclk_en:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t hsrst_otp_n:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t bypass_ahb_down:1;
      __IO uint32_t reserved:4;
    }s_wr_reg10_fld;
    __IO uint32_t s_wr_reg10;

  };

} FEMTO_REG_PCR_TypeDef;

#define FEMTO_REG_PCR ((FEMTO_REG_PCR_TypeDef *)0x40000000)


#if defined(__CC_ARM)
#pragma pop
#endif

