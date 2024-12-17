#ifndef _FEMTO_REG_COM_STRUCT_H_
#define _FEMTO_REG_COM_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t ch0_ap_mbox:32;
    }com_reg0_fld;
    __IO uint32_t com_reg0;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t ch0_cp_mbox:32;
    }com_reg1_fld;
    __IO uint32_t com_reg1;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t ch1_ap_mbox:32;
    }com_reg2_fld;
    __IO uint32_t com_reg2;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t ch1_cp_mbox:32;
    }com_reg3_fld;
    __IO uint32_t com_reg3;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t ap_status:4;
    }com_reg4_fld;
    __IO uint32_t com_reg4;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t cp_status:4;
    }com_reg5_fld;
    __IO uint32_t com_reg5;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t ap_inten:4;
    }com_reg6_fld;
    __IO uint32_t com_reg6;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t cp_inten:4;
    }com_reg7_fld;
    __IO uint32_t com_reg7;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t remap:2;
    }clk_div_fld;
    __IO uint32_t clk_div;

  };

  __IO uint32_t rsved0[0x3];

  union{ //offset addr 0x002c

    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t flash_errint_clr:1;
      __IO uint32_t flash_cmderr_int:1;
      __IO uint32_t flash_cs_prot:1;
    }com_reg11_fld;
    __IO uint32_t com_reg11;

  };

  union{ //offset addr 0x0030
    struct{
      __IO uint32_t new_add_reg_0:32;
    }new_add_reg0_fld;
    __IO uint32_t new_add_reg0;

  };

  union{ //offset addr 0x0034
    struct{
      __IO uint32_t new_add_reg_1_1:32;
    }new_add_reg1_fld;
    __IO uint32_t new_add_reg1;

  };

  union{ //offset addr 0x0038
    struct{
      __IO uint32_t new_add_reg_2:32;
    }new_add_reg2_fld;
    __IO uint32_t new_add_reg2;

  };

  union{ //offset addr 0x003c
    struct{
      __IO uint32_t new_add_reg_3:32;
    }new_add_reg3_fld;
    __IO uint32_t new_add_reg3;

  };

  union{ //offset addr 0x0040
    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t spi_three:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t spi_dual:1;
    }spi_function_fld;
    __IO uint32_t spi_function;

  };

  union{ //offset addr 0x0044
    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t spi_data:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t spi_ss_in_com:1;
    }spi_function_1_fld;
    __IO uint32_t spi_function_1;

  };

  union{ //offset addr 0x0048
    struct{
      __IO uint32_t otgtop_speed:1;
      __IO uint32_t otgtop_suspend:1;
      __IO uint32_t otgtop_txse0:1;
      __IO uint32_t reserved0:10;
      __IO uint32_t xver_prt_ovrcurr_i:1;
      __IO uint32_t xver_sessvld_i:1;
      __IO uint32_t xver_vbusvld_i:1;
      __IO uint32_t xver_idstatus_i:1;
      __IO uint32_t clk_48m_en:1;
      __IO uint32_t resume:1;
      __IO uint32_t dm_o:1;
      __IO uint32_t dp_o:1;
      __IO uint32_t dm_i:1;
      __IO uint32_t dp_i:1;
      __IO uint32_t dm_oe:1;
      __IO uint32_t dp_oe:1;
      __IO uint32_t dm_force_o_en:1;
      __IO uint32_t dp_force_o_en:1;
      __IO uint32_t dm_force_i_en:1;
      __IO uint32_t dp_force_i_en:1;
      __IO uint32_t dm_force_oe_en:1;
      __IO uint32_t dp_force_oe_en:1;
      __IO uint32_t dp_24m_out:1;
    }USB_function_fld;
    __IO uint32_t USB_function;

  };

  union{ //offset addr 0x004c
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t n205_dbg_stop_on_reset:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t n205_override_dm_sleep:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t n205_dbg_stop_boot:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t n205_dbg_stop:1;
      __IO uint32_t reserved:2;
    }N205_FUNCTION_fld;
    __IO uint32_t N205_FUNCTION;

  };

  union{ //offset addr 0x0050
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t n205_hart_id:10;
    }N205_FUNCTION1_fld;
    __IO uint32_t N205_FUNCTION1;

  };

  union{ //offset addr 0x0054
    struct{
      __IO uint32_t n205_reset_vector:32;
    }N205_FUNCTION2_fld;
    __IO uint32_t N205_FUNCTION2;

  };

  union{ //offset addr 0x0058
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t spi_mark:1;
    }SPI_MARK_fld;
    __IO uint32_t SPI_MARK;

  };

  union{ //offset addr 0x005c
    struct{
      __IO uint32_t new_add_reg_4:32;
    }new_add_reg4_fld;
    __IO uint32_t new_add_reg4;

  };

} FEMTO_REG_COM_TypeDef;

#define FEMTO_REG_COM ((FEMTO_REG_COM_TypeDef *)0x40003000)


#if defined(__CC_ARM)
#pragma pop
#endif

