


/*********************************************************************
    INCLUDES
*/
#include "rom_sym_def.h"
#include "OSAL.h"
#include "gatt.h"
#include "hci.h"
#include "gapgattserver.h"
#include "gattservapp.h"
#include "gatt_uuid.h"
#include "gatt_profile_uuid.h"
#include "linkdb.h"
#include "peripheral.h"
#include "gapbondmgr.h"
#include "devinfoservice.h"
#include "battservice.h"
#include "hiddev.h"
// #include "hidkbd.h"
#include "rom_sym_def.h"
#include "global_config.h"
#include "ll_def.h"
#include "hidkbdservice.h"
#include "log.h"

/*********************************************************************
    MACROS
*/
// Task Events
#define START_DEVICE_EVT                      0x0001

/*********************************************************************
    CONSTANTS
*/

#define HID_DEV_DATA_LEN                      8

#ifdef HID_DEV_RPT_QUEUE_LEN
    #define HID_DEV_REPORT_Q_SIZE               (HID_DEV_RPT_QUEUE_LEN+1)
#else
    #define HID_DEV_REPORT_Q_SIZE               (10+1)
#endif

/*********************************************************************
    TYPEDEFS
*/
typedef struct
{
    uint8 id;
    uint8 type;
    uint8 len;
    uint8 data[HID_DEV_DATA_LEN];
} hidDevReport_t;

/*********************************************************************
    GLOBAL VARIABLES
*/
// Task ID
uint8 hidDevTaskId;

/*********************************************************************
    EXTERNAL VARIABLES
*/
extern uint16 gapRole_ConnectionHandle;

extern gattAttrType_t gapService;
extern uint8    gapDeviceNameCharProps;
extern uint8    gapDeviceName[GAP_DEVICE_NAME_LEN+1];
extern uint8    gapAppearanceCharProps;
extern uint16   gapAppearance;

extern gattAttrType_t gattService;
extern uint8 serviceChangedCharProps;
extern uint16 serviceChange_indCharCfg;

extern gattAttrType_t devInfoService;
extern uint8    devInfoPnpIdProps;
extern uint8    devInfoPnpId[DEVINFO_PNP_ID_LEN];
extern uint8    devInfoPnpIdUUID[ATT_BT_UUID_SIZE];

// HID report mapping table
extern hidRptMap_t	hidRptMap[];
extern uint16 hidReportCCInClientCharCfg;
extern gattAttribute_t hidAttrTbl[];

/*********************************************************************
    EXTERNAL FUNCTIONS
*/
extern gattServiceCBs_t gapServiceCBs;
extern gattServiceCBs_t gattServiceCBs;
extern gattServiceCBs_t devInfoCBs;


/*********************************************************************
    LOCAL VARIABLES
*/
gattAttribute_t gapAttrTbl[] = {
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

gattAttribute_t devInfoAttrTbl[] = {
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
		GATT_PERMIT_ENCRYPT_READ,
		0,
		(uint8 *) devInfoPnpId
	}
};

/*********************************************************************
 * PROFILE CALLBACKS
 */
// static uint8 ggs_ReadAttrCB( uint16 connHandle, gattAttribute_t *pAttr,
//                              uint8 *pValue, uint8 *pLen, uint16 offset, uint8 maxLen );
// // GAP Service Callbacks
// CONST gattServiceCBs_t m_gapServiceCBs =
// {
//   ggs_ReadAttrCB,  // Read callback function pointer
//   NULL, 			// Write callback function pointer
//   NULL             // Authorization callback function pointer
// };

/*********************************************************************
    LOCAL FUNCTIONS
*/
static void hidDev_ProcessOSALMsg( osal_event_hdr_t* pMsg );
static void hidDevProcessGattMsg( gattMsgEvent_t* pMsg );
/*********************************************************************
 * @fn          ggs_ReadAttrCB
 *
 * @brief       Read an attribute.
 *
 * @param       connHandle - connection message was received on
 * @param       pAttr - pointer to attribute
 * @param       pValue - pointer to data to be read
 * @param       pLen - length of data to be read
 * @param       offset - offset of the first octet to be read
 * @param       maxLen - maximum length of data to be read
 *
 * @return      Success or Failure
 */
// static uint8 ggs_ReadAttrCB( uint16 connHandle, gattAttribute_t *pAttr,
//                              uint8 *pValue, uint8 *pLen, uint16 offset, uint8 maxLen )
// {
//   uint16 uuid;
//   bStatus_t status = SUCCESS;

//   VOID connHandle; // Not needed for now!

//   // Make sure it's not a blob operation
//   if ( offset > 0 )
//   {
//     return ( ATT_ERR_ATTR_NOT_LONG );
//   }

//   if ( pAttr->type.len == ATT_BT_UUID_SIZE )
//   {
//     // 16-bit UUID
//     uuid = BUILD_UINT16( pAttr->type.uuid[0], pAttr->type.uuid[1]);
//     switch ( uuid )
//     {
//       case DEVICE_NAME_UUID:
//         {
//           *pLen = sizeof(HID_BLE_NAME);
//           VOID osal_memcpy( pValue, gapDeviceName, *pLen );
//         }
//         break;

//       case APPEARANCE_UUID:
//         {
// //          uint16 value = *((uint16 *)(pAttr->pValue));
//           *pLen = 2;
//           pValue[0] = LO_UINT16( GAP_APPEARE_HID_MOUSE );
//           pValue[1] = HI_UINT16( GAP_APPEARE_HID_MOUSE );
//         }
//         break;

//       default:
//         // Should never get here!
//         *pLen = 0;
//         status = ATT_ERR_INVALID_HANDLE;
//         break;
//     }
//   }
//   else
//   {
//     // 128-bit UUID
//     *pLen = 0;
//     status = ATT_ERR_INVALID_HANDLE;
//   }

//   return ( status );
// }

/*********************************************************************
    PUBLIC FUNCTIONS
*/

/*********************************************************************
    @fn      HidDev_Init

    @brief   Initialization function for the Hid Dev Task.
            This is called during initialization and should contain
            any application specific initialization (ie. hardware
            initialization/setup, table initialization, power up
            notificaiton ... ).

    @param   task_id - the ID assigned by OSAL.  This ID should be
                      used to send messages and set timers.

    @return  none
*/
void HidDev_Init( uint8 task_id )
{
    hidDevTaskId = task_id;
	#ifdef _PHY_DEBUG
		LOG("%s,%s,Line %d\n",__FILE__,__func__,__LINE__);
	#endif
    // Set up services
    #if( defined( SERV_GGS ) && SERV_GGS )
	    // GGS_AddService( );            // GAP
        GATTServApp_RegisterService( gapAttrTbl, GATT_NUM_ATTRS( gapAttrTbl ),
		                                  &gapServiceCBs );
	#endif
	#if( defined( SERV_GATT_SERV ) && SERV_GATT_SERV )
	    // GATTServApp_AddService( );    // GATT attributes
        GATTServApp_RegisterService( gattAttrTbl, GATT_NUM_ATTRS( gattAttrTbl ),
	                              		&gattServiceCBs );
    #endif
	#if( defined( SERV_DEV_INFO ) && SERV_DEV_INFO )
	    // DevInfo_AddService();                           // Device Information Service
        GATTServApp_RegisterService( devInfoAttrTbl,
                                      GATT_NUM_ATTRS( devInfoAttrTbl ),
                                      &devInfoCBs );
    #endif
	#if( defined( SERV_BATT_SERV ) && SERV_BATT_SERV )
	    Batt_AddService();
    #endif

    // Setup a delayed profile startup
    osal_set_event( hidDevTaskId, START_DEVICE_EVT );
}

/*********************************************************************
    @fn      HidDev_ProcessEvent

    @brief   Hid Dev Task event processor.  This function
            is called to process all events for the task.  Events
            include timers, messages and any other user defined events.

    @param   task_id  - The OSAL assigned task ID.
    @param   events - events to process.  This is a bit map and can
                     contain more than one event.

    @return  events not processed
*/
uint16 HidDev_ProcessEvent( uint8 task_id, uint16 events )
{
    VOID task_id; // OSAL required parameter that isn't used in this function
    #ifdef _PHY_DEBUG
		LOG("%s,%s,Line %d,events 0x%X\n",__FILE__,__func__,__LINE__,events);
	#endif

    if ( events & SYS_EVENT_MSG )
    {
        uint8* pMsg;

        if ( (pMsg = osal_msg_receive( hidDevTaskId )) != NULL )
        {
            hidDev_ProcessOSALMsg( (osal_event_hdr_t*)pMsg );
            // Release the OSAL message
            osal_msg_deallocate( pMsg );
        }

        // return unprocessed events
        return (events ^ SYS_EVENT_MSG);
    }
    return 0;
}

/*********************************************************************
    @fn      HidDev_Report

    @brief   Send a HID report.

    @param   id - HID report ID.
    @param   type - HID report type.
    @param   len - Length of report.
    @param   pData - Report data.

    @return  None.
*/
uint8 HidDev_Report( uint8 id, uint8 type, uint8 len, uint8* pData )
{
    attHandleValueNoti_t Notify;
    uint8 ret=FAILURE;

	#if( defined(EN_CONSUMER_MODE) && EN_CONSUMER_MODE)
		if( (gapRole_ConnectionHandle != INVALID_CONNHANDLE ) && \
			( HID_RPT_ID_CC_IN == id )  )//&& (hidReportCCInClientCharCfg & GATT_CLIENT_CFG_NOTIFY )
		{
			Notify.handle = hidAttrTbl[HID_CONSUMER_TABLE_IDX].handle;
			Notify.len = len;
			osal_memcpy(Notify.value, pData, len);
			ret=GATT_Notification( gapRole_ConnectionHandle, &Notify, FALSE );
		}
        else
	#endif
    	if( (gapRole_ConnectionHandle != INVALID_CONNHANDLE ) && \
			( HID_RPT_ID_MOUSE_IN == id ) )
	 	{
#if EN_MOUSE_REPORT            
			Notify.handle = hidAttrTbl[HID_REPORT_MOUSE_IN_IDX].handle;
			Notify.len = len;
			osal_memcpy(Notify.value, pData, len);
			ret=GATT_Notification( gapRole_ConnectionHandle, &Notify, FALSE );
#endif             
		}

        return ret;
}


uint8 HidDev_send_consumer_report(uint8 *p_report, uint8 len)
{
     uint8 ret=FAILURE;
    uint8 buf[HID_CC_IN_RPT_LEN] = {0};
    if(len==HID_CC_IN_RPT_LEN)
    {
      buf[0] = p_report[0];
      buf[1] = p_report[1];
      ret=HidDev_Report(HID_RPT_ID_CC_IN, HID_REPORT_TYPE_INPUT, HID_CC_IN_RPT_LEN, buf);
    }
    
   return ret;
}

/*********************************************************************
    @fn      HidDev_Close

    @brief   Close the connection or stop advertising.

    @return  None.
*/
void HidDev_Close( void )
{
    #ifdef _PHY_DEBUG
		LOG("%s,%s,Line %d\n",__FILE__,__func__,__LINE__);
	#endif
}

/*********************************************************************
    @fn          HidDev_ReadAttrCB

    @brief       HID Dev attribute read callback.

    @param       connHandle - connection message was received on
    @param       pAttr - pointer to attribute
    @param       pValue - pointer to data to be read
    @param       pLen - length of data to be read
    @param       offset - offset of the first octet to be read
    @param       maxLen - maximum length of data to be read
    @param       method - type of read message

    @return      SUCCESS, blePending or Failure
*/
uint8 HidDev_ReadAttrCB( uint16 connHandle, gattAttribute_t* pAttr,
                         uint8* pValue, uint8* pLen, uint16 offset, uint8 maxLen )
{
    bStatus_t   status = SUCCESS;
//    hidRptMap_t* pRpt;
    uint16 uuid = BUILD_UINT16( pAttr->type.uuid[0], pAttr->type.uuid[1]);

	#ifdef _PHY_DEBUG
		LOG("%s,%s,Line %d,uuid 0x%X\n",__FILE__,__func__,__LINE__,uuid);
	#endif
    // Only report map is long
    if ( offset > 0 && uuid != REPORT_MAP_UUID )
    {
        return ( ATT_ERR_ATTR_NOT_LONG );
    }
    if ( uuid == REPORT_UUID ||
            uuid == BOOT_KEY_INPUT_UUID ||
            uuid == BOOT_KEY_OUTPUT_UUID ||
            uuid == BOOT_MOUSE_INPUT_UUID )
    {
		// TODO
        // find report ID in table
//        if ( (pRpt = hidDevRptByHandle(pAttr->handle)) != NULL )
//        {
//            // execute report callback
////            status  = (*pHidDevCB->reportCB)( pRpt->id, pRpt->type, uuid,
////                                              HID_DEV_OPER_READ, pLen, pValue );
//        }
//        else
//        {
//            *pLen = 0;
//        }
    }
    else if ( uuid == REPORT_MAP_UUID )
    {
        // verify offset
        if ( offset >= hidReportMapLen )
        {
            status = ATT_ERR_INVALID_OFFSET;
        }
        else
        {
            // determine read length
            *pLen = MIN( ATT_GetCurrentMTUSize(connHandle)-1, (hidReportMapLen - offset) );
            // copy data
            osal_memcpy( pValue, pAttr->pValue + offset, *pLen );
        }
    }
    else if ( uuid == HID_INFORMATION_UUID )
    {
        *pLen = HID_INFORMATION_LEN;
		if( linkDB_State( connHandle ,LINK_ENCRYPTED) == FALSE )
			status = ATT_ERR_INSUFFICIENT_ENCRYPT;
        osal_memcpy( pValue, pAttr->pValue, HID_INFORMATION_LEN );
    }
    else if ( uuid == GATT_REPORT_REF_UUID )
    {
        *pLen = HID_REPORT_REF_LEN;
        osal_memcpy( pValue, pAttr->pValue, HID_REPORT_REF_LEN );
    }
    else if ( uuid == PROTOCOL_MODE_UUID )
    {
        *pLen = HID_PROTOCOL_MODE_LEN;
        pValue[0] = pAttr->pValue[0];
    }
    else if ( uuid == GATT_EXT_REPORT_REF_UUID )
    {
        *pLen = HID_EXT_REPORT_REF_LEN;
        osal_memcpy( pValue, pAttr->pValue, HID_EXT_REPORT_REF_LEN );
    }
    return ( status );
}

/*********************************************************************
    @fn      HidDev_WriteAttrCB

    @brief   HID Dev attribute read callback.

    @param   connHandle - connection message was received on
    @param   pAttr - pointer to attribute
    @param   pValue - pointer to data to be written
    @param   len - length of data
    @param   offset - offset of the first octet to be written

    @return  Success or Failure
*/
bStatus_t HidDev_WriteAttrCB( uint16 connHandle, gattAttribute_t* pAttr,
                              uint8* pValue, uint8 len, uint16 offset )
{
    bStatus_t status = SUCCESS;
	#ifdef _PHY_DEBUG
		LOG("%s,%s,Line %d,offset %d\n",__FILE__,__func__,__LINE__,offset);
	#endif

    uint16 uuid = BUILD_UINT16( pAttr->type.uuid[0], pAttr->type.uuid[1]);
	#ifdef _PHY_DEBUG
		LOG("	UUID 0x%X\n",uuid);
	#endif
    if ( uuid == REPORT_UUID || uuid == BOOT_KEY_OUTPUT_UUID )
    {
        // find report ID in table
//        if ((pRpt = hidDevRptByHandle(pAttr->handle)) != NULL)
//        {
//            // execute report callback
////            status  = (*pHidDevCB->reportCB)( pRpt->id, pRpt->type, uuid,
////                                              HID_DEV_OPER_WRITE, &len, pValue );
//        }
    }
	#if( defined( HID_SUP_CTRL_POINT_CHAR ) && HID_SUP_CTRL_POINT_CHAR)
    else if ( uuid == HID_CTRL_PT_UUID )
    {
    	#ifdef _PHY_DEBUG
			LOG("	HID_CTRL_PT_UUID:ENTER OR EXIT SUSPEND\n");
		#endif
    }
	#endif

    else if ( uuid == GATT_CLIENT_CHAR_CFG_UUID )
    {
    	#ifdef _PHY_DEBUG
			uint16 charCfg = BUILD_UINT16( pValue[0], pValue[1] );
			LOG("	GATT_CLIENT_CHAR_CFG_UUID:status %d,charCfg %d\n",status,charCfg);
		#endif

        if ( status == SUCCESS )
        {
			osal_memcpy(pAttr->pValue,pValue,2);
			#ifdef _PHY_DEBUG
				LOG("	hidReportCCInClientCharCfg %d\n",hidReportCCInClientCharCfg);
			#endif
        }
    }
    else if ( uuid == PROTOCOL_MODE_UUID )
    {
        if ( len == HID_PROTOCOL_MODE_LEN )
        {
            if ( pValue[0] == HID_PROTOCOL_MODE_BOOT ||
                    pValue[0] == HID_PROTOCOL_MODE_REPORT )
            {
                pAttr->pValue[0] = pValue[0];
                // execute HID app event callback
//                (*pHidDevCB->evtCB)( (pValue[0] == HID_PROTOCOL_MODE_BOOT) ?
//                                     HID_DEV_SET_BOOT_EVT : HID_DEV_SET_REPORT_EVT );
            }
            else
            {
                status = ATT_ERR_INVALID_VALUE;
            }
        }
        else
        {
            status = ATT_ERR_INVALID_VALUE_SIZE;
        }
    }
    return ( status );
}

/*********************************************************************
    @fn      hidDev_ProcessOSALMsg

    @brief   Process an incoming task message.

    @param   pMsg - message to process

    @return  none
*/
static void hidDev_ProcessOSALMsg( osal_event_hdr_t* pMsg )
{
    switch ( pMsg->event )
    {
    case GATT_MSG_EVENT:
        hidDevProcessGattMsg( (gattMsgEvent_t*) pMsg );
        break;

    default:
        break;
    }
}

/*********************************************************************
    @fn      hidDevProcessGattMsg

    @brief   Process GATT messages

    @return  none
*/
static void hidDevProcessGattMsg( gattMsgEvent_t* pMsg )
{
}


/*********************************************************************
*********************************************************************/
