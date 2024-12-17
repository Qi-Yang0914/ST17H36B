
/**************************************************************************************************
  Filename:       gapgattserver.c
  Revised:         
  Revision:        

  Description:    GAP Attribute Server


**************************************************************************************************/

/*********************************************************************
 * INCLUDES
 */
#include "bcomdef.h"
#include "OSAL.h"
#include "gap.h"
#include "gapgattserver.h"
#include "att.h"
#include "gatt.h"
#include "gatt_uuid.h"
#include "gattservapp.h"

/*********************************************************************
 * MACROS
 */

/*********************************************************************
 * CONSTANTS
 */

/*********************************************************************
 * TYPEDEFS
 */

/*********************************************************************
 * GLOBAL VARIABLES
 */

/*********************************************************************
 * EXTERNAL VARIABLES
 */

/*********************************************************************
 * EXTERNAL FUNCTIONS
 */

/*********************************************************************
 * LOCAL VARIABLES
 */

/*********************************************************************
 * Profile Attributes - variables
 */

// GAP Service
CONST gattAttrType_t gapService = { ATT_BT_UUID_SIZE, gapServiceUUID };

// Device Name Characteristic Properties
 uint8 gapDeviceNameCharProps = GATT_PROP_READ;

// Device Name attribute (0 - 248 octets) - extra octet for null-terminate char
__attribute__((section(".stackbss"))) uint8 gapDeviceName[GAP_DEVICE_NAME_LEN+1];// = { 'p','i','c','o' };
__attribute__((section(".stackbss"))) uint8 gapDeviceName_len;

// Appearance Characteristic Properties
 uint8 gapAppearanceCharProps = GATT_PROP_READ;

// Appearance attribute (2-octet enumerated value as defined by Bluetooth Assigned Numbers document)
 uint16 gapAppearance = GAP_APPEARE_UNKNOWN;


/*********************************************************************
 * Profile Attributes - Table
 */

// GAP Attribute Table
#if 0
static gattAttribute_t gapAttrTbl[] =
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
#endif
/*********************************************************************
 * LOCAL FUNCTIONS
 */
//static void ggs_SetAttrWPermit( uint8 wPermit, uint8 *pPermissions, uint8 *pCharProps );

/*********************************************************************
 * PUBLIC FUNCTIONS
 */
// GGS Callback functions
static uint8 ggs_ReadAttrCB( uint16 connHandle, gattAttribute_t *pAttr,
                             uint8 *pValue, uint8 *pLen, uint16 offset, uint8 maxLen );

/*********************************************************************
 * PROFILE CALLBACKS
 */
// GAP Service Callbacks
CONST gattServiceCBs_t gapServiceCBs =
{
  ggs_ReadAttrCB,  // Read callback function pointer
  NULL, 			// Write callback function pointer
  NULL             // Authorization callback function pointer
};

/*********************************************************************
 * LOCAL FUNCTION PROTOTYPES
 */

/*********************************************************************
 * @fn      GGS_AddService
 *
 * @brief   Add function for the GAP GATT Service.
 *
 * @param   services - services to add. This is a bit map and can
 *                     contain more than one service.
 *
 * @return  SUCCESS: Service added successfully.
 *          INVALIDPARAMETER: Invalid service field.
 *          FAILURE: Not enough attribute handles available.
 *          bleMemAllocError: Memory allocation error occurred.
 */
#if 0
bStatus_t GGS_AddService(    )
{
	uint8 status = SUCCESS;
	// Register GAP attribute list and CBs with GATT Server Server App
	status = GATTServApp_RegisterService( gapAttrTbl, GATT_NUM_ATTRS( gapAttrTbl ),
		                                  &gapServiceCBs );

	return ( status );
}
#endif
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
static uint8 ggs_ReadAttrCB( uint16 connHandle, gattAttribute_t *pAttr,
                             uint8 *pValue, uint8 *pLen, uint16 offset, uint8 maxLen )
{
  uint16 uuid;
  bStatus_t status = SUCCESS;

  VOID connHandle; // Not needed for now!

  // Make sure it's not a blob operation
  if ( offset > 0 )
  {
    return ( ATT_ERR_ATTR_NOT_LONG );
  }

  if ( pAttr->type.len == ATT_BT_UUID_SIZE )
  {
    // 16-bit UUID
    uuid = BUILD_UINT16( pAttr->type.uuid[0], pAttr->type.uuid[1]);
    switch ( uuid )
    {
      case DEVICE_NAME_UUID:
        {	
          *pLen = gapDeviceName_len;
          VOID osal_memcpy( pValue, gapDeviceName, gapDeviceName_len );
        }
        break;

      case APPEARANCE_UUID:
        {
//          uint16 value = *((uint16 *)(pAttr->pValue));

          *pLen = 2;
          pValue[0] = LO_UINT16( GAP_APPEARE_HID_GAMEPAD );
          pValue[1] = HI_UINT16( GAP_APPEARE_HID_GAMEPAD );
        }
        break;

      default:
        // Should never get here!
        *pLen = 0;
        status = ATT_ERR_INVALID_HANDLE;
        break;
    }
  }
  else
  {
    // 128-bit UUID
    *pLen = 0;
    status = ATT_ERR_INVALID_HANDLE;
  }

  return ( status );
}

/*********************************************************************
*********************************************************************/
