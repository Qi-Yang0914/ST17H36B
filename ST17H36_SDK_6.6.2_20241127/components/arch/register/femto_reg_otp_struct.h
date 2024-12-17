#ifndef _FEMTO_REG_OTP_STRUCT_H_
#define _FEMTO_REG_OTP_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t margin_en:1;
      __IO uint32_t soft_mode:1;
      __IO uint32_t test_mode:4;
      __IO uint32_t progream_mode_en:1;
      __IO uint32_t deep_sleep_mode_en:1;
      __IO uint32_t read_en:1;
      __IO uint32_t power_on:1;
    }mode_setting_fld;
    __IO uint32_t mode_setting;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t tvddh:4;
      __IO uint32_t tpenh:4;
      __IO uint32_t tplh:4;
      __IO uint32_t tash:4;
      __IO uint32_t tsas:4;
      __IO uint32_t tpls:4;
      __IO uint32_t tpens:4;
      __IO uint32_t tvds:4;
    }power_timing_control_fld;
    __IO uint32_t power_timing_control;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t tpwi:3;
      __IO uint32_t tpw:5;
      __IO uint32_t tpps:5;
      __IO uint32_t tcps:7;
      __IO uint32_t tms:4;
    }setting1_fld;
    __IO uint32_t setting1;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t tmh:4;
      __IO uint32_t reserved1:1;
      __IO uint32_t tppr:7;
      __IO uint32_t reserved1:3;
      __IO uint32_t tpph:5;
    }setting2_fld;
    __IO uint32_t setting2;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t tcs:4;
    }test_ctrl_fld;
    __IO uint32_t test_ctrl;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t busy:1;
      __IO uint32_t state:4;
    }state_fld;
    __IO uint32_t state;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t program_number:12;
    }prog_num_fld;
    __IO uint32_t prog_num;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t program_address:12;
    }prog_addr_fld;
    __IO uint32_t prog_addr;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t program_data_in:32;
    }prog_data_fld;
    __IO uint32_t prog_data;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t reserved0:25;
      __IO uint32_t program_load_next_word_interupter:1;
      __IO uint32_t program_down_interupter:1;
      __IO uint32_t program_ready_interupter:1;
      __IO uint32_t deep_sleep_out_interupter:1;
      __IO uint32_t deep_sleep_interupter:1;
      __IO uint32_t power_down_interupter:1;
      __IO uint32_t standby__intrupter:1;
    }int_mask_fld;
    __IO uint32_t int_mask;

  };

  union{ //offset addr 0x0028
    struct{
      __IO uint32_t reserved0:25;
      __IO uint32_t program_load_next_word_interupter:1;
      __IO uint32_t program_down_interupter:1;
      __IO uint32_t program_ready_interupter:1;
      __IO uint32_t deep_sleep_out_interupter:1;
      __IO uint32_t deep_sleep_interupter:1;
      __IO uint32_t power_down_interupter:1;
      __IO uint32_t standby__intrupter:1;
    }int_clr_fld;
    __IO uint32_t int_clr;

  };

  union{ //offset addr 0x002c
    struct{
      __IO uint32_t reserved0:25;
      __IO uint32_t program_load_next_word_interupter:1;
      __IO uint32_t program_down_interupter:1;
      __IO uint32_t program_ready_interupter:1;
      __IO uint32_t deep_sleep_out_interupter:1;
      __IO uint32_t deep_sleep_interupter:1;
      __IO uint32_t power_down_interupter:1;
      __IO uint32_t standby__intrupter:1;
    }int_source_fld;
    __IO uint32_t int_source;

  };

  union{ //offset addr 0x0030
    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t hs_mux:1;
      __IO uint32_t wdt4:1;
      __IO uint32_t wdt3:1;
      __IO uint32_t wdt2:1;
      __IO uint32_t wdt1:1;
    }addr_prog_s_fld;
    __IO uint32_t addr_prog_s;

  };

  union{ //offset addr 0x0034
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t tvpus:4;
      __IO uint32_t reserved1:1;
      __IO uint32_t tpvds:4;
      __IO uint32_t reserved1:1;
      __IO uint32_t tvps:4;
      __IO uint32_t reserved1:1;
      __IO uint32_t tvph:4;
      __IO uint32_t reserved1:1;
      __IO uint32_t tpvdh:4;
      __IO uint32_t reserved:3;
    }addr_prog_3_fld;
    __IO uint32_t addr_prog_3;

  };

  union{ //offset addr 0x0038
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t read_sel:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t ptr_h:1;
      __IO uint32_t pclk_sel_d:1;
      __IO uint32_t otp_sel_err:1;
      __IO uint32_t mux_sel:3;
      __IO uint32_t hclk_sel_d:1;
      __IO uint32_t mux_sel_c:1;
      __IO uint32_t mux_sel_cs:3;
    }addr_prog_m_fld;
    __IO uint32_t addr_prog_m;

  };

  __IO uint32_t rsved0[0x12];

  union{ //offset addr 0x0080

    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t paio:6;
    }PAIO_fld;
    __IO uint32_t PAIO;

  };

  union{ //offset addr 0x0084
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t ptm:4;
    }PTM_fld;
    __IO uint32_t PTM;

  };

  union{ //offset addr 0x0088
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t pwe:1;
    }PWE_fld;
    __IO uint32_t PWE;

  };

  __IO uint32_t rsved1[-0x13];

  union{ //offset addr 0x003c

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t prog:1;
    }PROG_fld;
    __IO uint32_t PROG;

  };

  union{ //offset addr 0x0040
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t pclk_clockgate_en:1;
    }pclk_clockgate_en_fld;
    __IO uint32_t pclk_clockgate_en;

  };

  union{ //offset addr 0x0044
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t pce:1;
    }PCE_fld;
    __IO uint32_t PCE;

  };

  union{ //offset addr 0x0048
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t ptr:1;
    }PTR_fld;
    __IO uint32_t PTR;

  };

  union{ //offset addr 0x004c
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t pdstb:1;
    }PDSTB_fld;
    __IO uint32_t PDSTB;

  };

  union{ //offset addr 0x0050
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t pldo:1;
    }PLDO_fld;
    __IO uint32_t PLDO;

  };

  union{ //offset addr 0x0054
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t penvdd2:1;
    }PLDO2_fld;
    __IO uint32_t PLDO2;

  };

  union{ //offset addr 0x0058
    struct{
      __IO uint32_t reserved0:21;
      __IO uint32_t pa:11;
    }PA_fld;
    __IO uint32_t PA;

  };

  __IO uint32_t rsved2[0x6];

  union{ //offset addr 0x0070

    struct{
      __IO uint32_t prog_protect:32;
    }prog_protect_fld;
    __IO uint32_t prog_protect;

  };

  __IO uint32_t rsved3[0x8];

  union{ //offset addr 0x0090

    struct{
      __IO uint32_t reserved0:21;
      __IO uint32_t set_almost_empty:2;
      __IO uint32_t set_almost_full:2;
      __IO uint32_t fifo_almost_empty:1;
      __IO uint32_t fifo_almost_full:1;
      __IO uint32_t fifo_full:1;
      __IO uint32_t fifo_num:3;
      __IO uint32_t fifo_empty:1;
    }fifo_fld;
    __IO uint32_t fifo;

  };

} FEMTO_REG_OTP_TypeDef;

#define FEMTO_REG_OTP ((FEMTO_REG_OTP_TypeDef *)0x1FFFC000)


#if defined(__CC_ARM)
#pragma pop
#endif

