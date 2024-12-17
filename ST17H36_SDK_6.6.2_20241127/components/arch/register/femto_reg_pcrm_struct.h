#ifndef _FEMTO_REG_PCRM_STRUCT_H_
#define _FEMTO_REG_PCRM_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t bbpll_div:1;
      __IO uint32_t reserved1:10;
      __IO uint32_t aon_pclk_inv:1;
      __IO uint32_t lowclk_sel:1;
      __IO uint32_t reserved1:7;
      __IO uint32_t sel_32m:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t clk_1p28m_en:1;
      __IO uint32_t hclk_sel_en_override:1;
      __IO uint32_t hclk_mux_done_override:1;
      __IO uint32_t hclk_sel:4;
    }CLKSEL_fld;
    __IO uint32_t CLKSEL;

  };

  __IO uint32_t rsved0[0x2];

  union{ //offset addr 0x0008

    struct{
      __IO uint32_t reserved0:13;
      __IO uint32_t xtal_clk_dig_en:1;
      __IO uint32_t reserved1:12;
      __IO uint32_t reserved:6;
    }CLKHF_CTL0_fld;
    __IO uint32_t CLKHF_CTL0;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t rxadc_clk_sel:2;
      __IO uint32_t rf_clk_sel:2;
      __IO uint32_t dig_clk_32m_sel:2;
      __IO uint32_t en_rxadc_clk_32m:1;
      __IO uint32_t en_rf_clk:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t en_dig_clk_96m:1;
      __IO uint32_t en_dig_clk_64m:1;
      __IO uint32_t en_dig_clk_48m:1;
      __IO uint32_t en_dig_clk_32m:1;
      __IO uint32_t reserved1:4;
      __IO uint32_t ldo_en:1;
      __IO uint32_t dll_en:1;
      __IO uint32_t dll_ldo_ctrl:2;
      __IO uint32_t dll_ldo_pu:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t bbpll_ldo_vout_ctrl:2;
    }CLKHF_CTL1_fld;
    __IO uint32_t CLKHF_CTL1;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t boot_clk_sel:3;
      __IO uint32_t micbias_vref_fil_en:1;
      __IO uint32_t micbias_en:1;
      __IO uint32_t pga_1st_gain:3;
      __IO uint32_t pga_en:1;
      __IO uint32_t pga_2nd_gain:3;
      __IO uint32_t ia_config:20;
    }analog_ctrl_fld;
    __IO uint32_t analog_ctrl;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t spif_refclk_sel:3;
      __IO uint32_t reserved1:3;
      __IO uint32_t timerx_muxdone:1;
      __IO uint32_t timerx_clk_mux_en:1;
      __IO uint32_t timerx_clk_sel:3;
      __IO uint32_t reserved1:11;
      __IO uint32_t timer_muxdone:1;
      __IO uint32_t timer_clk_mux_en:1;
      __IO uint32_t timer_clk_sel:3;
    }timer_clk_ctl_fld;
    __IO uint32_t timer_clk_ctl;

  };

  __IO uint32_t rsved1[0x3];

  union{ //offset addr 0x0020

    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t rom1_0_dvse:1;
      __IO uint32_t rom1_0_dvs:4;
    }rom_dvs_fld;
    __IO uint32_t rom_dvs;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t ram0_dvse:1;
      __IO uint32_t ram0_dvs:3;
    }RAM_dvs_0_fld;
    __IO uint32_t RAM_dvs_0;

  };

  __IO uint32_t rsved2[0x3];

  union{ //offset addr 0x0030

    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t adcc_ram_dvse:1;
      __IO uint32_t adcc_ram_dvs:4;
      __IO uint32_t reserved1:3;
      __IO uint32_t bb_ram_dvse:1;
      __IO uint32_t bb_ram_dvs:4;
    }ram_dvs2_fld;
    __IO uint32_t ram_dvs2;

  };

  __IO uint32_t rsved3[0x3];

  union{ //offset addr 0x003c

    struct{
      __IO uint32_t reserved0:25;
      __IO uint32_t test_mode:1;
      __IO uint32_t scan_mode:1;
      __IO uint32_t reserved:5;
    }chip_state_fld;
    __IO uint32_t chip_state;

  };

  union{ //offset addr 0x0040
    struct{
      __IO uint32_t reserved0:15;
      __IO uint32_t rc32k_clk_sel:1;
      __IO uint32_t reserved1:7;
      __IO uint32_t num_track_cycle:5;
      __IO uint32_t track_en_rc32k:1;
      __IO uint32_t rccal_en:1;
      __IO uint32_t cal_en_32m:1;
      __IO uint32_t cal_en_32k:1;
    }cal_rw_fld;
    __IO uint32_t cal_rw;

  };

  union{ //offset addr 0x0044
    struct{
      __IO uint32_t reserved0:10;
      __IO uint32_t cal_word_fina_32k:6;
      __IO uint32_t actu_cnt_fina_32m:10;
      __IO uint32_t cal_word_fina_32m:6;
    }cal_ro0_fld;
    __IO uint32_t cal_ro0;

  };

  union{ //offset addr 0x0048
    struct{
      __IO uint32_t actu_cnt_fina_32k:13;
      __IO uint32_t reserved0:2;
      __IO uint32_t cnt_track_16m_fina:17;
    }cal_ro1_fld;
    __IO uint32_t cal_ro1;

  };

  union{ //offset addr 0x004c
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t rc32k_ready:1;
      __IO uint32_t cal_done_32m:1;
      __IO uint32_t reserved:8;
    }cal_ro2_fld;
    __IO uint32_t cal_ro2;

  };

  __IO uint32_t rsved4[0x3];

  union{ //offset addr 0x0058

    struct{
      __IO uint32_t reserved0:25;
      __IO uint32_t dbg_mux_sel:2;
      __IO uint32_t reserved1:2;
      __IO uint32_t usb_ref_clk_sel:3;
    }usb_ref_sel_fld;
    __IO uint32_t usb_ref_sel;

  };

  __IO uint32_t rsved5[0x3];

  union{ //offset addr 0x0064

    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t cnt_final:12;
    }cnt_final_fld;
    __IO uint32_t cnt_final;

  };

  __IO uint32_t rsved6[0xf];

  union{ //offset addr 0x00a0

    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t o_bbpll_ctbit:6;
    }o_bbpll_ctbit_fld;
    __IO uint32_t o_bbpll_ctbit;

  };

  union{ //offset addr 0x00a4
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t bbpll_osc_cnt:10;
    }bbpll_osc_cnt_fld;
    __IO uint32_t bbpll_osc_cnt;

  };

  union{ //offset addr 0x00a8
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t en_xtal_track_fs:1;
      __IO uint32_t reserved1:4;
      __IO uint32_t xtal_track_cnt_target:12;
      __IO uint32_t xtal_track_settle_th:8;
      __IO uint32_t reserved1:2;
      __IO uint32_t en_xtal_track_fs_1p2v:1;
      __IO uint32_t en_xtal_track:1;
    }i_clkhf_ctrl2_fld;
    __IO uint32_t i_clkhf_ctrl2;

  };

  union{ //offset addr 0x00ac
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t dll_track_cnt_target:12;
      __IO uint32_t dll_track_settle_th:8;
      __IO uint32_t reserved1:3;
      __IO uint32_t en_dll_track:1;
    }i_clkhf_ctrl3_fld;
    __IO uint32_t i_clkhf_ctrl3;

  };

  __IO uint32_t rsved7[0x3];

  union{ //offset addr 0x00b8

    struct{
      __IO uint32_t bbpll_div_fb:8;
      __IO uint32_t bbpll_div_out_0:4;
      __IO uint32_t bbpll_div_out_1:4;
      __IO uint32_t bbpll_div_out_2:4;
      __IO uint32_t bbpll_div_out_3:4;
      __IO uint32_t bbpll_div_ref:4;
      __IO uint32_t reserved:4;
    }clkhf_ctrl4_fld;
    __IO uint32_t clkhf_ctrl4;

  };

  union{ //offset addr 0x00bc
    struct{
      __IO uint32_t bbpll_pfd_pol:1;
      __IO uint32_t bbpll_cp:3;
      __IO uint32_t reserved0:1;
      __IO uint32_t bbpll_enb_osc_fixi:1;
      __IO uint32_t bbpll_en_v2i_fixi:2;
      __IO uint32_t bbpll_lpf_r1:2;
      __IO uint32_t bbpll_lpf_r2:2;
      __IO uint32_t reserved1:1;
      __IO uint32_t bbpll_lpf_rz:3;
      __IO uint32_t bbpll_pfd_dly_dn:2;
      __IO uint32_t bbpll_pfd_dly_up:2;
      __IO uint32_t reserved1:1;
      __IO uint32_t bbpll_vco_res_trim:3;
      __IO uint32_t bbpll_override_ct:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t bbpll_cal_word_manual:6;
    }clkhf_ctrl5_fld;
    __IO uint32_t clkhf_ctrl5;

  };

  union{ //offset addr 0x00c0
    struct{
      __IO uint32_t adc12_pu:1;
      __IO uint32_t reserved0:2;
      __IO uint32_t sar12b_auto_sweep_en:1;
      __IO uint32_t reserved1:8;
      __IO uint32_t sar12b_ch_config:12;
      __IO uint32_t reserved1:2;
      __IO uint32_t sar12b_ext_ref_en:1;
      __IO uint32_t sar12b_ref_res_tune:1;
      __IO uint32_t sar12b_ref_sel:4;
    }adc_ctrl_fld;
    __IO uint32_t adc_ctrl;

  };

  union{ //offset addr 0x00c4
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t vbat_det_ctrl:1;
      __IO uint32_t vdd3_det_ctrl:1;
      __IO uint32_t aio_det_ctrl_9:1;
      __IO uint32_t aio_det_ctrl_8:1;
      __IO uint32_t aio_det_ctrl_7:1;
      __IO uint32_t aio_det_ctrl_6:1;
      __IO uint32_t aio_det_ctrl_5:1;
      __IO uint32_t aio_det_ctrl_4:1;
      __IO uint32_t aio_det_ctrl_3:1;
      __IO uint32_t aio_det_ctrl_2:1;
      __IO uint32_t aio_det_ctrl_1:1;
      __IO uint32_t aio_det_ctrl_0:1;
      __IO uint32_t reserved1:4;
      __IO uint32_t reserved1:3;
      __IO uint32_t reserved2:1;
    }i_analog_ctrl1_fld;
    __IO uint32_t i_analog_ctrl1;

  };

  __IO uint32_t rsved8[0xf];

  union{ //offset addr 0x0100

    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t pgm_bit_state:1;
      __IO uint32_t reserved1:4;
      __IO uint32_t pgm_word_state:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t read_word_state_msk:4;
      __IO uint32_t reserved1:3;
      __IO uint32_t pgm_error:1;
    }efuse_sate_fld;
    __IO uint32_t efuse_sate;

  };

  union{ //offset addr 0x0104
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
    }efuse_mask_fld;
    __IO uint32_t efuse_mask;

  };

  union{ //offset addr 0x0108
    struct{
      __IO uint32_t efuse_pgm_data:32;
    }efuse_pgm_data_fld;
    __IO uint32_t efuse_pgm_data;

  };

  union{ //offset addr 0x010c
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t word_mode:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t efuse_addr:7;
    }efuse_addr_fld;
    __IO uint32_t efuse_addr;

  };

  union{ //offset addr 0x0110
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t efuse_data_number:2;
    }efuse_data_number_fld;
    __IO uint32_t efuse_data_number;

  };

  __IO uint32_t rsved9[0x4];

  union{ //offset addr 0x0120

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t soft_mode:1;
    }efuse_soft_mode_fld;
    __IO uint32_t efuse_soft_mode;

  };

  __IO uint32_t rsved10[0x19];

  union{ //offset addr 0x0184

    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t charge_done_dly:1;
      __IO uint32_t charge_on_dly:1;
    }charge_dly_fld;
    __IO uint32_t charge_dly;

  };

  union{ //offset addr 0x0188
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t clk32_div_para:4;
    }clk32_div_para_fld;
    __IO uint32_t clk32_div_para;

  };

} FEMTO_REG_PCRM_TypeDef;

#define FEMTO_REG_PCRM ((FEMTO_REG_PCRM_TypeDef *)0x4000F800)


#if defined(__CC_ARM)
#pragma pop
#endif

