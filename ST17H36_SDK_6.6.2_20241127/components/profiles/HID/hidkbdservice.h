


#ifndef HIDKBDSERVICE_H
#define HIDKBDSERVICE_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
    INCLUDES
*/

/*********************************************************************
    CONSTANTS
*/

/*********************************************************************
    MACROS
*/
// SUPPORT FUNCTION
#define HID_SUP_CTRL_POINT_CHAR			1
#define EN_CONSUMER_MODE  				1
#define EN_MOUSE_REPORT 				1
#define EN_KEYBOARD_INPUT				0
#define EN_KEYBOARD_OUTPUT				0
#define EN_FEATURE_REPORT				1

#define HID_CONSUMER_TABLE_IDX			13
// #define HID_MOUSE_TABLE_IDX			    8


// HID Report IDs for the service
#define HID_RPT_ID_MOUSE_IN     1  // Mouse input report ID
#define HID_RPT_ID_KEY_IN       2  // Keyboard input report ID
#define HID_RPT_ID_CC_IN        3

#define HID_RPT_ID_LED_OUT      0  // LED output report ID
#define HID_RPT_ID_FEATURE		0  // Feature report ID

// Number of HID reports defined in the service
#define HID_NUM_REPORTS          9//7

#if EN_CONSUMER_MODE
    // HID consumer control input report length
    #define HID_CC_IN_RPT_LEN                     2//2//1

#endif

// HID feature flags
#define HID_KBD_FLAGS             (HID_FLAGS_REMOTE_WAKE|HID_FLAGS_NORMALLY_CONNECTABLE)

/*********************************************************************
    TYPEDEFS
*/
// Attribute index enumeration-- these indexes match array elements above
enum
{
	HID_SERVICE_IDX,				// HID Service
//	  HID_INCLUDED_SERVICE_IDX, 	  // Included Service
#if 1
	HID_INFO_DECL_IDX,				// HID Information characteristic declaration
	HID_INFO_IDX,					// HID Information characteristic
#endif

	HID_PROTOCOL_MODE_DECL_IDX, 	// HID Protocol Mode characteristic declaration
	HID_PROTOCOL_MODE_IDX,			// HID Protocol Mode characteristic

#if EN_MOUSE_REPORT
	HID_REPORT_MOUSE_IN_DECL_IDX,	// HID Report characteristic, mouse input declaration
	HID_REPORT_MOUSE_IN_IDX,		 // HID Report characteristic, mouse input
	HID_REPORT_MOUSE_IN_CCCD_IDX,	 // HID Report characteristic client characteristic configuration
	HID_REPORT_REF_MOUSE_IN_IDX,	 // HID Report Reference characteristic descriptor, mouse input
    HID_BOOT_MOUSE_IN_DECL_IDX,     // HID Boot Mouse Input Report declaration
    HID_BOOT_MOUSE_IN_IDX,          // HID Boot Mouse Input Report
    HID_BOOT_MOUSE_IN_CCCD_IDX,     // HID Boot Mouse Input Report characteristic client characteristic configuration
#endif

#if 0
	HID_REPORT_KEY_IN_DECL_IDX, 	// HID Report characteristic, key input declaration
	HID_REPORT_KEY_IN_IDX,			// HID Report characteristic, key input
	HID_REPORT_KEY_IN_CCCD_IDX, 	// HID Report characteristic client characteristic configuration
	HID_REPORT_REF_KEY_IN_IDX,		// HID Report Reference characteristic descriptor, key input
	HID_REPORT_LED_OUT_DECL_IDX,	// HID Report characteristic, LED output declaration
	HID_REPORT_LED_OUT_IDX, 		// HID Report characteristic, LED output
	HID_REPORT_REF_LED_OUT_IDX, 	// HID Report Reference characteristic descriptor, LED output
	HID_BOOT_KEY_IN_DECL_IDX,		// HID Boot Keyboard Input Report declaration
	HID_BOOT_KEY_IN_IDX,			// HID Boot Keyboard Input Report
	HID_BOOT_KEY_IN_CCCD_IDX,		// HID Boot Keyboard Input Report characteristic client characteristic configuration
	HID_BOOT_KEY_OUT_DECL_IDX,		// HID Boot Keyboard Output Report declaration
	HID_BOOT_KEY_OUT_IDX,			// HID Boot Keyboard Output Report
#endif

#if EN_CONSUMER_MODE
	HID_REPORT_CC_IN_DECL_IDX,		// HID Report characteristic declaration, consumer control
	HID_REPORT_CC_IN_IDX,			// HID Report characteristic, consumer control
	HID_REPORT_CC_IN_CCCD_IDX,		// HID Report characteristic client characteristic configuration, consumer control
	HID_REPORT_REF_CC_IN_IDX,		// HID Report Reference characteristic descriptor, consumer control
#endif

	HID_REPORT_MAP_DECL_IDX,		// HID Report Map characteristic declaration
	HID_REPORT_MAP_IDX, 			// HID Report Map characteristic
	// HID_EXT_REPORT_REF_DESC_IDX,	// HID External Report Reference Descriptor

#if HID_SUP_CTRL_POINT_CHAR
    HID_CONTROL_POINT_DECL_IDX,     // HID Control Point characteristic declaration
    HID_CONTROL_POINT_IDX,          // HID Control Point characteristic
#endif

#if EN_FEATURE_REPORT
	HID_FEATURE_DECL_IDX,			// Feature Report declaration
	HID_FEATURE_IDX,				// Feature Report
	HID_REPORT_REF_FEATURE_IDX		// HID Report Reference characteristic descriptor, feature
#endif
};


/*********************************************************************
    API FUNCTIONS
*/

/*********************************************************************
    @fn      HidKbd_AddService

    @brief   Initializes the HID service for keyboard by registering
            GATT attributes with the GATT server.

    @param   none

    @return  Success or Failure
*/
extern bStatus_t HidKbd_AddService(void);

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* HIDKBDSERVICE_H */
