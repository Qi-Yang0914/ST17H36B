
/******************************************************************************


 *****************************************************************************/


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

#include "peripheral.h"
#include "gapbondmgr.h"
#include "hidkbd.h"
#include "hci_tl.h"
#include "gatt_uuid.h"
#include "gatt_profile_uuid.h"
#include "hidkbdservice.h"
#include "hiddev.h"
#include "singleKey_task.h"

/*********************************************************************
    MACROS
*/


/*********************************************************************
    CONSTANTS
*/

/*********************************************************************
    TYPEDEFS
*/

/*********************************************************************
    GLOBAL VARIABLES
*/

// Task ID
uint8 hidkbd_TaskID;
gaprole_States_t hidDev_PeripheralState;

uint8 advertData[] ={0x02,GAP_ADTYPE_FLAGS,(GAP_ADTYPE_FLAGS_GENERAL | GAP_ADTYPE_FLAGS_BREDR_NOT_SUPPORTED),
													// appearance
													0x03,	// length of this data
													GAP_ADTYPE_APPEARANCE,
													LO_UINT16(GAP_APPEARE_HID_GAMEPAD),
													HI_UINT16(GAP_APPEARE_HID_GAMEPAD),
							
													// service UUIDs
													0x03,	// length of this data
													GAP_ADTYPE_16BIT_COMPLETE,
													LO_UINT16(HID_SERV_UUID),
													HI_UINT16(HID_SERV_UUID)};

uint8 scanRspData[]=
{
  0x03,   // length of this data
  0x19,  //GAP_APPEARE_HID_GAMEPAD
  0xC4,
  0X03,

  // service UUIDs
  0x03,   // length of this data
  0x03,
  0X12, //HID_SERV_UUID
  0x18,
  10,
 GAP_ADTYPE_LOCAL_NAME_COMPLETE,
 'F', 'e', 'm', 't', 'o','_', 'H', 'i', 'd'
};

/*********************************************************************
    EXTERNAL VARIABLES
*/


/*********************************************************************
    EXTERNAL FUNCTIONS
*/


/*********************************************************************
    LOCAL VARIABLES
*/
#if( defined( EN_KEYBOARD_INPUT ) && EN_KEYBOARD_INPUT)
// HID Dev configuration
static hidDevCfg_t hidKbdCfg =
{
    DEFAULT_HID_IDLE_TIMEOUT,   // Idle timeout
    HID_KBD_FLAGS               // HID feature flags
};
#endif


/*********************************************************************
    LOCAL FUNCTIONS
*/
static void hidKbd_ProcessOSALMsg( osal_event_hdr_t* pMsg );
static void hidKbd_ProcessGattMsg( gattMsgEvent_t* pMsg );

typedef void (*gapbondmgr_complete_event_t)(uint8 opcode, uint32 *pMsg);
extern void gapbondMgr_regCompleteEvtCBs(gapbondmgr_complete_event_t pfnCompleteCBs);
void simpleBLEHid_processAuthCompleteMsg(uint8 opcode, uint32* pMsg);


#if  0//( defined( EN_CONSUMER_MODE ) && EN_CONSUMER_MODE)
    static void hidCCSendReport( uint8 cmd, bool keyPressed);
    void hidCCSendReportKey( uint8 cmd, bool keyPressed);
#endif

void hidDev_GapStateCB( gaprole_States_t newState );




/*********************************************************************
    PROFILE CALLBACKS
*/

static gapRolesCBs_t hidDev_PeripheralCBs =
{
    hidDev_GapStateCB,   // Profile State Change Callbacks
 
};


/*********************************************************************
    PUBLIC FUNCTIONS
*/



/*********************************************************************
    @fn      HidEmuKbd_Init

    @brief   Initialization function for the HidEmuKbd App Task.
            This is called during initialization and should contain
            any application specific initialization (ie. hardware
            initialization/setup, table initialization, power up
            notificaiton ... ).

    @param   task_id - the ID assigned by OSAL.  This ID should be
                      used to send messages and set timers.

    @return  none
*/
void HidKbd_Init( uint8 task_id )
{
    hidkbd_TaskID= task_id;
    {
    //#warning "mtu greate than 23( MAX 140 ) , config pair"
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
    // LL_ENC_AES128_Encrypt(&key[0],&data[0],&cipherData[0]);
    // Set up HID keyboard service
    HidKbd_AddService();

    extern uint8 gapBond_Bonding;
    gapBond_Bonding=true;
    

    // Setup a delayed profile startup
    osal_set_event( hidkbd_TaskID, START_DEVICE_EVT );
    //  GAP_RegisterForHCIMsgs(hidkbd_TaskID);
}

/*********************************************************************
    @fn      HidEmuKbd_ProcessEvent

    @brief   HidEmuKbd Application Task event processor.  This function
            is called to process all events for the task.  Events
            include timers, messages and any other user defined events.

    @param   task_id  - The OSAL assigned task ID.
    @param   events - events to process.  This is a bit map and can
                     contain more than one event.

    @return  events not processed
*/
uint16 HidKbd_ProcessEvent( uint8 task_id, uint16 events )
{
    VOID task_id; // OSAL required parameter that isn't used in this function
//    #ifdef _PHY_DEBUG
//      LOG("%s,%s,Line %d,events 0x%X\n",__FILE__,__func__,__LINE__,events);
//  #endif

    if ( events & SYS_EVENT_MSG )
    {
        uint8* pMsg;

        if ( (pMsg = osal_msg_receive( hidkbd_TaskID )) != NULL )
        {
            hidKbd_ProcessOSALMsg( (osal_event_hdr_t*)pMsg );
            // Release the OSAL message
            osal_msg_deallocate( pMsg );
        }

        // return unprocessed events
        return (events ^ SYS_EVENT_MSG);
    }

    if ( events & START_DEVICE_EVT )
    {
        LOG("SBP_START_DEVICE_EVT\n");
        // Start the Device
        GAPRole_StartDevice(&hidDev_PeripheralCBs);
        // Start Bond Manager
        GAPBondMgr_Register( NULL );
        gapbondMgr_regCompleteEvtCBs(simpleBLEHid_processAuthCompleteMsg);

		return ( events ^ START_DEVICE_EVT );
    }


    return 0;
}

void simpleBLEHid_processAuthCompleteMsg(uint8 opcode, uint32* pMsg)
{
    LOG("sbp Auth opcode %d\n",opcode);
    switch(opcode)
    {
        case GAP_AUTHENTICATION_COMPLETE_EVENT:
            LOG("sbp pairing success\n");
            break;
        case GAP_BOND_COMPLETE_EVENT:
        
            LOG("sbp bond success\n");
            break;
        default:
            break;
    }
    LL_SetDataLengthcmd(0,144,2120,144,2120);
}

/*********************************************************************
    @fn      hidKbd_ProcessOSALMsg

    @brief   Process an incoming task message.

    @param   pMsg - message to process

    @return  none
*/
static void hidKbd_ProcessOSALMsg( osal_event_hdr_t* pMsg )
{
    #ifdef _PHY_DEBUG
    LOG("%s,%s,Line %d,pMsg->event 0x%X\n",__FILE__,__func__,__LINE__,pMsg->event);
    #endif

    switch ( pMsg->event )
    {
    case GATT_MSG_EVENT:
        hidKbd_ProcessGattMsg( (gattMsgEvent_t*)pMsg );
        break;

    case HCI_GAP_EVENT_EVENT:
    {
        switch( pMsg->status )
        {
        case HCI_COMMAND_COMPLETE_EVENT_CODE:
        {
            #ifdef _PHY_DEBUG
            hciEvt_CmdComplete_t* pHciMsg;
            pHciMsg = (hciEvt_CmdComplete_t*)pMsg;
            LOG("	HCI_COMMAND_COMPLETE_EVENT_CODE: %x\n", pHciMsg->cmdOpcode);
            //safeToDealloc = gapProcessHCICmdCompleteEvt( (hciEvt_CmdComplete_t *)pMsg );
            #endif
        }
        break;

        case HCI_LE_EVENT_CODE:
        {
            // hciEvt_BLEConnComplete_t *pkt = (hciEvt_BLEConnComplete_t *)pMsg;
            // if( pkt->BLEEventCode == HCI_BLE_CONNECTION_COMPLETE_EVENT )
            // {
            //  osal_start_reload_timer(hidkbd_TaskID, SPP_PERIODIC_EVT, 10);//300);
            //  LOG_DEBUG("Established...\n");
            // }
        }
        break;

        case HCI_DISCONNECTION_COMPLETE_EVENT_CODE:
        {
            // hciEvt_DisconnComplete_t *pkt = (hciEvt_DisconnComplete_t *)pMsg;
            // if( pkt->hdr.status == HCI_DISCONNECTION_COMPLETE_EVENT_CODE )
            // {
            //  LOG_DEBUG("Disconnect...\n")
            //  osal_stop_timerEx(hidkbd_TaskID, SPP_PERIODIC_EVT);
            //  HCI_LE_SetAdvEnableCmd(TRUE);
            // }
        }
        break;

        default:
            LOG_DEBUG("unKnown pMsg->status 0x%X\n",pMsg->status);
            break;
        }
    }
    break;

    case HCI_DATA_EVENT:
    {
        // if( app_mode == APP_2P4G_MODE)
        // {
        //  hciDataEvent_t *msg  = (hciDataEvent_t *)pMsg;
        //  osal_bm_free(msg->pData);
        // }
    }

    default:
        break;
    }
}


/*********************************************************************
    @fn      hidKbd_ProcessGattMsg

    @brief   Process GATT messages

    @return  none
*/
static void hidKbd_ProcessGattMsg( gattMsgEvent_t* pMsg )
{
	#ifdef _PHY_DEBUG 
		LOG("%s,%s,Line %d\n",__FILE__,__func__,__LINE__);
	#endif
}

#if  0//( defined( EN_CONSUMER_MODE ) && EN_CONSUMER_MODE)
/*********************************************************************
    @fn      hidCCSendReport

    @brief   Build and send a HID Consumer Control report.

    @param   cmd - bitmap of left/middle/right mouse button states
    @param   keyPressed - amount of mouse movement along X-axis in units of Mickeys (1/200 of an inch)

    @return  none
*/
static void hidCCSendReport( uint8 cmd, bool keyPressed)
{
    // Only send the report if something meaningful to report
   
        uint8 buf[HID_CC_IN_RPT_LEN] = {0};

        // No need to include Report Id
        if ( keyPressed )
        {
            buf[0]=0XEA;
            buf[1]=0X00;
        }
        else
        {
            buf[0]=0X00;
            buf[0]=0X00;
        }

        HidDev_Report( HID_RPT_ID_CC_IN, HID_REPORT_TYPE_INPUT,
                       HID_CC_IN_RPT_LEN, buf );
   
}
void hidCCSendReportKey( uint8 cmd, bool keyPressed)
{
    uint8 buf[1] = {0};

    if(keyPressed==1)
    {
        buf[0]=cmd;
    }
    else
        buf[0]=0;

    HidDev_Report( HID_RPT_ID_CC_IN, HID_REPORT_TYPE_INPUT,
                   1, buf );
}
#endif

/*********************************************************************
    @fn      hidDev_GapStateCB

    @brief   Notification from the profile of a state change.

    @param   newState - new state

    @return  none
*/
void hidDev_GapStateCB( gaprole_States_t newState )
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
    else if ( hidDev_PeripheralState == GAPROLE_CONNECTED &&
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

    hidDev_PeripheralState = newState;
   
    if(update_flag==true)
    {
      update_flag=false;
      
    }

    LOG("gapstate =%d\n",hidDev_PeripheralState);
}

/*********************************************************************

*********************************************************************/
