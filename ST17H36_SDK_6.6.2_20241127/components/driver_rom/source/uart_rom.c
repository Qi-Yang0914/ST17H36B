
#include <string.h>
#include "uart.h"
#include "gpio.h"
#include "error.h"
#include "clock.h"
#include "jump_function.h"

#include "femto_reg.h"

static comm_cb_t s_uart_cb = NULL;

enum{
    SWU_MODE_NONE = 0,
    SWU_MODE_RX   = 1,
    SWU_MODE_TX   = 2
};

typedef void (*dma_uart_cb)(void);
    
int         s_uart_baudrate = 0;
gpio_pin_e  s_tx_pin = GPIO_DUMMY;
gpio_pin_e  s_rx_pin = GPIO_DUMMY;
gpio_pin_e  s_swu_pin = GPIO_DUMMY;
uint8_t     s_swu_mode = SWU_MODE_NONE;

uint32_t    dma_uart_addr = 0;
uint32_t    dma_uart_size = 0;
dma_uart_cb dma_uart_reset = NULL;


void UART0_IRQHandler(void)
{
    uint8_t data[UART_RX_FIFO_SIZE];
    uint8_t i, len;  
    switch (uart0_iir_interrupt_identity_register_get() & 0xf)
    {
    case RDA_IRQ:
    case TIMEOUT_IRQ:
        len = uart0_rfl_receive_fifo_level_get();//AP_UART0->RFL;
        for(i = 0; i< len; i++){
            data[i] = (uint8_t)(uart0_rbr_receive_buffer_register_get() & 0xff);
        }
        if(s_uart_cb){
            comm_evt_t ev;
            ev.data = data;
            ev.type = UART_EVT_TYPE_RX_DATA;
            ev.len = (uint32_t)len;
            s_uart_cb(&ev);
        }
        break;
    case BUSY_IRQ:
        (void) uart0_usr_uart_status_register_get();
        break;                
    }
}

void uart_wakeup_init(void)
{
	uart_init(115200, P4, P5, s_uart_cb);
}

int uart_init(int baud, gpio_pin_e tx_pin, gpio_pin_e rx_pin, comm_cb_t cb)
{
	int  dll;

	NVIC_DisableIRQ(uart0_IRQn);
	
    //JUMP_FUNCTION(V11_IRQ_HANDLER) = (uint32_t)UART0_IRQHandler;
	JUMP_FUNCTION_SET(V11_IRQ_HANDLER, (uint32_t)&UART0_IRQHandler);
    
	if(tx_pin == SWU_DUMMY_PIN)
	{
    	s_swu_pin = rx_pin;
    	s_swu_mode = SWU_MODE_RX;
	}
	else if(rx_pin == SWU_DUMMY_PIN)
	{
		s_swu_pin = tx_pin;
		s_swu_mode = SWU_MODE_TX;
        
        //warning c-macro issue
		//com_new_add_reg1_uart0_rx_tie_high_setf(1);
		
		//WaitUs(1000);
	}
	s_uart_baudrate = baud;
	dll=((clk_get_pclk()>>4)+(baud>>1))/baud;
	if(tx_pin != SWU_DUMMY_PIN)
	{
        gpio_pull_set(tx_pin, WEAK_PULL_UP);
    	gpio_fmux_set(tx_pin, FMUX_UART_TX);
    }
	if(rx_pin != SWU_DUMMY_PIN)
	{
        gpio_pull_set(rx_pin, WEAK_PULL_UP);	//STRONG_PULL_UP
	    gpio_fmux_set(rx_pin, FMUX_UART_RX);
    }

	//enable clk, reset clock gate
	pcr_sw_clk0_clkg_uart0_setf(1);
	pcr_sw_reset0_srst_uart0_n_setf(0);
	pcr_sw_reset0_srst_uart0_n_setf(1);

    //uart0_fcr_fifo_control_register_set(0x81);//rx 1/2 trigger, enable fifo
    uart0_fcr_fifo_control_register_set(0);//disable fifo

	s_tx_pin = tx_pin;
	s_rx_pin = rx_pin;

	uart0_mcr_modem_control_register_set(0x0);

	uart0_lcr_line_control_register_dlab_setf(1);
	uart0_dlh_divisor_latch_high_set((dll&0xFF00)>>8);
	uart0_dll_divisor_latch_low_set(dll&0xFF);
	uart0_lcr_line_control_register_dlab_setf(0);

	//enable tx FIFO mode(empty trigger), rx FIFO mode(1/2 trigger)
	//uart0_fcr_fifo_control_register_pack(2, 0, 0, 0, 0, 1);

    uart0_lcr_line_control_register_stop_setf(1); //1 stop no parity
    uart0_lcr_line_control_register_dls_setf(3);  //8bit

    uart0_ier_interrupt_enable_register_set(0x0);

    //enable Received Data Available Interrupt
    uart0_ier_interrupt_enable_register_set(UART0_IER_INTERRUPT_ENABLE_REGISTER_ERBFI_BIT);

	//AP_UART0->IER = IER_ERBFI|IER_PTIME;
	s_uart_cb = cb;
	//enable uart irq
	if(cb){
	    NVIC_EnableIRQ(uart0_IRQn);
	    NVIC_SetPriority(uart0_IRQn, IRQ_PRIO_HAL);
	}

	return PPlus_SUCCESS;
}
int uart_deinit(void)
{
    //disable uart irq
    NVIC_DisableIRQ(uart0_IRQn);
    JUMP_FUNCTION_SET(V11_IRQ_HANDLER, 0);

	pcr_sw_clk0_clkg_uart0_setf(0); //off clk

    if(s_tx_pin != GPIO_DUMMY)
        gpio_fmux_control(s_tx_pin,Bit_DISABLE);
    if(s_rx_pin != GPIO_DUMMY)
        gpio_fmux_control(s_rx_pin,Bit_DISABLE);    
    s_tx_pin = GPIO_DUMMY;
    s_rx_pin = GPIO_DUMMY;
    //warning need fix below c-macro
    //com_new_add_reg1_uart0_rx_tie_high_setf(0);
    return PPlus_SUCCESS;
}

void uart_send_buff(uint8_t *data, int len)
{   

	HAL_WAIT_CONDITION_TIMEOUT(!(uart0_usr_uart_status_register_get() & UART0_USR_UART_STATUS_REGISTER_BUSY_BIT),100000);

	while(len--)
	{
		HAL_WAIT_CONDITION_TIMEOUT((uart0_lsr_line_status_register_get() & UART0_LSR_LINE_STATUS_REGISTER_THRE_BIT), 100000);
		uart0_thr_transmit_holding_register_set (*data++);
	}
	//wait shift register empty
	HAL_WAIT_CONDITION_TIMEOUT((uart0_lsr_line_status_register_get() & UART0_LSR_LINE_STATUS_REGISTER_TEMT_BIT), 100000);
}

int uart_set_baudrate(uint32_t baud)
{
	if(baud)
				s_uart_baudrate= baud;
	uint32_t dll = ((clk_get_pclk()>>4)+(s_uart_baudrate>>1))/s_uart_baudrate;

	uart0_lcr_line_control_register_dlab_setf(1);
	uart0_dlh_divisor_latch_high_set((dll&0xFF00)>>8);
	uart0_dll_divisor_latch_low_set(dll&0xFF);
	uart0_lcr_line_control_register_dlab_setf(0);
    uart0_lcr_line_control_register_stop_setf(1); //1 stop no parity
    uart0_lcr_line_control_register_dls_setf(3);  //8bit

	return PPlus_SUCCESS;
}

void swu_tx_mode(int baud)
{
    //only when now is rx mode, need switch to tx mode
    if(s_swu_mode != SWU_MODE_RX) 
        return;
    s_swu_mode = SWU_MODE_TX;
    uart_deinit();
    com_new_add_reg1_uart0_rx_tie_high_setf(1);
    if(baud ==0) baud = s_uart_baudrate;
    uart_init(baud, s_swu_pin, SWU_DUMMY_PIN, s_uart_cb);
    
}

void swu_rx_mode(int baud)
{
    //only when now is tx mode, need switch to rx mode
    if(dma_uart_reset)
       dma_uart_reset(); 
    if(s_swu_mode != SWU_MODE_TX)
        return;
    s_swu_mode = SWU_MODE_RX;
    uart_deinit();
    if(baud ==0) baud = s_uart_baudrate;
    uart_init(baud, SWU_DUMMY_PIN, s_swu_pin, s_uart_cb);
    com_new_add_reg1_uart0_rx_tie_high_setf(0);
}

/*
    AP_UART0->SRT & 0x3;  //RCVR Trigger      9c
    AP_UART0->STET & 0x3; //TX enpty trigger  a0
    AP_UART0->SDMAM & 0x1; //DMA MODE         94
    AP_UART0->SFE &0x1;  //enable             98
*/ 
int uart_rxtrigger(uint32_t rxfifo_num)
{
	rxfifo_num = rxfifo_num & 0x3;  
	uart0_fcr_fifo_control_register_set((rxfifo_num<<6) + \
									(uart0_stet_shadow_tx_empty_trigger_shadow_tx_empty_trigger_getf()<<4) + \
									(uart0_sdmam_shadow_dma_mode_shadow_dma_mode_getf()<<3) + \
									UART0_FCR_FIFO_CONTROL_REGISTER_FIFOE_BIT);

	return PPlus_SUCCESS;
}
int uart_txtrigger(uint32_t txfifo_num)
{
	txfifo_num = txfifo_num & 0x3; 
	uart0_fcr_fifo_control_register_set((uart0_srt_shadow_rcvr_trigger_shadow_rcvr_trigger_getf()<<6) + \
									(txfifo_num<<4) + \
									(uart0_sdmam_shadow_dma_mode_shadow_dma_mode_getf()<<3) + \
									UART0_FCR_FIFO_CONTROL_REGISTER_FIFOE_BIT);

	return PPlus_SUCCESS;
}



void uart_dma_init(void)
{
    dma_uart_addr = 0;
    dma_uart_size = 0;
    dma_uart_reset = NULL;

}
    void uart_dma_reset(void)
{
    uart_dma_start(dma_uart_addr, dma_uart_size);
}

void uart_dma_start(uint32_t addr, uint32_t size)
{
    dma_uart_addr = addr;
    dma_uart_size = size;
    if(dma_uart_reset == NULL)
        dma_uart_reset = uart_dma_reset;
    
	/* uart disable fifo&irq */
	uart0_fcr_fifo_control_register_set(0x0);//9);//
	NVIC_DisableIRQ(uart0_IRQn);

	//enable clk, reset clock gate
	pcr_sw_clk0_clkg_dma_setf(1);
	pcr_sw_reset0_srst_dma_n_setf(0);
	pcr_sw_reset0_srst_dma_n_setf(1);
	
	dmac_sar0_set(0x40004000);
	dmac_dar0_set(addr);
	dmac_ctl01_set(size+1);

	dmac_ctl0_set(0);
	dmac_ctl0_sinc_setf(0x3);//sinc nochange
	dmac_ctl0_tt_fc_setf(0x2);

	dmac_cfg01_src_per_setf(0x9);//handshaking
	dmac_cfg0_set(0x00000200);//no reload

	dmac_dmacfgreg_set(0x1);
	dmac_chenreg_set(0x101);
}

void uart_dma_stop(void)
{
    dma_uart_addr = 0;
    dma_uart_size = 0;
    dma_uart_reset = NULL;
    
	//enable clk, reset clock gate
	pcr_sw_clk0_clkg_dma_setf(1);
	pcr_sw_reset0_srst_dma_n_setf(0);
	pcr_sw_reset0_srst_dma_n_setf(1);

}

uint32_t uart_dma_offset(void)
{
	uint32_t cur_addr;
	uint32_t len = 0;

	cur_addr = dmac_dar0_get();
	len = cur_addr - dma_uart_addr;

	return len;
}



