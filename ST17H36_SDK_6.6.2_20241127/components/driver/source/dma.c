#include <string.h>
#include "jump_function.h"
#include "dma.h"
#include "error.h"

void __attribute__((used)) hal_DMA_IRQHandler(void);

typedef struct
{
  bool init_flg;
  DMA_CH_Ctx_t dma_ch_ctx[DMA_CH_NUM];
} dma_ctx_t;

dma_ctx_t s_dma_ctx =
{
  .init_flg = FALSE,
};

static DMA_CONN_e get_src_conn(uint32_t addr)
{
    if(addr == (FEMTO_REG_SPIF_WFIFO_DATA_RFIFO_DATA_OFFSET + FEMTO_REG_SPIF_BASE_ADDR))
        return DMA_CONN_SPIF_Rx;

    if(addr == (FEMTO_REG_SPI0_DR_OFFSET + FEMTO_REG_SPI0_BASE_ADDR))
        return DMA_CONN_SPI0_Rx;

    if(addr == (FEMTO_REG_UART0_RBR_RECEIVE_BUFFER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR))
        return DMA_CONN_UART0_Rx;
    
    if((addr == (FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR))||\
       (addr == (FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR))||\
       (addr == (FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR))||\
       (addr == (FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR)))
        return DMA_CONN_TIMx1_TRx;

    if(addr == (FEMTO_REG_ADCC_ADCC_DATA_OFFSET + FEMTO_REG_ADCC_BASE_ADDR))
        return DMA_CONN_ADCC_VOICE_Rx;

    return DMA_CONN_MEM;
}

static DMA_CONN_e get_dst_conn(uint32_t addr)
{
    if(addr == (FEMTO_REG_NRZ_NRZ_DATA_IN_OFFSET + FEMTO_REG_NRZ_BASE_ADDR))
        return DMA_CONN_NRZ1_Tx;

    if(addr == (FEMTO_REG_SPI0_DR_OFFSET + FEMTO_REG_SPI0_BASE_ADDR))
        return DMA_CONN_SPI0_Tx;

    if((addr == (FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR))||\
       (addr == (FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR))||\
       (addr == (FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR))||\
       (addr == (FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR)))
        return DMA_CONN_TIMx1_TRx;

    if(addr == (FEMTO_REG_UART0_THR_TRANSMIT_HOLDING_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR))
        return DMA_CONN_UART0_Tx;

    return DMA_CONN_MEM;
}

int hal_dma_init_channel(HAL_DMA_t cfg)
{
  DMA_CH_Ctx_t *pctx;
  DMA_CH_t ch;

  if (!s_dma_ctx.init_flg)
    return PPlus_ERR_NOT_REGISTED;

  ch = cfg.dma_channel;

  if (ch >= DMA_CH_NUM)
    return PPlus_ERR_INVALID_PARAM;

  pctx = &s_dma_ctx.dma_ch_ctx[ch];

  if (pctx->init_ch)
    return PPlus_ERR_INVALID_STATE;

  pctx->evt_handler = cfg.evt_handler;
  pctx->init_ch = true;
  return PPlus_SUCCESS;
}

int hal_dma_init(void)
{
  pcr_sw_clk0_clkg_dma_setf(1);
  // reset dmac clk
  pcr_sw_reset0_srst_dma_n_setf(0);
  pcr_sw_reset0_srst_dma_n_setf(1);
  NVIC_SetPriority((IRQn_Type)dma_IRQn, IRQ_PRIO_HAL);
  NVIC_EnableIRQ((IRQn_Type)dma_IRQn);
  // JUMP_FUNCTION_SET(DMAC_IRQ_HANDLER, (uint32_t)&hal_DMA_IRQHandler);
  JUMP_FUNCTION_SET(DMAC_IRQ_HANDLER, 0);
  s_dma_ctx.init_flg = TRUE;
  memset(&(s_dma_ctx.dma_ch_ctx[0]), 0, sizeof(DMA_CH_Ctx_t)*DMA_CH_NUM);
  // dmac controller enable
  dmac_dmacfgreg_set(DMA_DMAC_E);

  return PPlus_SUCCESS;
}

int hal_dma_config_channel(DMA_CH_t ch, DMA_CH_CFG_t *cfg)
{
  DMA_CH_Ctx_t *pctx;
  DMA_CONN_e src_conn, dst_conn;
  uint32_t cctrl = 0;
  uint32_t transf_type = DMA_TRANSFERTYPE_M2M;
  uint32_t transf_per = 0;

  if (!s_dma_ctx.init_flg)
    return PPlus_ERR_NOT_REGISTED;

  if (ch >= DMA_CH_NUM)
  {
    return PPlus_ERR_INVALID_PARAM;
  }

  if (!pctx->init_ch)
    return PPlus_ERR_INVALID_STATE;

  pctx = &s_dma_ctx.dma_ch_ctx[ch];

  if ((dmac_chenreg_get() & (DMA_DMACEnbldChns_Ch(ch))) ||
      (pctx->xmit_busy))
  {
    // This channel is enabled, return ERROR, need to release this channel first
    return PPlus_ERR_BUSY;
  }
  if (DMA_GET_MAX_TRANSPORT_SIZE(ch) < cfg->transf_size)
  {
    return PPlus_ERR_INVALID_PARAM;
  }
  // Reset the Interrupt status
  dmac_cleartfr_set(DMA_DMACIntTfrClr_Ch(ch));
  // UnMask interrupt
  dmac_masktfr_set(DMA_DMACCxIntMask_E(ch));
  src_conn = get_src_conn(cfg->src_addr);
  dst_conn = get_dst_conn(cfg->dst_addr);

  /* Assign Linker List Item value */
  if (src_conn && dst_conn)
  {
    transf_type = DMA_TRANSFERTYPE_P2P;
    transf_per = DMA_DMACCxConfig_SrcPeripheral(src_conn - 1) |
                 DMA_DMACCxConfig_DestPeripheral(dst_conn - 1);
  }
  else if (src_conn)
  {
    transf_type = DMA_TRANSFERTYPE_P2M;
    transf_per = DMA_DMACCxConfig_SrcPeripheral(src_conn - 1);
  }
  else if (dst_conn)
  {
    transf_type = DMA_TRANSFERTYPE_M2P;
    transf_per = DMA_DMACCxConfig_DestPeripheral(dst_conn - 1);
  }

  cctrl = DMA_DMACCxConfig_TransferType(transf_type) | \
          DMA_DMACCxControl_SMSize(cfg->src_msize) | \
          DMA_DMACCxControl_DMSize(cfg->dst_msize) | \
          DMA_DMACCxControl_SWidth(cfg->src_tr_width) | \
          DMA_DMACCxControl_DWidth(cfg->dst_tr_width) | \
          DMA_DMACCxControl_SInc(cfg->sinc) | \
          DMA_DMACCxControl_DInc(cfg->dinc) | \
          DMA_DMACCxSMS_Master(DMA_AHB_MASTER_2) | \
          DMA_DMACCxDMS_Master(DMA_AHB_MASTER_1);

  if (cfg->enable_int)
  {
    cctrl |= DMA_DMAC_INT_E;
    dmac_masktfr_set(DMA_DMACCxConfig_E(ch) | BIT(ch));
    pctx->interrupt = true;
  }
  else
  {
    dmac_cleartfr_set(DMA_DMACIntTfrClr_Ch(ch));
    dmac_masktfr_set(DMA_DMACCxIntMask_E(ch));
    pctx->interrupt = false;
  }

  if (ch == DMA_CH_0)
  {
    dmac_ctl0_set(cctrl);
    dmac_sar0_set(cfg->src_addr);
    dmac_dar0_set(cfg->dst_addr);
    dmac_llp0_set(0);
    dmac_ctl01_set(DMA_DMACCxControl_TransferSize(cfg->transf_size));
    subWriteReg((FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR), 15, 7, transf_per);
    dmac_cfg0_set(0);
	  dmac_cfg0_reload_dst_setf(cfg->dst_reload_en);
	  dmac_cfg0_reload_src_setf(cfg->src_reload_en);
  }

  return PPlus_SUCCESS;
}

int hal_dma_deinit(void)
{
  // dmac controller disable
  dmac_dmacfgreg_set(DMA_DMAC_D);
  s_dma_ctx.init_flg = FALSE;
  memset(&(s_dma_ctx.dma_ch_ctx[0]), 0, sizeof(DMA_CH_Ctx_t)*DMA_CH_NUM);
  pcr_sw_clk0_clkg_dma_setf(0);

  return PPlus_SUCCESS;
}

int hal_dma_start_channel(DMA_CH_t ch)
{
  DMA_CH_Ctx_t *pctx;

  if (!s_dma_ctx.init_flg)
    return PPlus_ERR_NOT_REGISTED;

  if (ch >= DMA_CH_NUM)
    return PPlus_ERR_INVALID_PARAM;

  pctx = &s_dma_ctx.dma_ch_ctx[ch];
  dmac_chenreg_set(DMA_DMACCxConfig_E(ch) | BIT(ch));
  pctx->xmit_busy = TRUE;

  return PPlus_SUCCESS;
}

int hal_dma_stop_channel(DMA_CH_t ch)
{
  DMA_CH_Ctx_t *pctx;

  if (!s_dma_ctx.init_flg)
    return PPlus_ERR_NOT_REGISTED;

  if (ch >= DMA_CH_NUM)
    return PPlus_ERR_INVALID_PARAM;

  pctx = &s_dma_ctx.dma_ch_ctx[ch];
  // Reset the Interrupt status
  dmac_cleartfr_set(DMA_DMACIntTfrClr_Ch(ch));
  // UnMask interrupt
  dmac_chenreg_set(DMA_DMACCxConfig_E(ch));
  pctx->xmit_busy = FALSE;

  return PPlus_SUCCESS;
}

// void __attribute__((used)) hal_DMA_IRQHandler(void)
// {
//   DMA_CH_t ch;

//   for (ch = DMA_CH_0; ch < DMA_CH_NUM; ch++)
//   {
//     if (dmac_statustfr0_get() & BIT(ch))
//     {
//       hal_dma_stop_channel(ch);

//       if (s_dma_ctx.dma_ch_ctx[ch].evt_handler != NULL)
//       {
//         s_dma_ctx.dma_ch_ctx[ch].evt_handler(ch);
//       }
//     }
//   }
// }


