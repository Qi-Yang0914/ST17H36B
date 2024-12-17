#include "rom_sym_def.h"
#include "jump_function.h"
#include "types.h"
#include "gpio.h"
#include "clock.h"
#include "log.h"
#include "error.h"
#include "nrz.h"
#include "pwrmgr.h"

#define MOD_NRZ MOD_USR3

void __ATTR_FUNC_RAM__(NZR_IRQHandler)(void);
static volatile uint8_t s_nrzWaitingirq=0;
void NZR_IRQHandler(void)
{
    s_nrzWaitingirq=0;
   // gpio_write(P10,1);
    nrz_ctrl_nrz_start_setf(0x0);
   // gpio_write(P10,0);
    dmac_chenreg_set(0x0);      //channel disable
    dmac_dmacfgreg_set(0x100);   //dma disable
}

void hal_nrz_config_set(NRZ_CH_CFG_t ch_cfg)
{
    nrz_data_length_sel_en_set(0x0);
    nrz_ctrl_frame_ctrl_setf(0x00);//no carrier,no frame
    nrz_ctrl_tx_bits_count_setf(ch_cfg.tx_bits_count);
    nrz_carr_cnt_set(ch_cfg.carr_cnt);
    nrz_prem_cnt_set(ch_cfg.prem_cnt);
    nrz_code0_cnt_set(ch_cfg.code0_cnt);
    nrz_code1_cnt_set(ch_cfg.code1_cnt);
    nrz_wave_ctrl_set(ch_cfg.wave_ctrl);
}

int hal_nrz_config_channel(gpio_pin_e pin, gpio_fmux_e type, bool is_multi_mode)
{
    uint8_t ch = 0;

    if(pin > (GPIO_NUM - 1))
        return PPlus_ERR_HAVE_REGISTED;

    if(is_multi_mode == 0)
    {
        nrz_channel_sel_ch_mode_setf(0x1);      //single
        nrz_channel_sel_ch_en_sel_setf(0x1);    //channel 0
        // gpio_fmux_set(cfg.nrz_pin.pin, cfg.nrz_pin.pmux);
        // gpio_fmux_set(cfg.nrz_pin.pin, FMUX_NRZ_DATA0);
        gpio_fmux_set(pin, FMUX_NRZ_DATA0);
    }
    else
    {
        nrz_channel_sel_ch_mode_setf(0x0);

        if(type == FMUX_NRZ_DATA0)
        {
            gpio_fmux_set(pin, type);
            nrz_channel_sel_ch_en_sel_setf(nrz_channel_sel_ch_en_sel_getf() | 0x1);
        }
        else
        {
            ch = pin % 7;
            ch += 1;
            gpio_fmux_set(pin, type);
            nrz_channel_sel_ch_en_sel_setf(nrz_channel_sel_ch_en_sel_getf() | BIT(ch));
        }
    }

    return PPlus_SUCCESS;
}

void hal_nrz_channel_stop(NRZ_CH_t ch)
{
    nrz_channel_sel_ch_en_sel_setf(nrz_channel_sel_ch_en_sel_getf() & ~BIT(ch));
}

void hal_nrz_dma_config(uint32 mem_addr)
{
    pcr_sw_clk0_clkg_dma_setf(1);
    uint32_t Temp;
    //read the channel enable register to chooser a free channel
    Temp = dmac_chenreg_get();  //read ChEnReg dmac 0x3a0
    // LOG("Temp=%#x\n", Temp);
    //clear Tfr, ClearBlock,ClearSrcTran,ClearDstTran and ClearErr
    dmac_cleartfr_set(0xf);
    dmac_clearblock_set(0xf);
    dmac_clearsrctran_set(0xf);
    dmac_cleardsttran_set(0xf);
    dmac_clearerr_set(0xf);
    //=================================================================================
    //channel 0 cfg
    //write the starting source address
    //dmac_sar0_set(MEM_ADDR);                  // starting sourcing addr SARx  x=3

    //remap to xip flash
    if(mem_addr>0x40000)
        mem_addr = 0x11000000|(0x3ffff&mem_addr);

    dmac_sar0_set(mem_addr);                   // starting sourcing addr SARx  x=3
    //write the starting destination address
    dmac_dar0_set(NRZ_DATA_ADDR);                   // starting destination addr DARx  x=3
    dmac_ctl01_set(0);
    dmac_ctl0_set(0);                           // set bit44=0 dis wrt back CTLx  x=3
    //bit28 LLP_SRC_EN=0 bit27 LLP_DST_EN
    //bit26:25 SMS=0 bit24:23 DMS=0
    //bit18 DST_SCATTER_EN=0 bit17 SRC_GATHER_EN=0
    //bit10:9 SINC=incre bit8:7 DINC=incre
    //bit3:1 DST_TR_WIDTH=8
    dmac_ctl01_block_ts_setf(0X1FF);    //(0x18);   //      //bit11:00  channel0  Block Transfer Size. 3*
    dmac_ctl0_dms_setf(0x0);                    //
    dmac_ctl0_tt_fc_setf(0x1);                  //trans_type mem to peri
    dmac_ctl0_src_msize_setf(0x0);              //Burst size = 1
    dmac_ctl0_sinc_setf(0x0);                   //DMA_INC_INC
    dmac_ctl0_src_tr_width_setf(0x2);           //word
    dmac_ctl0_dest_msize_setf(0x0);             //Burst size = 1
    dmac_ctl0_dinc_setf(0x3);                   //DMA_INC_NCHG
    dmac_ctl0_dst_tr_width_setf(0x2);           //word
    dmac_ctl0_int_en_setf(0x0);
    dmac_cfg01_dest_per_setf(0x0);              //dma_tx_req spi0
    dmac_cfg0_set(0x0);
    dmac_maskblock_set(0x101);
    dmac_cfg0_max_abrst_setf(0x1);
    dmac_cfg0_hs_sel_src_setf(0x0);
    dmac_cfg0_hs_sel_dst_setf(0x0);
    //dmac_cfg0_reload_src_setf(0x1);
    // dmac_cfg01_fcmode_setf(0x1);
    // dmac_cfg01_dest_per_setf(0x9);
//==========================================================================================
    dmac_dmacfgreg_set(0x1);                    //dmac enable DmaCfgReg
    dmac_chenreg_set(0x101);                    //dmac Channel 0  Enable
    // int a = *(volatile unsigned int *)(0x40005000+0x1c);     //tx_current cnt
    // int b = *(volatile unsigned int *)(0x40005000+0x24);     //mode done
    // LOG("a=%#x\n", a);
    // LOG("b=%#x\n", b);
}

void hal_nrz_dma_config_reload(uint32 mem_addr,uint16 reload_len)
{
	pcr_sw_clk0_clkg_dma_setf(1);
	uint32_t Temp;
	//read the channel enable register to chooser a free channel
	Temp = dmac_chenreg_get();	//read ChEnReg dmac 0x3a0
	// LOG("Temp=%#x\n", Temp);
	//clear Tfr, ClearBlock,ClearSrcTran,ClearDstTran and ClearErr
	dmac_cleartfr_set(0xf);
	dmac_clearblock_set(0xf);
	dmac_clearsrctran_set(0xf);
	dmac_cleardsttran_set(0xf);
	dmac_clearerr_set(0xf);

	//=================================================================================
	//channel 0 cfg
	//write the starting source address
	//dmac_sar0_set(MEM_ADDR);					// starting sourcing addr SARx  x=3

	if(mem_addr>0x40000)
		 mem_addr = 0x11000000|(0x3ffff&mem_addr);

	dmac_sar0_set(mem_addr);					// starting sourcing addr SARx  x=3

	//write the starting destination address
	dmac_dar0_set(NRZ_DATA_ADDR);					// starting destination addr DARx  x=3

	dmac_ctl01_set(0);
	dmac_ctl0_set(0);							// set bit44=0 dis wrt back CTLx  x=3
												//bit28 LLP_SRC_EN=0 bit27 LLP_DST_EN
												//bit26:25 SMS=0 bit24:23 DMS=0
												//bit18 DST_SCATTER_EN=0 bit17 SRC_GATHER_EN=0
												//bit10:9 SINC=incre bit8:7 DINC=incre
												//bit3:1 DST_TR_WIDTH=8
	//dmac_ctl01_block_ts_setf(0x7F8);	//(0x18);	//		//bit11:00  channel0  Block Transfer Size. 3*
	dmac_ctl01_set(reload_len);				//
    dmac_ctl0_dms_setf(0x0);                    //
	dmac_ctl0_tt_fc_setf(0x1);					//trans_type mem to peri
	dmac_ctl0_src_msize_setf(0x1);              //Burst size = 1
    dmac_ctl0_sinc_setf(0x0);                   //DMA_INC_INC
    dmac_ctl0_src_tr_width_setf(0x0);           //word

	dmac_ctl0_dest_msize_setf(0x0);             //Burst size = 1
	dmac_ctl0_dinc_setf(0x3);                   //DMA_INC_NCHG
	dmac_ctl0_dst_tr_width_setf(0x2);           //word

	dmac_ctl0_int_en_setf(0x0);
	dmac_cfg01_dest_per_setf(0x0);				//dma_tx_req spi0

	dmac_cfg0_set(0x0);
	dmac_maskblock_set(0x101);
	dmac_cfg0_max_abrst_setf(0x1);
	dmac_cfg0_hs_sel_src_setf(0x0);
	dmac_cfg0_hs_sel_dst_setf(0x0);

	dmac_cfg0_reload_src_setf(0x1);

	// dmac_cfg01_fcmode_setf(0x1);
    // dmac_cfg01_dest_per_setf(0x9);

//==========================================================================================
	dmac_dmacfgreg_set(0x1);					//dmac enable DmaCfgReg
	dmac_chenreg_set(0x101);					//dmac Channel 0  Enable
	// int a = *(volatile unsigned int *)(0x40005000+0x1c);		//tx_current cnt
	// int b = *(volatile unsigned int *)(0x40005000+0x24);		//mode done
	// LOG("a=%#x\n", a);
	// LOG("b=%#x\n", b);
	
}

void __ATTR_FUNC_RAM__(hal_nrz_start)(void);
void hal_nrz_start()
{
    s_nrzWaitingirq=1;
    nrz_ctrl_nrz_start_setf(0x1);
    while(s_nrzWaitingirq) {};
 
}

void hal_nrz_init(void)
{
    pcrm_clkhf_ctl0_xtal_clk_dig_en_setf(0x1);  //CLKHF_CTL0 xtal_clk_dig_en
    pcrm_clkhf_ctl1_set(pcrm_clkhf_ctl1_get() | 0x1e080);   //CLKHF_CTL1 bit16-13 bit7
    //open clk
    pcr_sw_clk0_clkg_nrz1_setf(1);
    pcr_sw_reset0_srst_nrz1_n_setf(0);
    pcr_sw_reset0_srst_nrz1_n_setf(1);
    JUMP_FUNCTION_SET(V21_IRQ_HANDLER, (uint32_t)&NZR_IRQHandler);
    nrz_ctrl_tx_ctrl_endian_setf(0x0);
    nrz_data_length_sel_en_set(0x0);
    NVIC_SetPriority(nrz1_IRQn, IRQ_PRIO_HAL);
    NVIC_EnableIRQ(nrz1_IRQn);
}

void hal_nrz_deinit(void)
{
    NVIC_DisableIRQ(nrz1_IRQn);
    nrz_ctrl_nrz_start_setf(0x0);
    nrz_ctrl_tx_ctrl_endian_setf(0x0);
    nrz_channel_sel_set(0x0);
    //dmac_chenreg_set(0x0);      //channel disable
    // dmac_dmacfgreg_set(0x0);    //dma disable
}


/*  data buf
    data_length 8bit 16bit 32bit
    channel


    int hal_nrz_data_write(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len, uint8_t channel_num)
    {
    uint32_t addr, i;
    int ret;
    nrz_data_length_sel_en_set(0x0);    //32BIT

    addr = prog_addr;

    if(channel_num > 1)
    {

        for(i = 0; i < data_len;i++)
        {
            addr += 4;
        }

    }

    return PPlus_SUCCESS;

    }
*/