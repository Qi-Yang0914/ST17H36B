
/**
 ****************************************************************************************
 *
 * @file global_config.h
 *
 * @brief This file contains the definitions of index of global configuration which 
 *         will be configured in APP project.
 *
 *
 * $Rev:  $
 *
 ****************************************************************************************
 */


#ifndef _GLOBAL_CONFIG_H_
#define _GLOBAL_CONFIG_H_

//#include "types.h"

/*******************************************************************************
 *  software configuration parameters definition
 */
 
#define CONFIG_BASE_ADDR 0x28100 

#define   SOFT_PARAMETER_NUM               64

// parameter index of configuration array
#define LL_SWITCH                        	0               // Link Layer switch, 1 enable, 0 disable
#define SCAN_RSP_DELAY                   	1                // to adjust scan req -> scan rsp delay
#define CONN_REQ_TO_SLAVE_DELAY          	2                // to calibrate the delay between conn req & 1st slave conn event
#define SLAVE_CONN_DELAY                 	3                // to adjust the delay between 2 slave connection events
#define SLAVE_CONN_DELAY_BEFORE_SYNC     	4                // to adjust the delay between 2 slave connection events before 1st anchor is acquired
#define MAX_SLEEP_TIME                   	5                // maximum sleep time in us
#define MIN_SLEEP_TIME                   	6                // minimum sleep time in us
#define WAKEUP_ADVANCE                   	7                // wakeup advance time, to cover HW delay, crystal settle time, sw delay, ... etc.
#define WAKEUP_DELAY                     	8                // cycles of SW delay to wait crystal settle
#define CLOCK_SETTING                    	9               // HCLK
#define LL_HW_BB_DELAY                   	10
#define LL_HW_AFE_DELAY                  	11
#define LL_HW_PLL_DELAY                  	12
#define LL_HW_RTLP_1ST_TIMEOUT           	13
#define LL_HW_Tx_TO_RX_INTV              	14
#define LL_HW_Rx_TO_TX_INTV              	15
#define INITIAL_STACK_PTR                	16
#define ALLOW_TO_SLEEP_TICK_RC32K        	17
#define LL_ADV_TO_SCAN_REQ_DELAY         	18
#define LL_ADV_TO_CONN_REQ_DELAY         	19
#define LL_MOVE_TO_MASTER_DELAY          	20
#define LL_CONN_REQ_WIN_SIZE             	21
#define LL_CONN_REQ_WIN_OFFSET           	22
#define LL_HW_BB_DELAY_2MPHY             	23
#define LL_HW_AFE_DELAY_2MPHY            	24
#define LL_HW_PLL_DELAY_2MPHY            	25
#define LL_HW_Tx_TO_RX_INTV_2MPHY        	26
#define LL_HW_Rx_TO_TX_INTV_2MPHY        	27
#define OSAL_SYS_TICK_WAKEUP_TRIM        	28
#define MAC_ADDRESS_LOC                  	29
#define LL_CONN_TASK_DURATION            	30
#define TIMER_SET_ENTRY_TIME             	31       // time from HW timer expiry to ISR entry, unit: us
#define CLK_TRACKING_CONFIG_DLL				32
#define CLK_TRACKING_CONFIG_XTAL		   	33
#define RC32_CNT_TRACKING_AVG_CONFIG     	34
#define LL_SCH_MARGIN_TIME					35
#define LL_ANCHOR_POINT_MARGIN				36
#define LL_SLAVE_FIRST_RXTO_ADVANCE     	37
#define LL_MAX_SCAN_TIME					38
#define LL_SCH_DELTA_MARGIN					39
#define LL_SLAVE_RXTO_CNT_MAX_LIMIT			40
#define LL_SLAVE_MAX_RXTO             		41
#define LL_CONN_MAX_DATA_LEN				42
#define LL_ADV_RX_TO_VALUE					43
#define LL_SCAN_SCH_MARGIN_TIME     		44
#define LL_MIN_SCAN_TIME					45
#define LL_HW_BB_DELAY_ADV					46
#define LL_HW_AFE_DELAY_ADV					47
#define LL_HW_PLL_DELAY_ADV					48
#define LL_SCH_IRQ_CNT_MARGIN				49
#define LL_SCH_CONN_PRE_IRQ					50
#define	LL_CONN_INTV_UNIT_US				51
#define LL_SCH_CONN_TRIG_MARGIN				52
#define LL_HW_Tx_TO_RX_INTV_NON_CONN       	53
#define LL_HW_Rx_TO_TX_INTV_NON_CONN       	54
#define LL_HW_RTLP_1ST_TIMEOUT_MARGIN		55
#define OTP_CTX_HANDLER                 	56


#define   RC32_TRACKINK_ALLOW              0x00000001       // enable tracking RC 32KHz clock with 16MHz hclk
#define   SLAVE_LATENCY_ALLOW              0x00000002       // slave latency allow switch
//#define   LL_DEBUG_ALLOW                   0x00000004       // enable invoke RAM project debug output fucntion
//#define   LL_WHITELIST_ALLOW               0x00000008       // enable whitelist filter
#define   LL_RC32K_SEL                     0x00000010       // select RC32K RTC, otherwise select crystal 32K RTC
//#define   SIMUL_CONN_ADV_ALLOW             0x00000020       // allow send adv in connect state
#define   SIMUL_CONN_SCAN_ALLOW            0x00000040       // allow scan in connect state

//#define   CONN_CSA2_ALLOW                  0x00000080       // allow using CSA2 in connection state

//#define   GAP_DUP_RPT_FILTER_DISALLOW      0x00000100       // duplicate report filter in GAP layer, allow default

//#define   ENH_CONN_CMP_EVENT_ALLOW         0x00000200       // allow LL to send enhanced connection complete event. We may 
                                                            // disable it if host not support this message, althought NOT 
                                                            // align to the spec
#define   RC32_CAP_ADAPTIVE_TRIM             0x00000400  
#define   LL_AES_DATAOUT_SEL                 0x00000800    
#define   LL_GEN_FIFO_SUB_SEL                0x00001000
#define   LL_MASTER_COLLISION_ALGO_SEL       0x00002000
#define   LL_MASTER_COLLISION_ALGO_SEL2      0x00004000
#define   ll_TX_FIFO_VACANCY_SEL			       0x00008000
#define   LL_ADJ_SLAVE_RXWIN_SEL             0x00010000
#define   LL_CONN_LPTO_SEL                   0x00020000
// delete 2018-7-17, should use enum  H_SYSCLK_SEL
//enum
//{
//    CLOCK_16MHZ = 0,
//    CLOCK_32MHZ = 1,
//    CLOCK_48MHZ = 2,
//    CLOCK_64MHZ = 3,
//    CLOCK_96MHZ = 4,
//    CLOCK_32MHZ_DBL=5
//};

//extern uint32 global_config[SOFT_PARAMETER_NUM];
//extern uint32 * pGlobal_config;           // note: app project needn't this variable
#define pGlobal_config ((unsigned int *)(CONFIG_BASE_ADDR))

#endif // _GLOBAL_CONFIG_H_
