#ifndef _FEMTO_REG_BB_TOP_STRUCT_H_
#define _FEMTO_REG_BB_TOP_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t rx_sync_thd:8;
      __IO uint32_t blr_acc_err:3;
      __IO uint32_t zb_sfd_err:1;
      __IO uint32_t sync_sch_dly:2;
      __IO uint32_t sync_len:2;
      __IO uint32_t rx_iq_fsel:8;
      __IO uint32_t reserved0:2;
      __IO uint32_t rx_32m_clk_gate:1;
      __IO uint32_t tx_32m_clk_gate:1;
      __IO uint32_t clk32m_rise:1;
      __IO uint32_t pkt_fmt:3;
    }i_dig_bb_ctrl0_fld;
    __IO uint32_t i_dig_bb_ctrl0;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t sync_rssi_thd:8;
      __IO uint32_t rx_sync_thd_hi:8;
      __IO uint32_t reserved0:1;
      __IO uint32_t diff_demod_thd:7;
      __IO uint32_t tr_dc_sft:4;
      __IO uint32_t tr_tedm_sft:4;
    }i_dig_bb_ctrl1_fld;
    __IO uint32_t i_dig_bb_ctrl1;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t ahdfe_ki_cr:8;
      __IO uint32_t ahdfe_kp_cr:8;
      __IO uint32_t reserved0:7;
      __IO uint32_t ahdfe_en:1;
      __IO uint32_t ahdfe_hidx1:4;
      __IO uint32_t ahdfe_hidx0:4;
    }i_dig_bb_ctrl2_fld;
    __IO uint32_t i_dig_bb_ctrl2;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t rx_time_out:16;
      __IO uint32_t rx_supp_samp:8;
      __IO uint32_t rx_max_packet_len:8;
    }i_dig_bb_ctrl3_fld;
    __IO uint32_t i_dig_bb_ctrl3;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t dc_compq_flt3:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t dc_compi_flt3:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t dc_compq_flt4:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t dc_compi_flt4:6;
    }i_dig_bb_ctrl4_fld;
    __IO uint32_t i_dig_bb_ctrl4;

  };

  __IO uint32_t rsved0[0xc];

  union{ //offset addr 0x0040

    struct{
      __IO uint32_t tx_supp_tail:8;
      __IO uint32_t reserved0:4;
      __IO uint32_t tx_iq_fsel:4;
      __IO uint32_t tx_pld_nbyte:8;
      __IO uint32_t tx_pre_len_ext:3;
      __IO uint32_t tx_mode_sel:1;
      __IO uint32_t tx_pldt:4;
    }i_dig_bb_ctrl16_fld;
    __IO uint32_t i_dig_bb_ctrl16;

  };

  union{ //offset addr 0x0044
    struct{
      __IO uint32_t tx_prbs_seed:32;
    }i_dig_bb_ctrl17_fld;
    __IO uint32_t i_dig_bb_ctrl17;

  };

  union{ //offset addr 0x0048
    struct{
      __IO uint32_t reserved0:1;
      __IO uint32_t tx_wt_seed:7;
      __IO uint32_t tx_crc_24:24;
    }i_dig_bb_ctrl18_fld;
    __IO uint32_t i_dig_bb_ctrl18;

  };

  union{ //offset addr 0x004c
    struct{
      __IO uint32_t tx_ble_acc_adr:32;
    }i_dig_bb_ctrl19_fld;
    __IO uint32_t i_dig_bb_ctrl19;

  };

  union{ //offset addr 0x0050
    struct{
      __IO uint32_t rssi_offset:8;
      __IO uint32_t agc_time_out:4;
      __IO uint32_t agc_settle:4;
      __IO uint32_t rx_pwr_t:4;
      __IO uint32_t rx_abs_t:4;
      __IO uint32_t agc_en:1;
      __IO uint32_t reserved0:2;
      __IO uint32_t agc_fix_gain:1;
      __IO uint32_t agc_gain:4;
    }i_dig_bb_ctrl20_fld;
    __IO uint32_t i_dig_bb_ctrl20;

  };

  union{ //offset addr 0x0054
    struct{
      __IO uint32_t agc_tab_gset3:8;
      __IO uint32_t agc_tab_gset2:8;
      __IO uint32_t agc_tab_gset1:8;
      __IO uint32_t agc_tab_gset0:8;
    }i_dig_bb_ctrl21_fld;
    __IO uint32_t i_dig_bb_ctrl21;

  };

  union{ //offset addr 0x0058
    struct{
      __IO uint32_t agc_tab_gset7:8;
      __IO uint32_t agc_tab_gset6:8;
      __IO uint32_t agc_tab_gset5:8;
      __IO uint32_t agc_tab_gset4:8;
    }i_dig_bb_ctrl22_fld;
    __IO uint32_t i_dig_bb_ctrl22;

  };

  union{ //offset addr 0x005c
    struct{
      __IO uint32_t agc_tab_dto2:8;
      __IO uint32_t agc_tab_dto1:8;
      __IO uint32_t agc_tab_dto0:8;
      __IO uint32_t agc_tab_gset8:8;
    }i_dig_bb_ctrl23_fld;
    __IO uint32_t i_dig_bb_ctrl23;

  };

  union{ //offset addr 0x0060
    struct{
      __IO uint32_t agc_tab_dto6:8;
      __IO uint32_t agc_tab_dto5:8;
      __IO uint32_t agc_tab_dto4:8;
      __IO uint32_t agc_tab_dto3:8;
    }i_dig_bb_ctrl24_fld;
    __IO uint32_t i_dig_bb_ctrl24;

  };

  union{ //offset addr 0x0064
    struct{
      __IO uint32_t agc_tab_ato1:8;
      __IO uint32_t agc_tab_ato0:8;
      __IO uint32_t agc_tab_dto8:8;
      __IO uint32_t agc_tab_dto7:8;
    }i_dig_bb_ctrl25_fld;
    __IO uint32_t i_dig_bb_ctrl25;

  };

  union{ //offset addr 0x0068
    struct{
      __IO uint32_t agc_tab_ato5:8;
      __IO uint32_t agc_tab_ato4:8;
      __IO uint32_t agc_tab_ato3:8;
      __IO uint32_t agc_tab_ato2:8;
    }i_dig_bb_ctrl26_fld;
    __IO uint32_t i_dig_bb_ctrl26;

  };

  union{ //offset addr 0x006c
    struct{
      __IO uint32_t agc_tab_gain0:8;
      __IO uint32_t agc_tab_ato8:8;
      __IO uint32_t agc_tab_ato7:8;
      __IO uint32_t agc_tab_ato6:8;
    }i_dig_bb_ctrl27_fld;
    __IO uint32_t i_dig_bb_ctrl27;

  };

  union{ //offset addr 0x0070
    struct{
      __IO uint32_t agc_tab_gain4:8;
      __IO uint32_t agc_tab_gain3:8;
      __IO uint32_t agc_tab_gain2:8;
      __IO uint32_t agc_tab_gain1:8;
    }i_dig_bb_ctrl28_fld;
    __IO uint32_t i_dig_bb_ctrl28;

  };

  union{ //offset addr 0x0074
    struct{
      __IO uint32_t agc_tab_gain8:8;
      __IO uint32_t agc_tab_gain7:8;
      __IO uint32_t agc_tab_gain6:8;
      __IO uint32_t agc_tab_gain5:8;
    }i_dig_bb_ctrl29_fld;
    __IO uint32_t i_dig_bb_ctrl29;

  };

  union{ //offset addr 0x0078
    struct{
      __IO uint32_t dcoc_flt_phy:10;
      __IO uint32_t dcoc_amp_step:4;
      __IO uint32_t dcoc_amp_ini:6;
      __IO uint32_t dcoc_resdc_thd:4;
      __IO uint32_t dcoc_phy_thd:6;
      __IO uint32_t dcoc_cal_mod:1;
      __IO uint32_t dcoc_en:1;
    }i_dig_bb_ctrl30_fld;
    __IO uint32_t i_dig_bb_ctrl30;

  };

  union{ //offset addr 0x007c
    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t dcoc_phy2:10;
      __IO uint32_t dcoc_phy1:10;
      __IO uint32_t dcoc_phy0:10;
    }i_dig_bb_ctrl31_fld;
    __IO uint32_t i_dig_bb_ctrl31;

  };

  union{ //offset addr 0x0080
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t ld_en:1;
      __IO uint32_t ld_time:2;
      __IO uint32_t len_slot_fr_spir:2;
      __IO uint32_t len_ct_fr_spir:3;
      __IO uint32_t len_fc_fr_spir:3;
      __IO uint32_t len_rst_fr_spir:3;
      __IO uint32_t clk_flag_fr_spir:1;
    }i_dig_bb_ctrl32_fld;
    __IO uint32_t i_dig_bb_ctrl32;

  };

  union{ //offset addr 0x0084
    struct{
      __IO uint32_t ct_override_fr_spir:1;
      __IO uint32_t reserved0:22;
      __IO uint32_t ct_word_fr_spir:9;
    }i_dig_bb_ctrl33_fld;
    __IO uint32_t i_dig_bb_ctrl33;

  };

  union{ //offset addr 0x0088
    struct{
      __IO uint32_t targ_cnt_override:1;
      __IO uint32_t reserved0:11;
      __IO uint32_t targ_cnt_fr_spir:20;
    }i_dig_bb_ctrl34_fld;
    __IO uint32_t i_dig_bb_ctrl34;

  };

  union{ //offset addr 0x008c
    struct{
      __IO uint32_t reserved0:7;
      __IO uint32_t cnt_manual_en:1;
      __IO uint32_t clk_edge_polarity:1;
      __IO uint32_t tp_cal_en_fr_spir:1;
      __IO uint32_t delta_ftx_fr_spir:1;
      __IO uint32_t mod_sel_fr_spir:1;
      __IO uint32_t leng_tm1_fr_spir:2;
      __IO uint32_t leng_tm0_fr_spir:2;
      __IO uint32_t reserved1:1;
      __IO uint32_t kdac_fi_fr_spir:7;
      __IO uint32_t reserved1:1;
      __IO uint32_t kdac_co_fr_spir:7;
    }i_dig_bb_ctrl35_fld;
    __IO uint32_t i_dig_bb_ctrl35;

  };

  union{ //offset addr 0x0090
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t reg_dc_fr_spir:20;
    }i_dig_bb_ctrl36_fld;
    __IO uint32_t i_dig_bb_ctrl36;

  };

  union{ //offset addr 0x0094
    struct{
      __IO uint32_t reserved0:15;
      __IO uint32_t tp_cal_override:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t rcal_fr_spir:5;
      __IO uint32_t reserved1:1;
      __IO uint32_t kcal_fr_spir:7;
    }i_dig_bb_ctrl37_fld;
    __IO uint32_t i_dig_bb_ctrl37;

  };

  union{ //offset addr 0x0098
    struct{
      __IO uint32_t reserved0:15;
      __IO uint32_t intg_frac_override:1;
      __IO uint32_t reserved1:7;
      __IO uint32_t intg_fr_spir:9;
    }i_dig_bb_ctrl38_fld;
    __IO uint32_t i_dig_bb_ctrl38;

  };

  union{ //offset addr 0x009c
    struct{
      __IO uint32_t reserved0:7;
      __IO uint32_t dsm_override:1;
      __IO uint32_t frac_fr_spir:24;
    }i_dig_bb_ctrl39_fld;
    __IO uint32_t i_dig_bb_ctrl39;

  };

  union{ //offset addr 0x00a0
    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t pll_test_override:1;
      __IO uint32_t rx_bb_en_override:1;
      __IO uint32_t tx_bb_en_override:1;
      __IO uint32_t rx_en_override:1;
      __IO uint32_t tx_pa_en_override:1;
    }i_dig_bb_ctrl40_fld;
    __IO uint32_t i_dig_bb_ctrl40;

  };

  union{ //offset addr 0x00a4
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t pa_setb_fr_spir:1;
      __IO uint32_t rst_fr_spir:1;
      __IO uint32_t tpm_mod_en_fr_spir:1;
      __IO uint32_t rx_at_ctrl0_fr_spir:1;
      __IO uint32_t tx_at_ctrl0_fr_spir:1;
      __IO uint32_t rx_bb_en_fr_spir:1;
      __IO uint32_t tx_bb_en_fr_spir:1;
      __IO uint32_t rx_en_fr_spir:1;
      __IO uint32_t tx_pa_en_fr_spir:1;
    }i_dig_bb_ctrl41_fld;
    __IO uint32_t i_dig_bb_ctrl41;

  };

  union{ //offset addr 0x00a8
    struct{
      __IO uint32_t reserved0:25;
      __IO uint32_t synth_lo_override:1;
      __IO uint32_t synth_tpm_en_override:1;
      __IO uint32_t synth_vmid_override:1;
      __IO uint32_t synth_bias_en_override:1;
      __IO uint32_t synth_pfd_override:1;
      __IO uint32_t synth_fch_override:1;
      __IO uint32_t synth_ldo_override:1;
    }i_dig_bb_ctrl42_fld;
    __IO uint32_t i_dig_bb_ctrl42;

  };

  union{ //offset addr 0x00ac
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t tpm_dac_reset_fr_spir:1;
      __IO uint32_t ct_en_fr_spir:1;
      __IO uint32_t vmid_en_fr_spir:1;
      __IO uint32_t tpm_en_fr_spir:1;
      __IO uint32_t en_tpm_var_fr_spir:1;
      __IO uint32_t reset_ndiv_fr_spir:1;
      __IO uint32_t pfd_en_fr_spir:1;
      __IO uint32_t fastcharge_vref_vco_fr_spir:1;
      __IO uint32_t fch_vco_vos_fr_spir:1;
      __IO uint32_t fch_vco_pbgen_fr_spir:1;
      __IO uint32_t cp_bias_en_fr_spir:1;
      __IO uint32_t en_vco_bias_fr_spir:1;
      __IO uint32_t en_pll_imir_fr_spir:1;
      __IO uint32_t en_pllbuf_fr_spir:1;
      __IO uint32_t en_lotx_fr_spir:1;
      __IO uint32_t en_lorx_fr_spir:1;
      __IO uint32_t pu_ldo_lo_fr_spir:1;
      __IO uint32_t pu_ldo_pll_fr_spir:1;
      __IO uint32_t pu_ldo_vco_fr_spir:1;
      __IO uint32_t pu_ldo_top_fr_spir:1;
    }i_dig_bb_ctrl43_fld;
    __IO uint32_t i_dig_bb_ctrl43;

  };

  union{ //offset addr 0x00b0
    struct{
      __IO uint32_t tpd_plry_fr_spir:1;
      __IO uint32_t reserved0:4;
      __IO uint32_t pi_dsft_fr_spir:3;
      __IO uint32_t reserved1:6;
      __IO uint32_t intg_dly_fr_spir:2;
      __IO uint32_t reserved1:3;
      __IO uint32_t tx_sdm_dly:5;
      __IO uint32_t reserved1:3;
      __IO uint32_t tx_dac_dly:5;
    }i_dig_bb_ctrl44_fld;
    __IO uint32_t i_dig_bb_ctrl44;

  };

  union{ //offset addr 0x00b4
    struct{
      __IO uint32_t reserved0:7;
      __IO uint32_t if_freq:1;
      __IO uint32_t rx_freq_off:8;
      __IO uint32_t tx_freq_off:8;
      __IO uint32_t rf_chn:8;
    }i_dig_bb_ctrl45_fld;
    __IO uint32_t i_dig_bb_ctrl45;

  };

  union{ //offset addr 0x00b8
    struct{
      __IO uint32_t reserved0:15;
      __IO uint32_t trx_pa_target:5;
      __IO uint32_t tm_pa_settle:4;
      __IO uint32_t reserved1:1;
      __IO uint32_t trx_paramp_speed:3;
      __IO uint32_t reserved1:1;
      __IO uint32_t len_dly_ramp_fr_spir:3;
    }i_dig_bb_ctrl46_fld;
    __IO uint32_t i_dig_bb_ctrl46;

  };

  union{ //offset addr 0x00bc
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t tx_bb_en_dly:8;
      __IO uint32_t reserved1:4;
      __IO uint32_t tm_rxafe_settle:4;
      __IO uint32_t tm_pll_ftune:8;
    }i_dig_bb_ctrl47_fld;
    __IO uint32_t i_dig_bb_ctrl47;

  };

  union{ //offset addr 0x00c0
    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t dc_compq_flt1:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t dc_compi_flt1:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t dc_compq_flt2:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t dc_compi_flt2:6;
    }i_dig_bb_ctrl48_fld;
    __IO uint32_t i_dig_bb_ctrl48;

  };

  union{ //offset addr 0x00c4
    struct{
      __IO uint32_t reserved0:14;
      __IO uint32_t dc_comp_sel:2;
      __IO uint32_t reserved1:2;
      __IO uint32_t dc_compq_flt0:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t dc_compi_flt0:6;
    }i_dig_bb_ctrl49_fld;
    __IO uint32_t i_dig_bb_ctrl49;

  };

  union{ //offset addr 0x00c8
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t agc_gain_override:1;
      __IO uint32_t agc_gain_fr_spir:8;
    }i_dig_bb_ctrl50_fld;
    __IO uint32_t i_dig_bb_ctrl50;

  };

  union{ //offset addr 0x00cc
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t vout_ctrl_ldo_lo:2;
      __IO uint32_t vout_ctrl_ldo_pll:2;
      __IO uint32_t vout_ctrl_ldo_vco:2;
      __IO uint32_t reserved:6;
    }i_pll_ctrl0_fld;
    __IO uint32_t i_pll_ctrl0;

  };

  union{ //offset addr 0x00d0
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t delay_up:3;
      __IO uint32_t delay_dn:3;
      __IO uint32_t reserved1:12;
      __IO uint32_t cp_prog:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t en_pllbuf_ctcnt:1;
    }i_pll_ctrl1_fld;
    __IO uint32_t i_pll_ctrl1;

  };

  union{ //offset addr 0x00d4
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t ib_div2_prog:3;
      __IO uint32_t lpf_rz:3;
      __IO uint32_t ib_tpm_prog:3;
      __IO uint32_t lpf_r2:2;
      __IO uint32_t lpf_r1:2;
      __IO uint32_t lpf_c3:2;
      __IO uint32_t lpf_c2:2;
      __IO uint32_t lpf_c1:2;
      __IO uint32_t ib_vco_prog:4;
      __IO uint32_t reserved:4;
    }i_pll_ctrl2_fld;
    __IO uint32_t i_pll_ctrl2;

  };

  union{ //offset addr 0x00d8
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t vmid_prog:3;
      __IO uint32_t reserved1:3;
      __IO uint32_t vco_var_tpm_prog:3;
      __IO uint32_t vco_var_prog:3;
      __IO uint32_t reserved1:4;
      __IO uint32_t pfd_pol:1;
      __IO uint32_t reserved:10;
    }i_pll_ctrl3_fld;
    __IO uint32_t i_pll_ctrl3;

  };

  union{ //offset addr 0x00dc
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t rx_tia_i_ctrl:1;
      __IO uint32_t tx_buffer_ib_trim:2;
      __IO uint32_t en_rx_test_buffer_1p2v:1;
      __IO uint32_t rx_lna_cap_trim:3;
      __IO uint32_t tia_en:1;
      __IO uint32_t rx_en_dcoc_1p2v:1;
      __IO uint32_t en_rx_test_buffer_1p2v_1:1;
      __IO uint32_t rx_tia_i_ctrl_1:1;
      __IO uint32_t en_pa_1p2v:1;
      __IO uint32_t en_mixer_1p2v:1;
      __IO uint32_t en_lna_1p2v:1;
      __IO uint32_t en_filter_1p2v:1;
      __IO uint32_t en_rx_adc_1p2v:1;
      __IO uint32_t tx_pa_vcm_ctrl:3;
      __IO uint32_t ldo_lna_out_tune_1p2v:2;
      __IO uint32_t ldo_ana_bb_out_tune_1p2v:2;
      __IO uint32_t rx_bb_vcm_ctrl:1;
      __IO uint32_t en_ldo_lna_pa_1p2v:1;
      __IO uint32_t en_ldo_ana_bb_1p2v:1;
    }i_rx_ctrl0_fld;
    __IO uint32_t i_rx_ctrl0;

  };

  union{ //offset addr 0x00e0
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t rccal_discharge_c:1;
      __IO uint32_t rccal_dcoc_en:1;
      __IO uint32_t rccal_comparator_clk:1;
      __IO uint32_t rccal_charge_c:1;
      __IO uint32_t rccal_cap_sw:5;
      __IO uint32_t rx_rccal_en:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t rx_filter_swap_iq_1p2v:1;
      __IO uint32_t rx_filter_bw_sel_1p2v:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t filter_cap_sw_1p2v:4;
      __IO uint32_t reserved1:5;
      __IO uint32_t rx_loop_timeout_en:1;
    }i_rx_ctrl1_fld;
    __IO uint32_t i_rx_ctrl1;

  };

  union{ //offset addr 0x00e4
    struct{
      __IO uint32_t sync_astate_out:8;
      __IO uint32_t ri:2;
      __IO uint32_t reserved0:1;
      __IO uint32_t rx_demod_check:5;
      __IO uint32_t reserved1:6;
      __IO uint32_t freq_est_raw:10;
    }o_dig_bb_ctrl0_fld;
    __IO uint32_t o_dig_bb_ctrl0;

  };

  union{ //offset addr 0x00e8
    struct{
      __IO uint32_t nrssi:8;
      __IO uint32_t arssi:8;
      __IO uint32_t rxabs:8;
      __IO uint32_t rx_demod_check:4;
      __IO uint32_t agc_g_idx:4;
    }o_dig_bb_ctrl1_fld;
    __IO uint32_t o_dig_bb_ctrl1;

  };

  union{ //offset addr 0x00ec
    struct{
      __IO uint32_t sync_word_n:32;
    }o_dig_bb_ctrl2_fld;
    __IO uint32_t o_dig_bb_ctrl2;

  };

  union{ //offset addr 0x00f0
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t rcal_fina:5;
      __IO uint32_t reserved1:1;
      __IO uint32_t kcal_fina:7;
      __IO uint32_t reserved1:7;
      __IO uint32_t ct_word_fina:9;
    }o_dig_bb_ctrl3_fld;
    __IO uint32_t o_dig_bb_ctrl3;

  };

  union{ //offset addr 0x00f4
    struct{
      __IO uint32_t rx_rccal_comparator_out:1;
      __IO uint32_t reserved0:8;
      __IO uint32_t lock_ready:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t actu_cnt_fina:20;
    }o_dig_bb_ctrl4_fld;
    __IO uint32_t o_dig_bb_ctrl4;

  };

  __IO uint32_t rsved1[0x2];

  union{ //offset addr 0x00fc

    struct{
      __IO uint32_t supp_samp_cnt:12;
      __IO uint32_t supp_samp_q:10;
      __IO uint32_t supp_samp_i:10;
    }o_dig_bb_ctrl6_fld;
    __IO uint32_t o_dig_bb_ctrl6;

  };

  __IO uint32_t rsved2[0x2];

  union{ //offset addr 0x0104

    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t delay_up:3;
      __IO uint32_t delay_dn:3;
      __IO uint32_t reserved1:12;
      __IO uint32_t cp_prog:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t en_pllbuf_ctcnt:1;
    }i_pll_ctrl5_fld;
    __IO uint32_t i_pll_ctrl5;

  };

  union{ //offset addr 0x0108
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t ib_div2_prog:3;
      __IO uint32_t lpf_rz:3;
      __IO uint32_t ib_tpm_prog:3;
      __IO uint32_t lpf_r2:2;
      __IO uint32_t lpf_r1:2;
      __IO uint32_t lpf_c3:2;
      __IO uint32_t lpf_c2:2;
      __IO uint32_t lpf_c1:2;
      __IO uint32_t ib_vco_prog:4;
      __IO uint32_t ib_cp_prog:4;
    }i_pll_ctrl6_fld;
    __IO uint32_t i_pll_ctrl6;

  };

  union{ //offset addr 0x010c
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t vmid_prog:3;
      __IO uint32_t reserved1:3;
      __IO uint32_t vco_var_tpm_prog:3;
      __IO uint32_t vco_var_prog:3;
      __IO uint32_t reserved1:4;
      __IO uint32_t pfd_pol:1;
      __IO uint32_t reserved:10;
    }i_pll_ctrl7_fld;
    __IO uint32_t i_pll_ctrl7;

  };

  union{ //offset addr 0x0110
    struct{
      __IO uint32_t reserved0:13;
      __IO uint32_t ant_switch_mode:3;
      __IO uint32_t ant_win:8;
      __IO uint32_t ant_dly:8;
    }i_ant_sel_01_fld;
    __IO uint32_t i_ant_sel_01;

  };

  union{ //offset addr 0x0114
    struct{
      __IO uint32_t ant_sel_arry7:4;
      __IO uint32_t ant_sel_arry6:4;
      __IO uint32_t ant_sel_arry5:4;
      __IO uint32_t ant_sel_arry4:4;
      __IO uint32_t ant_sel_arry3:4;
      __IO uint32_t ant_sel_arry2:4;
      __IO uint32_t ant_sel_arry1:4;
      __IO uint32_t ant_sel_arry0:4;
    }i_ant_sel_02_fld;
    __IO uint32_t i_ant_sel_02;

  };

  union{ //offset addr 0x0118
    struct{
      __IO uint32_t ant_sel_arry15:4;
      __IO uint32_t ant_sel_arry14:4;
      __IO uint32_t ant_sel_arry13:4;
      __IO uint32_t ant_sel_arry12:4;
      __IO uint32_t ant_sel_arry11:4;
      __IO uint32_t ant_sel_arry10:4;
      __IO uint32_t ant_sel_arry9:4;
      __IO uint32_t ant_sel_arry8:4;
    }i_ant_sel_03_fld;
    __IO uint32_t i_ant_sel_03;

  };

  union{ //offset addr 0x011c
    struct{
      __IO uint32_t reserved0:10;
      __IO uint32_t limt_num:6;
      __IO uint32_t reserved1:3;
      __IO uint32_t limt_thd_high:5;
      __IO uint32_t reserved1:3;
      __IO uint32_t limt_thd_low:5;
    }i_dig_bb_ctrl51_fld;
    __IO uint32_t i_dig_bb_ctrl51;

  };

  union{ //offset addr 0x0120
    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t spreadflag:1;
      __IO uint32_t low_rate_config:4;
      __IO uint32_t reserved1:6;
      __IO uint32_t iq2f_lmt_sft:2;
      __IO uint32_t iq2f_lmt:8;
    }i_dig_bb_ctrl52_fld;
    __IO uint32_t i_dig_bb_ctrl52;

  };

  union{ //offset addr 0x0124
    struct{
      __IO uint32_t reserved0:21;
      __IO uint32_t rx_crc_fmt:3;
      __IO uint32_t reserved1:5;
      __IO uint32_t tx_crc_fmt:3;
    }i_dig_bb_ctrl53_fld;
    __IO uint32_t i_dig_bb_ctrl53;

  };

  __IO uint32_t rsved3[0x3];

  union{ //offset addr 0x0130

    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t intg_32m_base:9;
    }i_dig_bb_ctrl56_fld;
    __IO uint32_t i_dig_bb_ctrl56;

  };

  union{ //offset addr 0x0134
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t intg_16m_base:9;
    }i_dig_bb_ctrl57_fld;
    __IO uint32_t i_dig_bb_ctrl57;

  };

  __IO uint32_t rsved4[0xb];

  union{ //offset addr 0x0160

    struct{
      __IO uint32_t match_en_0:1;
      __IO uint32_t reserved0:7;
      __IO uint32_t pdu_off_0_match_offset:8;
      __IO uint32_t val_mask_0:8;
      __IO uint32_t val_target_0:8;
    }pdu_match_config_0_0_fld;
    __IO uint32_t pdu_match_config_0_0;

  };

  union{ //offset addr 0x0164
    struct{
      __IO uint32_t match_en_1:1;
      __IO uint32_t reserved0:7;
      __IO uint32_t pdu_off_1_match_offset:8;
      __IO uint32_t val_mask_1:8;
      __IO uint32_t val_target_1:8;
    }pdu_match_config_1_0_fld;
    __IO uint32_t pdu_match_config_1_0;

  };

  __IO uint32_t rsved5[0x3];

  union{ //offset addr 0x0170

    struct{
      __IO uint32_t list_0_en:1;
      __IO uint32_t reserved0:5;
      __IO uint32_t addr_type_0:2;
      __IO uint32_t addr_off_0_match_offset:8;
      __IO uint32_t addr_list0_match_mask:16;
    }addr_match_config_0_0_fld;
    __IO uint32_t addr_match_config_0_0;

  };

  union{ //offset addr 0x0174
    struct{
      __IO uint32_t list_1_en:1;
      __IO uint32_t reserved0:5;
      __IO uint32_t addr_type_1:2;
      __IO uint32_t addr_off_1_match_offset:8;
      __IO uint32_t addr_list1_match_mask:16;
    }addr_match_config_1_0_fld;
    __IO uint32_t addr_match_config_1_0;

  };

  __IO uint32_t rsved6[0x3];

  union{ //offset addr 0x0180

    struct{
      __IO uint32_t addr_list1_match_result:16;
      __IO uint32_t addr_list0_match_result:16;
    }addr_match_result_0_fld;
    __IO uint32_t addr_match_result_0;

  };

  union{ //offset addr 0x0184
    struct{
      __IO uint32_t addr_lit0_0_0:32;
    }addr_lit0_0_fld;
    __IO uint32_t addr_lit0_0;

  };

  union{ //offset addr 0x0188
    struct{
      __IO uint32_t addr_lit0_0_1:32;
    }addr_lit0_0_1_fld;
    __IO uint32_t addr_lit0_0_1;

  };

  union{ //offset addr 0x018c
    struct{
      __IO uint32_t addr_lit0_1_0:32;
    }addr_lit0_1_fld;
    __IO uint32_t addr_lit0_1;

  };

  union{ //offset addr 0x0190
    struct{
      __IO uint32_t addr_lit0_1_1:32;
    }addr_lit0_1_1_fld;
    __IO uint32_t addr_lit0_1_1;

  };

  union{ //offset addr 0x0194
    struct{
      __IO uint32_t addr_lit0_2_0:32;
    }addr_lit0_2_fld;
    __IO uint32_t addr_lit0_2;

  };

  union{ //offset addr 0x0198
    struct{
      __IO uint32_t addr_lit0_2_1:32;
    }addr_lit0_2_1_fld;
    __IO uint32_t addr_lit0_2_1;

  };

  union{ //offset addr 0x019c
    struct{
      __IO uint32_t addr_lit0_3_0:32;
    }addr_lit0_3_fld;
    __IO uint32_t addr_lit0_3;

  };

  union{ //offset addr 0x01a0
    struct{
      __IO uint32_t addr_lit0_3_1:32;
    }addr_lit0_3_1_fld;
    __IO uint32_t addr_lit0_3_1;

  };

  union{ //offset addr 0x01a4
    struct{
      __IO uint32_t addr_lit0_4_0:32;
    }addr_lit0_4_fld;
    __IO uint32_t addr_lit0_4;

  };

  union{ //offset addr 0x01a8
    struct{
      __IO uint32_t addr_lit0_4_1:32;
    }addr_lit0_4_1_fld;
    __IO uint32_t addr_lit0_4_1;

  };

  union{ //offset addr 0x01ac
    struct{
      __IO uint32_t addr_lit0_5_0:32;
    }addr_lit0_5_fld;
    __IO uint32_t addr_lit0_5;

  };

  union{ //offset addr 0x01b0
    struct{
      __IO uint32_t addr_lit0_5_1:32;
    }addr_lit0_5_1_fld;
    __IO uint32_t addr_lit0_5_1;

  };

  union{ //offset addr 0x01b4
    struct{
      __IO uint32_t addr_lit0_6_0:32;
    }addr_lit0_6_fld;
    __IO uint32_t addr_lit0_6;

  };

  union{ //offset addr 0x01b8
    struct{
      __IO uint32_t addr_lit0_6_1:32;
    }addr_lit0_6_1_fld;
    __IO uint32_t addr_lit0_6_1;

  };

  union{ //offset addr 0x01bc
    struct{
      __IO uint32_t addr_lit0_7_0:32;
    }addr_lit0_7_fld;
    __IO uint32_t addr_lit0_7;

  };

  union{ //offset addr 0x01c0
    struct{
      __IO uint32_t addr_lit0_7_1:32;
    }addr_lit0_7_1_fld;
    __IO uint32_t addr_lit0_7_1;

  };

  union{ //offset addr 0x01c4
    struct{
      __IO uint32_t addr_lit0_8_0:32;
    }addr_lit0_8_fld;
    __IO uint32_t addr_lit0_8;

  };

  union{ //offset addr 0x01c8
    struct{
      __IO uint32_t addr_lit0_8_1:32;
    }addr_lit0_8_1_fld;
    __IO uint32_t addr_lit0_8_1;

  };

  union{ //offset addr 0x01cc
    struct{
      __IO uint32_t addr_lit0_9_0:32;
    }addr_lit0_9_fld;
    __IO uint32_t addr_lit0_9;

  };

  union{ //offset addr 0x01d0
    struct{
      __IO uint32_t addr_lit0_9_1:32;
    }addr_lit0_9_1_fld;
    __IO uint32_t addr_lit0_9_1;

  };

  union{ //offset addr 0x01d4
    struct{
      __IO uint32_t addr_lit0_10_0:32;
    }addr_lit0_10_fld;
    __IO uint32_t addr_lit0_10;

  };

  union{ //offset addr 0x01d8
    struct{
      __IO uint32_t addr_lit0_10_1:32;
    }addr_lit0_10_1_fld;
    __IO uint32_t addr_lit0_10_1;

  };

  union{ //offset addr 0x01dc
    struct{
      __IO uint32_t addr_lit0_11_0:32;
    }addr_lit0_11_fld;
    __IO uint32_t addr_lit0_11;

  };

  union{ //offset addr 0x01e0
    struct{
      __IO uint32_t addr_lit0_11_1:32;
    }addr_lit0_11_1_fld;
    __IO uint32_t addr_lit0_11_1;

  };

  union{ //offset addr 0x01e4
    struct{
      __IO uint32_t addr_lit0_12_0:32;
    }addr_lit0_12_fld;
    __IO uint32_t addr_lit0_12;

  };

  union{ //offset addr 0x01e8
    struct{
      __IO uint32_t addr_lit0_12_1:32;
    }addr_lit0_12_1_fld;
    __IO uint32_t addr_lit0_12_1;

  };

  union{ //offset addr 0x01ec
    struct{
      __IO uint32_t addr_lit0_13_0:32;
    }addr_lit0_13_fld;
    __IO uint32_t addr_lit0_13;

  };

  union{ //offset addr 0x01f0
    struct{
      __IO uint32_t addr_lit0_13_1:32;
    }addr_lit0_13_1_fld;
    __IO uint32_t addr_lit0_13_1;

  };

  union{ //offset addr 0x01f4
    struct{
      __IO uint32_t addr_lit0_14_0:32;
    }addr_lit0_14_fld;
    __IO uint32_t addr_lit0_14;

  };

  union{ //offset addr 0x01f8
    struct{
      __IO uint32_t addr_lit0_14_1:32;
    }addr_lit0_14_1_fld;
    __IO uint32_t addr_lit0_14_1;

  };

  union{ //offset addr 0x01fc
    struct{
      __IO uint32_t addr_lit0_15_0:32;
    }addr_lit0_15_fld;
    __IO uint32_t addr_lit0_15;

  };

  union{ //offset addr 0x0200
    struct{
      __IO uint32_t addr_lit0_15_1:32;
    }addr_lit0_15_1_fld;
    __IO uint32_t addr_lit0_15_1;

  };

  union{ //offset addr 0x0204
    struct{
      __IO uint32_t addr_lit1_0_0:32;
    }addr_lit1_0_fld;
    __IO uint32_t addr_lit1_0;

  };

  union{ //offset addr 0x0208
    struct{
      __IO uint32_t addr_lit1_0_1:32;
    }addr_lit1_0_1_fld;
    __IO uint32_t addr_lit1_0_1;

  };

  union{ //offset addr 0x020c
    struct{
      __IO uint32_t addr_lit1_1_0:32;
    }addr_lit1_1_fld;
    __IO uint32_t addr_lit1_1;

  };

  union{ //offset addr 0x0210
    struct{
      __IO uint32_t addr_lit1_1_1:32;
    }addr_lit1_1_1_fld;
    __IO uint32_t addr_lit1_1_1;

  };

  union{ //offset addr 0x0214
    struct{
      __IO uint32_t addr_lit1_2_0:32;
    }addr_lit1_2_fld;
    __IO uint32_t addr_lit1_2;

  };

  union{ //offset addr 0x0218
    struct{
      __IO uint32_t addr_lit1_2_1:32;
    }addr_lit1_2_1_fld;
    __IO uint32_t addr_lit1_2_1;

  };

  union{ //offset addr 0x021c
    struct{
      __IO uint32_t addr_lit1_3_0:32;
    }addr_lit1_3_fld;
    __IO uint32_t addr_lit1_3;

  };

  union{ //offset addr 0x0220
    struct{
      __IO uint32_t addr_lit1_3_1:32;
    }addr_lit1_3_1_fld;
    __IO uint32_t addr_lit1_3_1;

  };

  union{ //offset addr 0x0224
    struct{
      __IO uint32_t addr_lit1_4_0:32;
    }addr_lit1_4_fld;
    __IO uint32_t addr_lit1_4;

  };

  union{ //offset addr 0x0228
    struct{
      __IO uint32_t addr_lit1_4_1:32;
    }addr_lit1_4_1_fld;
    __IO uint32_t addr_lit1_4_1;

  };

  union{ //offset addr 0x022c
    struct{
      __IO uint32_t addr_lit1_5_0:32;
    }addr_lit1_5_fld;
    __IO uint32_t addr_lit1_5;

  };

  union{ //offset addr 0x0230
    struct{
      __IO uint32_t addr_lit1_5_1:32;
    }addr_lit1_5_1_fld;
    __IO uint32_t addr_lit1_5_1;

  };

  union{ //offset addr 0x0234
    struct{
      __IO uint32_t addr_lit1_6_0:32;
    }addr_lit1_6_fld;
    __IO uint32_t addr_lit1_6;

  };

  union{ //offset addr 0x0238
    struct{
      __IO uint32_t addr_lit1_6_1:32;
    }addr_lit1_6_1_fld;
    __IO uint32_t addr_lit1_6_1;

  };

  union{ //offset addr 0x023c
    struct{
      __IO uint32_t addr_lit1_7_0:32;
    }addr_lit1_7_fld;
    __IO uint32_t addr_lit1_7;

  };

  union{ //offset addr 0x0240
    struct{
      __IO uint32_t addr_lit1_7_1:32;
    }addr_lit1_7_1_fld;
    __IO uint32_t addr_lit1_7_1;

  };

  union{ //offset addr 0x0244
    struct{
      __IO uint32_t addr_lit1_8_0:32;
    }addr_lit1_8_fld;
    __IO uint32_t addr_lit1_8;

  };

  union{ //offset addr 0x0248
    struct{
      __IO uint32_t addr_lit1_8_1:32;
    }addr_lit1_8_1_fld;
    __IO uint32_t addr_lit1_8_1;

  };

  union{ //offset addr 0x024c
    struct{
      __IO uint32_t addr_lit1_9_0:32;
    }addr_lit1_9_fld;
    __IO uint32_t addr_lit1_9;

  };

  union{ //offset addr 0x0250
    struct{
      __IO uint32_t addr_lit1_9_1:32;
    }addr_lit1_9_1_fld;
    __IO uint32_t addr_lit1_9_1;

  };

  union{ //offset addr 0x0254
    struct{
      __IO uint32_t addr_lit1_10_0:32;
    }addr_lit1_10_fld;
    __IO uint32_t addr_lit1_10;

  };

  union{ //offset addr 0x0258
    struct{
      __IO uint32_t addr_lit1_10_1:32;
    }addr_lit1_10_1_fld;
    __IO uint32_t addr_lit1_10_1;

  };

  union{ //offset addr 0x025c
    struct{
      __IO uint32_t addr_lit1_11_0:32;
    }addr_lit1_11_fld;
    __IO uint32_t addr_lit1_11;

  };

  union{ //offset addr 0x0260
    struct{
      __IO uint32_t addr_lit1_11_1:32;
    }addr_lit1_11_1_fld;
    __IO uint32_t addr_lit1_11_1;

  };

  union{ //offset addr 0x0264
    struct{
      __IO uint32_t addr_lit1_12_0:32;
    }addr_lit1_12_fld;
    __IO uint32_t addr_lit1_12;

  };

  union{ //offset addr 0x0268
    struct{
      __IO uint32_t addr_lit1_12_1:32;
    }addr_lit1_12_1_fld;
    __IO uint32_t addr_lit1_12_1;

  };

  union{ //offset addr 0x026c
    struct{
      __IO uint32_t addr_lit1_13_0:32;
    }addr_lit1_13_fld;
    __IO uint32_t addr_lit1_13;

  };

  union{ //offset addr 0x0270
    struct{
      __IO uint32_t addr_lit1_13_1:32;
    }addr_lit1_13_1_fld;
    __IO uint32_t addr_lit1_13_1;

  };

  union{ //offset addr 0x0274
    struct{
      __IO uint32_t addr_lit1_14_0:32;
    }addr_lit1_14_fld;
    __IO uint32_t addr_lit1_14;

  };

  union{ //offset addr 0x0278
    struct{
      __IO uint32_t addr_lit1_14_1:32;
    }addr_lit1_14_1_fld;
    __IO uint32_t addr_lit1_14_1;

  };

  union{ //offset addr 0x027c
    struct{
      __IO uint32_t addr_lit1_15_0:32;
    }addr_lit1_15_fld;
    __IO uint32_t addr_lit1_15;

  };

  union{ //offset addr 0x0280
    struct{
      __IO uint32_t addr_lit1_15_1:32;
    }addr_lit1_15_1_fld;
    __IO uint32_t addr_lit1_15_1;

  };

} FEMTO_REG_BB_TOP_TypeDef;

#define FEMTO_REG_BB_TOP ((FEMTO_REG_BB_TOP_TypeDef *)0x40030000)


#if defined(__CC_ARM)
#pragma pop
#endif

