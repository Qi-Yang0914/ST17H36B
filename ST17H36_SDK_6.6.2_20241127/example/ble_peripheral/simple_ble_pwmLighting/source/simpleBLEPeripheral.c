

/**************************************************************************************************
  Filename:       simpleBLEPeripheral.c
  Revised:        
  Revision:       

  Description:    This file contains the Simple BLE Peripheral sample application
                  

**************************************************************************************************/
/*********************************************************************
 * INCLUDES
 */
#include "rom_sym_def.h"
#include "bcomdef.h"
#include "rf_phy_driver.h"
#include "global_config.h"
#include "OSAL.h"
#include "OSAL_PwrMgr.h"
#include "gatt.h"
#include "hci.h"
#include "gapgattserver.h"
#include "gattservapp.h"
#include "devinfoservice.h"
#include "peripheral.h"
#include "gapbondmgr.h"
#include "simpleBLEPeripheral.h"
#include "simpleGATTprofile.h"
#include "hci_tl.h"
#include "gatt_uuid.h"
/*********************************************************************
 * MACROS
 */
/*********************************************************************
 * CONSTANTS
 */

/*********************************************************************
 * TYPEDEFS
 */

/*********************************a************************************
 * GLOBAL VARIABLES
 */
extern  gattAttrType_t devInfoService;
extern uint8 devInfoPnpIdProps;
extern uint8 devInfoPnpId[DEVINFO_PNP_ID_LEN];
extern uint8 devInfoPnpIdUUID[ATT_BT_UUID_SIZE];
extern gattAttrType_t gapService;
extern uint8 gapDeviceNameCharProps;
extern uint8 gapDeviceName[GAP_DEVICE_NAME_LEN+1];
extern  uint8 gapAppearanceCharProps;
uint16 gapAppearance;
extern gattAttrType_t gattService;
extern uint8 serviceChangedCharProps;
extern uint16 serviceChange_indCharCfg;
extern gattServiceCBs_t gapServiceCBs;
extern gattServiceCBs_t gattServiceCBs;
extern gattServiceCBs_t devInfoCBs;
gattAttribute_t devInfoAttrTbl[] =
{
	// Device Information Service
	{
		{ ATT_BT_UUID_SIZE, primaryServiceUUID }, /* type */
		GATT_PERMIT_READ,                         /* permissions */
		0,                                        /* handle */
		(uint8 *)&devInfoService                /* pValue */
	},

	// PnP ID Declaration
	{
		{ ATT_BT_UUID_SIZE, characterUUID },
		GATT_PERMIT_READ,
		0,
		&devInfoPnpIdProps
	},

	// PnP ID Value
	{
		{ ATT_BT_UUID_SIZE, devInfoPnpIdUUID },
		GATT_PERMIT_READ,
		0,
		(uint8 *) devInfoPnpId
	}
};

gattAttribute_t gattAttrTbl[] = {
	// Generic Attribute Profile
	{
		{ ATT_BT_UUID_SIZE, primaryServiceUUID }, /* type */
		GATT_PERMIT_READ,                         /* permissions */
		0,                                        /* handle */
		(uint8 *)&gattService                     /* pValue */
	},
	// Characteristic Declaration
	{
		{ ATT_BT_UUID_SIZE, characterUUID },
		GATT_PERMIT_READ,
		0,
		&serviceChangedCharProps
	},

	// Attribute Service Changed
	{
		{ ATT_BT_UUID_SIZE, serviceChangedUUID },
		0,
		0,
		NULL
	},

	// Client Characteristic configuration
	{
		{ ATT_BT_UUID_SIZE, clientCharCfgUUID },
		GATT_PERMIT_READ | GATT_PERMIT_WRITE,
		0,
		(uint8 *)(&serviceChange_indCharCfg)
	}
};

gattAttribute_t gapAttrTbl[] =
{
  // Generic Access Profile
  {
    { ATT_BT_UUID_SIZE, primaryServiceUUID }, /* type */
    GATT_PERMIT_READ,                         /* permissions */
    0,                                        /* handle */
    (uint8 *)&gapService                      /* pValue */
  },

    // Characteristic Declaration
    {
      { ATT_BT_UUID_SIZE, characterUUID },
      GATT_PERMIT_READ,
      0,
      &gapDeviceNameCharProps
    },

      // Device Name attribute
      {
        { ATT_BT_UUID_SIZE, deviceNameUUID },
        GATT_PERMIT_READ,
        0,
        gapDeviceName
      },

    // Characteristic Declaration
    {
      { ATT_BT_UUID_SIZE, characterUUID },
      GATT_PERMIT_READ,
      0,
      &gapAppearanceCharProps
    },

      // Icon attribute
      {
        { ATT_BT_UUID_SIZE, appearanceUUID },
        GATT_PERMIT_READ,
        0,
        (uint8 *)&gapAppearance
      }
};
/*********************************************************************
 * EXTERNAL VARIABLES
 */

/*********************************************************************
 * EXTERNAL FUNCTIONS
 */
typedef void (*gapbondmgr_complete_event_t)(uint8 opcode, uint32 *pMsg);
extern void gapbondMgr_regCompleteEvtCBs(gapbondmgr_complete_event_t pfnCompleteCBs);
extern void ATT_SetMTUSizeMax(uint16 mtuSize);
/*********************************************************************
 * LOCAL VARIABLES
 */
uint8 application_TaskID;   // Task ID for internal task/event processing
uint8 g_notifyData[120] = {0};

uint8 advertData[] ={0x02,GAP_ADTYPE_FLAGS,(GAP_ADTYPE_FLAGS_GENERAL | GAP_ADTYPE_FLAGS_BREDR_NOT_SUPPORTED),
													// appearance
													0x03,	// length of this data
													GAP_ADTYPE_APPEARANCE,
													LO_UINT16(GAP_APPEARE_HID_GAMEPAD),
													HI_UINT16(GAP_APPEARE_HID_GAMEPAD),
                       };

uint8 scanRspData[]=
{
 11,
 GAP_ADTYPE_LOCAL_NAME_COMPLETE,
 's', 'i', 'm', 'p', 'l','e', '_', 'P', 'w','m'
};
/*********************************************************************
 * LOCAL FUNCTIONS
 */
static void simpleBLEPeripheral_ProcessOSALMsg( osal_event_hdr_t *pMsg );
void simpleBLEPeripheral_processAuthCompleteMsg(uint8 opcode, uint32 *pMsg);


void sbp_GapStateCB( gaprole_States_t newState );



gaprole_States_t sbp_PeripheralState;
/*********************************************************************
    PROFILE CALLBACKS
*/

static gapRolesCBs_t sbp_PeripheralCBs =
{
    sbp_GapStateCB,   // Profile State Change Callbacks
 
};

/*********************************************************************
 * PUBLIC FUNCTIONS
 */

/*********************************************************************
 * @fn      SimpleBLEPeripheral_Init
 *
 * @brief   Initialization function for the Simple BLE Peripheral App Task.
 *          This is called during initialization and should contain
 *          any application specific initialization (ie. hardware
 *          initialization/setup, table initialization, power up
 *          notificaiton ... ).
 *
 * @param   task_id - the ID assigned by OSAL.  This ID should be
 *                    used to send messages and set timers.
 *
 * @return  none
 */
void SimpleBLEPeripheral_Init( uint8 task_id )
{
	application_TaskID = task_id;
	LOG("SimpleBLEPeripheral_Init\n");
	// GGS_AddService( gapAttrTbl);            // GAP
    GATTServApp_RegisterService( gapAttrTbl, GATT_NUM_ATTRS( gapAttrTbl ),
		                                  &gapServiceCBs );
	// GATTServApp_AddService( gattAttrTbl);    // GATT attributes
	// Register GATT attribute list and CBs with GATT Server Application
	GATTServApp_RegisterService( gattAttrTbl, GATT_NUM_ATTRS( gattAttrTbl ),
	                              		&gattServiceCBs );

	// DevInfo_AddService(devInfoAttrTbl);                           // Device Information Service
    GATTServApp_RegisterService( devInfoAttrTbl,
                                      GATT_NUM_ATTRS( devInfoAttrTbl ),
                                      &devInfoCBs );
	simpleGATTProfile_AddService();					// simple GATT Profile Service

  //set mtu size
  {
    // #warning "mtu greate than 23( MAX 140 ) , config pair"
    /*
      cfg1 : call ATT_SetMTUSizeMax() and patch_gMTU23
      cfg2 : makefile 
            BLE_TX_PKT_LEN = 144
            BLE_RX_PKT_LEN = 144
            BLE_MAX_ALLOW_PKT_PER_EVENT_TX = 2
            BLE_MAX_ALLOW_PKT_PER_EVENT_RX = 1
    */
    // ATT_SetMTUSizeMax(140);
    // patch_gMTU23();
  }
  
#if(DEF_EXT_ADVSCAN_MODE&DEF_EXT_SCAN_ENABLE)
    GAP_RegisterForHCIMsgs(application_TaskID);
    
    osal_start_timerEx(application_TaskID,SBP_START_EXT_SCAN_EVT,500);
#endif 

    // Setup a delayed profile startup
    osal_set_event( application_TaskID, SBP_START_DEVICE_EVT );
}

#if(DEF_EXT_ADVSCAN_MODE&DEF_EXT_SCAN_ENABLE)
#define EXT_ADV_MSG_LIMIT 8
extern uint8_t g_advRptCnt;
uint16_t dbg_adv_rpt_cnt=0;
extern int ppp_pkt_parsing(uint8_t* din,uint8_t dlen,uint8_t* addr,uint16_t* vid,uint16_t*pktcnt,uint8_t* dout);

static uint16_t  last_rxPktCnt=0;
static void ext_adv_report_handler(hciEvt_BLEAdvPktReport_t * advPkt)
{
	if( g_advRptCnt > 0 ) g_advRptCnt--;

    uint8_t dout[31];
    uint16_t pktCnt;
    uint16_t vid=0;
    int rxlen = ppp_pkt_parsing(advPkt->devInfo->rspData,advPkt->devInfo->dataLen,advPkt->devInfo->addr,&vid,&pktCnt,dout);
    if(rxlen>0 && vid==0x0504)
    {
        if(last_rxPktCnt!=pktCnt)
        {
            LOG("rssi:%02d|%04x", advPkt->devInfo->rssi, pktCnt);
            LOG("[T %d]:", advPkt->devInfo->eventType);
            // LOG_DUMP_BYTE(advPkt->devInfo->addr, 6);
            // LOG_DUMP_BYTE(advPkt->devInfo->rspData, advPkt->devInfo->dataLen);
            // LOG_DUMP_BYTE(dout, rxlen);
        }
        last_rxPktCnt=pktCnt;
    }
    dbg_adv_rpt_cnt++;
	#if 0
    LOG("rssi:%02d|", advPkt->devInfo->rssi);
	LOG("[T %d]:",advPkt->devInfo->eventType);LOG_DUMP_BYTE(advPkt->devInfo->addr, 6);
	LOG_DUMP_BYTE(advPkt->devInfo->rspData, advPkt->devInfo->dataLen);
    #endif
}
#endif

/*********************************************************************
 * @fn      SimpleBLEPeripheral_ProcessEvent
 *
 * @brief   Simple BLE Peripheral Application Task event processor.  This function
 *          is called to process all events for the task.  Events
 *          include timers, messages and any other user defined events.
 *
 * @param   task_id  - The OSAL assigned task ID.
 * @param   events - events to process.  This is a bit map and can
 *                   contain more than one event.
 *
 * @return  events not processed
 */
//static int s_tmp_cnt;
uint16 SimpleBLEPeripheral_ProcessEvent( uint8 task_id, uint16 events )
{
    VOID task_id; // OSAL required parameter that isn't used in this function
	#ifdef _PHY_DEBUG 
		LOG("%s,%s,Line %d\n",__FILE__,__func__,__LINE__);
	#endif

    if ( events & SYS_EVENT_MSG )
    {
        uint8 *pMsg;

        if ( (pMsg = osal_msg_receive( application_TaskID )) != NULL )
        {
            simpleBLEPeripheral_ProcessOSALMsg( (osal_event_hdr_t *)pMsg );

            // Release the OSAL message
            osal_msg_deallocate( pMsg );
        }

        // return unprocessed events
        return (events ^ SYS_EVENT_MSG);
    }

    if ( events & SBP_START_DEVICE_EVT )
    {
		LOG("SBP_START_DEVICE_EVT\n");
        // Start the Device
        GAPRole_StartDevice( &sbp_PeripheralCBs );
        // Start Bond Manager
        GAPBondMgr_Register( NULL );
        gapbondMgr_regCompleteEvtCBs(simpleBLEPeripheral_processAuthCompleteMsg);

        // osal_start_reload_timer(application_TaskID,SBP_SYSINFO_EVT,1000);
        return ( events ^ SBP_START_DEVICE_EVT );
    }
  
    if ( events & SBP_PERIODIC_EVT )
    {
		    // LOG("SBP_PERIODIC_EVT\n");
        // LOG("conn_param[0].encEnabled %d\n",conn_param[0].encEnabled);
        extern llConnState_t       *conn_param;
        if(conn_param[0].active)
        {
          // LOG("connPtr->llPduLen.local.MaxTxOctets 0x%x\n",conn_param[0].llPduLen.local.MaxTxOctets)
          LOG("MTUSize %d\n",ATT_GetCurrentMTUSize(0));
#if 0          
          SimpleGATTProfile_Notify(0,ATT_GetCurrentMTUSize(0)-3,&g_notifyData[0]);
          osal_start_timerEx(application_TaskID,SBP_PERIODIC_EVT,2000);
#endif          
        }
        
        return ( events ^ SBP_PERIODIC_EVT );
    }



    if ( events & SBP_SYSINFO_EVT )
    {
        // extern void app_stack_monitor();
        // app_stack_monitor();
        /*
        	RX/TX Octets = support MTU + 8 
        	warning : consider asymmetric mtu
		*/
        LL_SetDataLengthcmd(0,27,328,204,2120);
        return ( events ^ SBP_SYSINFO_EVT );
    }
#if (DEF_EXT_ADVSCAN_MODE & DEF_EXT_SCAN_ENABLE)
    if (events & SBP_START_EXT_SCAN_EVT)
    {
        static uint8_t scan_enable = 0;
        scan_enable++;
        LOG("control ext scan = %d advrpt_cnt=%4d\n", scan_enable, dbg_adv_rpt_cnt);
        extern uint8_t g_advRptNum;
        g_advRptNum = EXT_ADV_MSG_LIMIT;
        if (scan_enable & 0x01)
        {
            dbg_adv_rpt_cnt = 0;
            HCI_LE_SetScanParamCmd(FALSE, 24, 24, 0, 0);
            HCI_LE_SetScanEnableCmd(TRUE, 0);
            osal_start_timerEx(application_TaskID, SBP_START_EXT_SCAN_EVT, 2000);
        }
        else
        {
            // HCI_LE_SetScanParamCmd(FALSE, 24, 24, 0, 0);
            HCI_LE_SetScanEnableCmd(FALSE, 0);
            osal_start_timerEx(application_TaskID, SBP_START_EXT_SCAN_EVT, 10);
        }
        
        return (events ^ SBP_START_EXT_SCAN_EVT);
    }
#endif
    return 0;
}

/*********************************************************************
 * @fn      simpleBLEPeripheral_ProcessOSALMsg
 *
 * @brief   Process an incoming task message.
 *
 * @param   pMsg - message to process
 *
 * @return  none
 */
static void simpleBLEPeripheral_ProcessOSALMsg( osal_event_hdr_t *pMsg )
{
    #ifdef _PHY_DEBUG 
		LOG("%s,%s,Line %d\n",__FILE__,__func__,__LINE__);
	#endif
    switch ( pMsg->event )
    {  
    	#ifdef _PHY_DEBUG 
			case GAP_MSG_EVENT:
				LOG("	Peripheral Bypass Message to Application\n");
				LOG("	Message Opcode 0x%X\n",((gapEventHdr_t *)pMsg)->opcode);
				if( GAP_DEVICE_INIT_DONE_EVENT == ((gapEventHdr_t *)pMsg)->opcode )
				{
					LOG("	Device Initiliaztion Done\n");
					LOG("	Please Start Application Logic...\n");
				}
			break;
#endif
        case HCI_GAP_EVENT_EVENT:
        {
            switch (pMsg->status)
            {
                case HCI_LE_EVENT_CODE:
                {
                    hciEvt_BLEEvent_Hdr_t *pPkt = (hciEvt_BLEEvent_Hdr_t *)pMsg;
        #if (DEF_EXT_ADVSCAN_MODE & DEF_EXT_SCAN_ENABLE)
                    if (pPkt->BLEEventCode == HCI_BLE_ADV_REPORT_EVENT)
                    {
                        // hciEvt_BLEAdvPktReport_t *advPkt = (hciEvt_BLEAdvPktReport_t *)pMsg;
                        ext_adv_report_handler((hciEvt_BLEAdvPktReport_t *)pMsg);
                        // if( g_advRptCnt > 0 ) g_advRptCnt--;
                    }
        #endif
                }
                break;
            }
        }
        break;
 }
}

void simpleBLEPeripheral_processAuthCompleteMsg(uint8 opcode, uint32 *pMsg)
{
    LOG("sbp Auth opcode %d\n",opcode);
    LL_SetDataLengthcmd(0,144,2120,144,2120);
   
    osal_start_reload_timer(application_TaskID,SBP_SYSINFO_EVT,200);
}

/*********************************************************************
    @fn      sbp_GapStateCB

    @brief   Notification from the profile of a state change.

    @param   newState - new state

    @return  none
*/

void sbp_GapStateCB( gaprole_States_t newState )
{
    LOG("%s, %d\n",__FUNCTION__, newState);
    uint8 update_flag=false;

    // if connected
    if ( newState == GAPROLE_STARTED )
    {
       HCI_LE_SetAdvParamCmd( 400, 400, 0,0,0,NULL,0x07,0);
           
       HCI_LE_SetAdvDataCmd(sizeof(advertData), advertData);    
       HCI_LE_SetScanRspDataCmd(sizeof(scanRspData), scanRspData);

	   HCI_LE_SetAdvEnableCmd( 1 );	  

       newState=GAPROLE_ADVERTISING;  
       update_flag=true;   
                                      
    }
    else if ( newState == GAPROLE_CONNECTED )
    {
       LOG("Connected\n");
    
       update_flag=true;   
    }
    else if ( sbp_PeripheralState == GAPROLE_CONNECTED &&
              newState != GAPROLE_CONNECTED )
    {
       LOG("disconnectd\n");
   
       
       {
          update_flag=true; 
          HCI_LE_SetAdvEnableCmd( 1 );	 
          newState=GAPROLE_ADVERTISING;     
          LOG("rst adv\n"); 
       }

    }

    sbp_PeripheralState = newState;
   
    if(update_flag==true)
    {
      update_flag=false;
      
    }

    LOG("gapstate =%d\n",sbp_PeripheralState);
}
/*********************************************************************
*********************************************************************/
