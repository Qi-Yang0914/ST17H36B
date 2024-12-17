#ifndef _FEMTO_REG_EFUSE_STRUCT_H_
#define _FEMTO_REG_EFUSE_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t pgm_bit_state:1;
      __IO uint32_t reserved1:4;
      __IO uint32_t pgm_word_state:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t read_word_state:4;
      __IO uint32_t reserved1:3;
      __IO uint32_t pgm_error:1;
    }efuse_int_state_fld;
    __IO uint32_t efuse_int_state;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:15;
      __IO uint32_t int_clear:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t pgm_bit_state_msk:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t pgm_word_state_msk:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t read_word_state_msk:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t pgm_error_msk:1;
    }efuse_int_mask_fld;
    __IO uint32_t efuse_int_mask;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t efuse_pgm_data:32;
    }efuse_pgm_data_fld;
    __IO uint32_t efuse_pgm_data;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t wordmode:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t efuse_addr:7;
    }efuse_addr_fld;
    __IO uint32_t efuse_addr;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t efuse_data_number:2;
    }efuse_data_number_fld;
    __IO uint32_t efuse_data_number;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t efuse_read_en:1;
    }efuse_read_en_fld;
    __IO uint32_t efuse_read_en;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t efuse_pgm_en:1;
    }efuse_pgm_en_fld;
    __IO uint32_t efuse_pgm_en;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t efuse_pgm_req:16;
    }efuse_pgm_req_fld;
    __IO uint32_t efuse_pgm_req;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t soft_mode:1;
    }mode_choose_fld;
    __IO uint32_t mode_choose;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t security:4;
    }efuse_security_fld;
    __IO uint32_t efuse_security;

  };

  __IO uint32_t rsved0[0xb];

  union{ //offset addr 0x0050

    struct{
      __IO uint32_t efuse_read_data3:32;
    }efuse_read_data3_fld;
    __IO uint32_t efuse_read_data3;

  };

  union{ //offset addr 0x0054
    struct{
      __IO uint32_t efuse_read_data2:32;
    }efuse_read_data2_fld;
    __IO uint32_t efuse_read_data2;

  };

  union{ //offset addr 0x0058
    struct{
      __IO uint32_t efuse_read_data1:32;
    }efuse_read_data1_fld;
    __IO uint32_t efuse_read_data1;

  };

  union{ //offset addr 0x005c
    struct{
      __IO uint32_t efuse_read_data0:32;
    }efuse_read_data0_fld;
    __IO uint32_t efuse_read_data0;

  };

  union{ //offset addr 0x0060
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t tsp_rd:4;
      __IO uint32_t tsp_pg_avdd:8;
      __IO uint32_t tsp_pgm:4;
      __IO uint32_t reserved1:1;
      __IO uint32_t tpgm:7;
    }efuse_pgm_timing0_fld;
    __IO uint32_t efuse_pgm_timing0;

  };

  union{ //offset addr 0x0064
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t thp_pgm:8;
      __IO uint32_t thp_rd:4;
      __IO uint32_t thp_pg_avdd:8;
    }efuse_pgm_timing1_fld;
    __IO uint32_t efuse_pgm_timing1;

  };

  union{ //offset addr 0x0068
    struct{
      __IO uint32_t reserved0:10;
      __IO uint32_t tsq:2;
      __IO uint32_t tsr_dvdd:4;
      __IO uint32_t tsr_rd:4;
      __IO uint32_t trd:4;
      __IO uint32_t thr_rd:4;
      __IO uint32_t thr_dvdd:4;
    }efuse_read_timing_fld;
    __IO uint32_t efuse_read_timing;

  };

  union{ //offset addr 0x006c
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t efuse_dvdd:1;
    }efuse_dvdd_fld;
    __IO uint32_t efuse_dvdd;

  };

  union{ //offset addr 0x0070
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t efuse_avdd:1;
    }efuse_avdd_fld;
    __IO uint32_t efuse_avdd;

  };

  union{ //offset addr 0x0074
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t efuse_pgmen:1;
    }efuse_pgmen_fld;
    __IO uint32_t efuse_pgmen;

  };

  union{ //offset addr 0x0078
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t efuse_rden:1;
    }efuse_rden_fld;
    __IO uint32_t efuse_rden;

  };

  union{ //offset addr 0x007c
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t efuse_aen:1;
    }efuse_aen_fld;
    __IO uint32_t efuse_aen;

  };

} FEMTO_REG_EFUSE_TypeDef;

#define FEMTO_REG_EFUSE ((FEMTO_REG_EFUSE_TypeDef *)0x4000F900)


#if defined(__CC_ARM)
#pragma pop
#endif

