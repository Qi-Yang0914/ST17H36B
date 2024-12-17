#ifndef _FEMTO_REG_NRZ_STRUCT_H_
#define _FEMTO_REG_NRZ_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:10;
      __IO uint32_t data_in_irq_en:1;
      __IO uint32_t nrz_start:1;
      __IO uint32_t tx_bits_count:16;
      __IO uint32_t reserved1:1;
      __IO uint32_t tx_ctrl_endian:1;
      __IO uint32_t frame_ctrl:2;
    }ctrl_fld;
    __IO uint32_t ctrl;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t data_in:32;
    }nrz_data_in_fld;
    __IO uint32_t nrz_data_in;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t carr_t1_cnt:16;
      __IO uint32_t carr_t0_cnt:16;
    }carr_cnt_fld;
    __IO uint32_t carr_cnt;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t prem_t1_cnt:16;
      __IO uint32_t prem_t0_cnt:16;
    }prem_cnt_fld;
    __IO uint32_t prem_cnt;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t code0_t1_cnt:16;
      __IO uint32_t code0_t0_cnt:16;
    }code0_cnt_fld;
    __IO uint32_t code0_cnt;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t code1_t1_cnt:16;
      __IO uint32_t code1_t0_cnt:16;
    }code1_cnt_fld;
    __IO uint32_t code1_cnt;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t code1_cnt_div:3;
      __IO uint32_t code1_mode:2;
      __IO uint32_t reserved1:2;
      __IO uint32_t code0_cnt_div:3;
      __IO uint32_t code0_mode:2;
      __IO uint32_t reserved1:2;
      __IO uint32_t prem_cnt_div:3;
      __IO uint32_t prem_mode:2;
      __IO uint32_t reserved1:2;
      __IO uint32_t carr_cnt_div:3;
      __IO uint32_t carr_mode:2;
    }wave_ctrl_fld;
    __IO uint32_t wave_ctrl;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t tx_current_cnt:16;
    }tx_current_cnt_fld;
    __IO uint32_t tx_current_cnt;

  };

  __IO uint32_t rsved0[0x2];

  union{ //offset addr 0x0024

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t mode_done:1;
    }mode_done_fld;
    __IO uint32_t mode_done;

  };

  union{ //offset addr 0x0028
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t ch_mode:1;
      __IO uint32_t ch_en_sel:8;
    }channel_sel_fld;
    __IO uint32_t channel_sel;

  };

  union{ //offset addr 0x002c
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t data_length_sel_en:2;
    }data_length_sel_en_fld;
    __IO uint32_t data_length_sel_en;

  };

  union{ //offset addr 0x0030
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t data_wave_start_flag:1;
    }data_wave_start_fld;
    __IO uint32_t data_wave_start;

  };

} FEMTO_REG_NRZ_TypeDef;

#define FEMTO_REG_NRZ ((FEMTO_REG_NRZ_TypeDef *)0x40005000)


#if defined(__CC_ARM)
#pragma pop
#endif

