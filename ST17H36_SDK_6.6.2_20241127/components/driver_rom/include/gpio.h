
#ifndef __GPIO_ROM_H__
#define __GPIO_ROM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>
//#include "bus_dev.h"
#include "error.h"

//special gpio:P35~P40,no pull,no retention,no wakeup
//#define SPECIAL_GPIO_MIN P35
//#define SPECIAL_GPIO_NUM 6
#define NUMBER_OF_PINS      21

typedef enum{
    GPIO_P00   =   0,    P0  =  GPIO_P00, 
    GPIO_P01   =   1,    P1  =  GPIO_P01, 
    GPIO_P02   =   2,    P2  =  GPIO_P02, 
    GPIO_P03   =   3,    P3  =  GPIO_P03, 
    GPIO_P04   =   4,    P4  =  GPIO_P04, Analog_IO_0 =  GPIO_P04,
    GPIO_P05   =   5,    P5  =  GPIO_P05, Analog_IO_1 =  GPIO_P05,
    GPIO_P06   =   6,    P6  =  GPIO_P06, Analog_IO_2 =  GPIO_P06,
    GPIO_P07   =   7,    P7  =  GPIO_P07, 
    GPIO_P08   =   8,    P8  =  GPIO_P08, 
    GPIO_P09   =   9,    P9  =  GPIO_P09, Analog_IO_3 =  GPIO_P09,
    GPIO_P10   =   10,   P10  =  GPIO_P10,Analog_IO_4 =  GPIO_P10,
    GPIO_P11   =   11,   P11  =  GPIO_P11,Analog_IO_5 =  GPIO_P11,
    GPIO_P12   =   12,   P12  =  GPIO_P12,Analog_IO_6 =  GPIO_P12,
    GPIO_P13   =   13,   P13  =  GPIO_P13,Analog_IO_7 =  GPIO_P13,
    GPIO_P14   =   14,   P14  =  GPIO_P14,Analog_IO_8 =  GPIO_P14,
    GPIO_P15   =   15,   P15  =  GPIO_P15,Analog_IO_9 =  GPIO_P15,
    GPIO_P16   =   16,   P16  =  GPIO_P16,
    GPIO_P17   =   17,   P17  =  GPIO_P17,
    GPIO_P18   =   18,   P18  =  GPIO_P18,
    GPIO_P19   =   19,   P19  =  GPIO_P19,	
    GPIO_P20   =   20,   P20  =  GPIO_P20,	
    GPIO_NUM   =   21,
    GPIO_DUMMY =  0xff,
}gpio_pin_e;

typedef enum {  
	FMUX_UART0_TX=0,		FMUX_UART_TX=0,
	FMUX_UART0_RX=1,        FMUX_UART_RX=1,
    FMUX_SPI_0_SCK=2,
    FMUX_SPI_0_SSN0=3,
    FMUX_SPI_0_SSN1=4,
    FMUX_SPI_0_TX=5, 
    FMUX_SPI_0_RX=6,
    FMUX_USB_DP=7, 
    FMUX_USB_DM=8,
	FMUX_RESERVED=9,
	FMUX_FLH_CLK=10,
	FMUX_FLH_CSN=11,
	FMUX_FLH_IO0=12,
	FMUX_FLH_IO1=13,
    FMUX_NRZ_DATA0=14,
    FMUX_NRZ_DATA1=15,
	FMUX_RESERVED0=16,
    FMUX_TIMX_TX=17,
    FMUX_TIMX_RX=18,
    FMUX_UART0_RTS=19,
    FMUX_UART0_CTS=20,
    FMUX_RF_RX_EN=21,
    FMUX_RF_TX_EN=22,
	FMUX_RESERVED1=23,
	FMUX_OTP_HARDWARE=24,

}gpio_fmux_e;
 
typedef enum{
    GPIO_INPUT  = 0,IE = 0,
    GPIO_OUTPUT = 1,OEN = 1,
}gpio_dir_t;


typedef enum{
    POL_FALLING = 0, POL_ACT_LOW  = 0,NEGEDGE = 0,
    POL_RISING  = 1, POL_ACT_HIGH = 1,POSEDGE = 1,
}gpio_polarity_e;


typedef enum
{
    GPIO_FLOATING   = 0x00, FLOATING = 0x00,       //no pull
    GPIO_PULL_UP    = 0x01, WEAK_PULL_UP = 0x01,   //150K
	GPIO_PULL_UP_S  = 0x02, STRONG_PULL_UP = 0x02,  //pull up strong
    GPIO_PULL_DOWN  = 0x03, PULL_DOWN = 0x03,      //150K
} gpio_pupd_e;
	

typedef enum{
    Bit_DISABLE = 0,
    Bit_ENABLE = 1,
}bit_action_e;

enum{
    GPIO_EVT_EDGE_RISING = 1,
    GPIO_EVT_EDGE_FALLING
};

enum {
    GPIO_PIN_ASSI_NONE = 0,
    GPIO_PIN_ASSI_OUT,
    GPIO_PIN_ASSI_IN,
};


#define IO_Wakeup_Pol_e     gpio_polarity_e
#define GPIO_Pin_e          gpio_pin_e
#define Fmux_Type_e         gpio_fmux_e
#define GPIO_Wakeup_Pol_e   gpio_polarity_e
#define BitAction_e         bit_action_e

//gpio pin callback,pos or neg
typedef void (*gpioin_Hdl_t)(gpio_pin_e pin,gpio_polarity_e type);

typedef struct 
{	
	bool          enable;
	gpio_pin_e    pin;
	int           pin_state;
	gpioin_Hdl_t  posedgeHdl;
	gpioin_Hdl_t  negedgeHdl;
}gpioin_t;


typedef struct {
    bool          state;
    uint32_t        retention_map;
    int             gpioin_nums;
    gpioin_t*       gpioin_ctx;
    
}gpio_ctx_t;


/*
 * rom use:
 * *_r
 *
*/
void gpio_init_r(void);
void gpio_dir_r(gpio_pin_e pin, gpio_dir_t dir);
int gpio_in_trigger_r(gpio_pin_e pin, comm_cb_t in_cb);
void gpio_interrupt_set_r(gpio_pin_e pin, bit_action_e en);
void GPIO_IRQHandler_r(void);
int gpio_interrupt_set(gpio_pin_e pin, bit_action_e en);

/*
 * 
 * */
int gpio_init(void);
int gpio_pin_init(gpio_pin_e pin, gpio_dir_t type);
void gpio_dir(gpio_pin_e pin, gpio_dir_t dir);
void gpio_write(gpio_pin_e pin, bit_action_e en);
void gpio_fast_write(gpio_pin_e pin, uint8_t en);
bool gpio_read(gpio_pin_e pin);
void gpio_retention(gpio_pin_e pin,bool en);
void gpio_retention_active(gpio_pin_e pin, bool en);
void gpio_retention_enable(void);
int gpio_interrupt_enable(gpio_pin_e pin, gpio_polarity_e type);

void gpio_pull_set(gpio_pin_e pin, gpio_pupd_e type);
void gpio_wakeup_set(gpio_pin_e pin, gpio_polarity_e type);
void gpio_ds_control(gpio_pin_e pin, bit_action_e value);
void gpio_fmux_control(gpio_pin_e pin, bit_action_e value);
void gpio_fmux_set(gpio_pin_e pin,gpio_fmux_e type);
void gpio_pwm_set(uint32_t arr,uint32_t ccr,uint32_t delay);

int gpioin_init(gpioin_t* gpioin, int pin_nums);
int gpioin_disable(gpioin_t* p_gpioin_ctx);
int gpioin_enable(gpioin_t* p_gpioin_ctx);
int gpioin_register(gpio_pin_e pin, gpioin_Hdl_t posedgeHdl, gpioin_Hdl_t negedgeHdl);
int gpioin_unregister(gpio_pin_e pin);
//int gpio_cfg_analog_io(gpio_pin_e pin, bit_action_e value) ;
void gpio_cfg_analog_io(gpio_pin_e pin, bit_action_e value);


gpio_ctx_t* gpio_get_handler(void);

void GPIO_IRQHandler(void);

#ifdef __cplusplus
}
#endif

#endif
