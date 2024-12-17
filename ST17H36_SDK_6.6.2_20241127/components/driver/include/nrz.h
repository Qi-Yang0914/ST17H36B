#ifndef __NRZ_SDK_H__
#define __NRZ_SDK_H__

#ifdef __cplusplus
extern "C" {
#endif

#define MEM_ADDR 		0x11008000	//0x29a00	//
#define NRZ_DATA_ADDR 	0x40005004

typedef enum
{
    NRZ_CH_0 = 0,
    NRZ_CH_1,
    NRZ_CH_2,
    NRZ_CH_3,
    NRZ_CH_4,
    NRZ_CH_5,
    NRZ_CH_6,
    NRZ_CH_7,
    NRZ_CH_NUM,
} NRZ_CH_t;

typedef enum
{
    NRZ_IS_DEFAULT = 0,
    NRZ_IS_8BIT,
    NRZ_IS_16BIT,
    NRZ_IS_32BIT,
} NRZ_data_t;

/**
    @brief NRZ Channel configuration structure type definition
*/
typedef struct
{
    uint16_t    tx_bits_count;
    uint32_t    carr_cnt;
    uint32_t    prem_cnt;
    uint32_t    code0_cnt;
    uint32_t    code1_cnt;
    uint32_t    wave_ctrl;

    bool        enable_int;
} NRZ_CH_CFG_t;


typedef struct{
  uint8_t pin;
  uint8_t pmux;   
} nrz_pin_t;

typedef struct _nrz_Cfg_t
{
    uint8_t channel;
    nrz_pin_t nrz_pin;
    uint8_t  is_multi_mode;
} nrz_Cfg_t;

typedef void (*NRZ_Hdl_t)(NRZ_CH_t);

typedef struct
{
    NRZ_CH_t    nrz_channel;
    NRZ_Hdl_t   evt_handler;
} HAL_NRZ_t;

typedef struct
{
    uint8_t     init_ch;
    uint8_t     interrupt;
    uint8_t     xmit_busy;
    uint8_t     xmit_flash;
    NRZ_Hdl_t   evt_handler;
} NRZ_CH_Ctx_t;

void hal_nrz_init(void);
void hal_nrz_config_set(NRZ_CH_CFG_t ch_cfg);
void hal_nrz_start();
//void hal_nrz_dma_config(void);
void hal_nrz_dma_config(uint32 mem_addr);
void hal_nrz_dma_config_reload(uint32 mem_addr,uint16 reload_len);
int hal_nrz_config_channel(gpio_pin_e pin, gpio_fmux_e type, bool is_multi_mode);
int hal_nrz_data_write(uint32_t prog_addr, uint32_t* data_buf, uint32_t data_len, uint8_t channel_num);
void hal_nrz_deinit(void);

#ifdef __cplusplus
}
#endif

#endif