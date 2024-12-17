#ifndef _FEMTO_REG_SPIF_STRUCT_H_
#define _FEMTO_REG_SPIF_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t wfifo_data_rfifo_data:32;
    }WFIFO_DATA_RFIFO_DATA_fld;
    __IO uint32_t WFIFO_DATA_RFIFO_DATA;

  };

  __IO uint32_t rsved0[0x20];

  union{ //offset addr 0x0080

    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t wf_wdepth:8;
    }AHB_WFIFO_DEPTH_fld;
    __IO uint32_t AHB_WFIFO_DEPTH;

  };

  union{ //offset addr 0x0084
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t rf_rdepth:8;
    }AHB_RFIFO_DEPTH_fld;
    __IO uint32_t AHB_RFIFO_DEPTH;

  };

  union{ //offset addr 0x0088
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t rlen_reg:16;
    }AHB_RLEN_fld;
    __IO uint32_t AHB_RLEN;

  };

  union{ //offset addr 0x008c
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t io_mode:2;
      __IO uint32_t dir_addr24_en:1;
      __IO uint32_t spif_en:1;
    }AHB_CTRL_fld;
    __IO uint32_t AHB_CTRL;

  };

  union{ //offset addr 0x0090
    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t idle:1;
      __IO uint32_t status_reg:2;
    }AHB_STATUS_fld;
    __IO uint32_t AHB_STATUS;

  };

  union{ //offset addr 0x0094
    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t inten:3;
    }AHB_INTEN_fld;
    __IO uint32_t AHB_INTEN;

  };

  union{ //offset addr 0x0098
    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t cst:3;
    }AHB_DEBUG_fld;
    __IO uint32_t AHB_DEBUG;

  };

  union{ //offset addr 0x009c
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t clk_mux3:1;
      __IO uint32_t dly_len3:3;
      __IO uint32_t clk_mux2:1;
      __IO uint32_t dly_len2:3;
      __IO uint32_t clk_mux1:1;
      __IO uint32_t dly_len1:3;
      __IO uint32_t dly_mux0:1;
      __IO uint32_t dly_len0:3;
    }SPIF_DLY_fld;
    __IO uint32_t SPIF_DLY;

  };

  union{ //offset addr 0x00a0
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t dma_mask:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t dummy_en:1;
      __IO uint32_t udummy_len_en:1;
      __IO uint32_t udummy_len:4;
    }SPIF_DUMMY_fld;
    __IO uint32_t SPIF_DUMMY;

  };

} FEMTO_REG_SPIF_TypeDef;

#define FEMTO_REG_SPIF ((FEMTO_REG_SPIF_TypeDef *)0x11080000)


#if defined(__CC_ARM)
#pragma pop
#endif

