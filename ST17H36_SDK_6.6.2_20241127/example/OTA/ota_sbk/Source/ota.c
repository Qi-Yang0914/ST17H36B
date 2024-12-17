
/**************************************************************************************************
    Filename:       ota_if.c
    Revised:        $Date $
    Revision:       $Revision $

    OTA for internal flash

**************************************************************************************************/

/*********************************************************************
    INCLUDES
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
#include "ota.h"
#include "ota_protocol.h"
#include "log.h"
#include "hci_tl.h"
#include "gatt_uuid.h"
#include "gap.h"




extern  gattAttrType_t devInfoService;
extern uint8 devInfoPnpIdProps;
extern uint8 devInfoPnpId[DEVINFO_PNP_ID_LEN];
extern uint8 devInfoPnpIdUUID[ATT_BT_UUID_SIZE];
extern gattAttrType_t gapService;
extern uint8 gapDeviceNameCharProps;
extern uint8 gapDeviceName[GAP_DEVICE_NAME_LEN+1];
extern  uint8 gapAppearanceCharProps;
extern gattAttrType_t gattService;
extern uint8 serviceChangedCharProps;
extern uint16 serviceChange_indCharCfg;
extern gattServiceCBs_t gapServiceCBs;
extern gattServiceCBs_t gattServiceCBs;
extern gattServiceCBs_t devInfoCBs;
uint16 gapAppearance;

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

extern void ATT_SetMTUSizeMax(uint16 mtuSize);
extern void patch_gMTU23( void );

/*********************************************************************
    EXTERNAL FUNCTIONS
*/

/*********************************************************************
    LOCAL VARIABLES
*/
uint8 ota_TaskID;   // Task ID for internal task/event processing

static gaprole_States_t gapProfileState ;
static uint8 advertData[] =
{
    // flags
    0x02,
    GAP_ADTYPE_FLAGS,
    GAP_ADTYPE_FLAGS_GENERAL | GAP_ADTYPE_FLAGS_BREDR_NOT_SUPPORTED,

    11, //Manufacture data
    GAP_ADTYPE_MANUFACTURER_SPECIFIC,
    04, //company ID 0504 phylus inc
    05,
    0, //here and below is mac address
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};


uint8 scanRspData[]=
{
 9,
 GAP_ADTYPE_LOCAL_NAME_COMPLETE,
 'P', 'P', 'l', 'u', 's','O', 'T', 'A'
};

// Device name attribute value
static uint8 attDeviceName[GAP_DEVICE_NAME_LEN] = "PPlusOTA";

// GAP connection handle
static uint16 gapConnHandle;

/*********************************************************************
    LOCAL FUNCTIONS
*/
static void ota_ProcessOSALMsg(osal_event_hdr_t* pMsg);
static void ota_GapStateCB(gaprole_States_t newState);

/*********************************************************************
    PROFILE CALLBACKS
*/

// GAP Role Callbacks
static gapRolesCBs_t ota_PeripheralCB =
{
    ota_GapStateCB, // Profile State Change Callbacks
    NULL            // When a valid RSSI is read from controller
};

uint16 otaApp_ProcessEvent(uint8 task_id, uint16 events)
{
    VOID task_id; // OSAL required parameter that isn't used in this function
    //LOG("otaApp_ProcessEvent: 0x%x\n",events);

    if (events & SYS_EVENT_MSG)
    {
        uint8* pMsg;

        if ((pMsg = osal_msg_receive(ota_TaskID)) != NULL)
        {
            ota_ProcessOSALMsg((osal_event_hdr_t*)pMsg);
            // Release the OSAL message
            VOID osal_msg_deallocate(pMsg);
        }

        // return unprocessed events
        return (events ^ SYS_EVENT_MSG);
    }

    if (events & START_DEVICE_EVT)
    {
    	LOG("OTA_START_DEVICE_EVT\n");
        // Start the Device
        GAPRole_StartDevice(&ota_PeripheralCB);
        // Register with bond manager after starting device
        //GAPBondMgr_Register( (gapBondCBs_t *) &ota_BondCB );
        return (events ^ START_DEVICE_EVT);
    }

    if (events & OTA_TIMER_EVT)
    {
    	LOG("ota timer\n");
        otaProtocol_TimerEvt();
//		osal_start_timerEx(ota_TaskID,OTA_TERMINATE_EVT,2000);
        return (events ^ OTA_TIMER_EVT);
    }
	if (events & OTA_TERMINATE_EVT)
    {
    	LOG("fireware terminate\n");
		extern bStatus_t GAPRole_TerminateConnection(void);
        GAPRole_TerminateConnection();
        return (events ^ OTA_TERMINATE_EVT);
    }
	

    // Discard unknown events
    return 0;
}
#if 0

static void ota_flow_ctrl(uint16 mtu)
{
    ll_pdu_length_ctrl_t pdu;
    extern void LL_PLUS_GetCurrentPduDle(uint8_t connId, ll_pdu_length_ctrl_t* ppdu);
    LL_PLUS_GetCurrentPduDle(/*connId*/0,&pdu);
    LOG("LE CHECK tx %02x rx %02x\n",pdu.MaxTxOctets,pdu.MaxRxOctets);
    //RX_FLOW_CTRL

    if(pdu.MaxRxOctets<mtu)
    {
        GATT_SetHostToAppFlowCtrl(8*1024,1);
        extern uint16 numHostBufs;
        extern uint8 ctrlToHostEnable;
        LOG("HCI HOST Buffsize Set en %d buf %d\n",ctrlToHostEnable,numHostBufs);
    }
}

static void on_gatt_mtu_req(attExchangeMTUReq_t* preq)
{
    uint16_t mtu = preq->clientRxMTU;

    if (mtu > g_ATT_MTU_SIZE_MAX)
        mtu = g_ATT_MTU_SIZE_MAX;

    otaProtocol_mtu(mtu);
    LOG("MTU size req: %d | set: %d\n", preq->clientRxMTU, mtu);
//    ota_flow_ctrl(mtu);
}

static void ota_ProcessGATTMsg(gattMsgEvent_t* pMsg)
{
    //LOG("[GATT] %x\n",pMsg->method);
    if (pMsg->hdr.status == bleTimeout)
    {
        LOG("[GATT TO] %x\n", pMsg->method);
        return;
    }

    switch (pMsg->method)
    {
    case ATT_EXCHANGE_MTU_REQ:
        on_gatt_mtu_req(&(pMsg->msg.exchangeMTUReq));
        break;

    default:
        break;
    }
}
#endif

static void ota_ProcessOSALMsg(osal_event_hdr_t* pMsg)
{
}

static void ota_GapStateCB(gaprole_States_t newState)
{
    LOG("ota_GapStateCB: %d\n", newState);
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
	   LL_SetDataLengthcmd(0,27,328,204,2120);
	   
    
       update_flag=true;   
    }
    else if ( gapProfileState == GAPROLE_CONNECTED &&
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

    gapProfileState = newState;
   
    if(update_flag==true)
    {
      update_flag=false;
      
    }
	LOG("gapstate =%d\n",gapProfileState);
}

void otaApp_Init(uint8 task_id)
{
    ota_TaskID = task_id;
	LOG("otaApp_Init\n");

	volatile uint8_t* pubaddr = (volatile uint8_t*)0x00028270;

	//update public address
    if (otaProtocol_address_plus())
    {
        pubaddr[0]++;
    }
	
	{
		uint8_t* pmac_field = advertData + sizeof(advertData) - 8;
		osal_memcpy(pmac_field, (const void*)pubaddr, B_ADDR_LEN);
	}
	#if 0
	GATTServApp_RegisterService( gapAttrTbl, GATT_NUM_ATTRS( gapAttrTbl ),
		                                  &gapServiceCBs );
	// GATTServApp_AddService( gattAttrTbl);    // GATT attributes
	// Register GATT attribute list and CBs with GATT Server Application
	GATTServApp_RegisterService( gattAttrTbl, GATT_NUM_ATTRS( gattAttrTbl ),
	                              		&gattServiceCBs );
	#endif

	// DevInfo_AddService(devInfoAttrTbl);                           // Device Information Service
	otaProtocol_init(ota_TaskID, OTA_TIMER_EVT);
	//gattServApp_RegisterCB(ota_ProcessGATTMsg);
	ATT_SetMTUSizeMax(139);
	patch_gMTU23();
	
    osal_set_event(ota_TaskID, START_DEVICE_EVT);
}

/*********************************************************************
*********************************************************************/
