﻿


#include "bcomdef.h"
#include <stdio.h>
#include <string.h>
#include "OSAL.h"
#include "linkdb.h"
#include "att.h"
#include "gatt.h"
#include "gatt_uuid.h"
#include "gatt_profile_uuid.h"
#include "peripheral.h"
#include "gattservapp.h"

#include "ota_app_service.h"
#include "log.h"
#include "error.h"
#include "ll.h"
#include "pwrmgr.h"
#include "flash.h"


CONST uint8 ota_ServiceUUID[ATT_UUID_SIZE] =
{ 0x23, 0xf1, 0x6e, 0x53, 0xa4, 0x22, 0x42, 0x61, 0x91, 0x51, 0x8b, 0x9b, 0x01, 0xff, 0x33, 0x58};

//command characteristic
CONST uint8 ota_CommandUUID[ATT_UUID_SIZE] =
{ 0x23, 0xf1, 0x6e, 0x53, 0xa4, 0x22, 0x42, 0x61, 0x91, 0x51, 0x8b, 0x9b, 0x02, 0xff, 0x33, 0x58};

// Response characteristic
CONST uint8 ota_ResponseUUID[ATT_UUID_SIZE] =
{ 0x23, 0xf1, 0x6e, 0x53, 0xa4, 0x22, 0x42, 0x61, 0x91, 0x51, 0x8b, 0x9b, 0x03, 0xff, 0x33, 0x58};


static CONST gattAttrType_t ota_Service = { ATT_UUID_SIZE, ota_ServiceUUID };

static uint8 ota_CommandProps = GATT_PROP_WRITE;
static uint8 ota_CommandValue = 0;

// OTA response Characteristic
static uint8 ota_ResponseProps = GATT_PROP_NOTIFY;
static uint8 ota_ResponseValue = 0;
//static gattCharCfg_t ota_ResponseCCCD[GATT_MAX_NUM_CONN];
static uint16 ota_ResponseCCCD = GATT_CFG_NO_OPERATION;


#define OTA_COMMAND_HANDLE 2
#define OTA_RSP_HANDLE 4
#define OTA_DATA_HANDLE 7
const static gattAttribute_t ota_AttrTbl[] = 
{
  //OTA Service
  { 
    { ATT_BT_UUID_SIZE, primaryServiceUUID }, /* type */
    GATT_PERMIT_READ,                         /* permissions */
    13,                                        /* handle */
    (uint8 *)&ota_Service                /* pValue */
  },

    //OTA Command Declaration
    { 
      { ATT_BT_UUID_SIZE, characterUUID },
      GATT_PERMIT_READ, 
      14,
      &ota_CommandProps 
    },
    
      //OTA Command Value
      { 
        { ATT_UUID_SIZE, ota_CommandUUID },
        GATT_PERMIT_WRITE, 
        15, 
        &ota_CommandValue
      },
    

    // OTA response Declaration
    { 
      { ATT_BT_UUID_SIZE, characterUUID },
      GATT_PERMIT_READ, 
      16,
      &ota_ResponseProps
    },

      //response Value
      { 
        { ATT_UUID_SIZE, ota_ResponseUUID },
        GATT_PERMIT_READ, 
        17, 
        &ota_ResponseValue
      },
      
      // OTA response Client Characteristic Configuration
      { 
        { ATT_BT_UUID_SIZE, clientCharCfgUUID },
        GATT_PERMIT_READ | GATT_PERMIT_WRITE, 
        18, 
        (uint8 *) &ota_ResponseCCCD
      },      

};


typedef struct 
{
  bool    notify_en;
  uint8_t ver_major;
  uint8_t ver_minor;
  uint8_t ver_revision;
  uint8_t ver_test_build;
  uint8_t ota_mode;
  uint8_t bank_info;
}ota_app_ctx;

ota_app_ctx s_ota_app;

bool s_reboot_flg = false;

static uint8 ota_ReadAttrCB( uint16 connHandle, gattAttribute_t *pAttr, 
                            uint8 *pValue, uint8 *pLen, uint16 offset, uint8 maxLen );
static bStatus_t ota_WriteAttrCB( uint16 connHandle, gattAttribute_t *pAttr,
                                 uint8 *pValue, uint8 len, uint16 offset );

static bStatus_t sendNotify(attHandleValueNoti_t *pNoti);
extern void WaitMs(uint32_t msecond);
CONST gattServiceCBs_t ota_ProfileCBs =
{
  ota_ReadAttrCB,  // Read callback function pointer
  ota_WriteAttrCB, // Write callback function pointer
  NULL                       // Authorization callback function pointer
};



/*response format:*/
/*Byte  value*/
/*0     error code*/
/*1~19  response data payload*/
static void response(uint8_t* rsp_data, uint8_t size)
{
  attHandleValueNoti_t notif;
  
  osal_memset(&notif, 0, sizeof(notif));

  if(size > 20)
    return;
  
  notif.len = size;

  osal_memcpy(notif.value, rsp_data, size);
  sendNotify(&notif);
}

static int set_ota_mode(uint8_t mode)
{
  if(mode > OTA_MODE_RESOURCE && mode != OTA_MODE_OTA_NADDR)
    return PPlus_ERR_INVALID_PARAM;
  write_reg(OTA_MODE_SELECT_REG, mode);
  return PPlus_SUCCESS;
}

//void _sbrk(void){}

static void load_ota_version(void)
{
  uint32_t reg = read_reg(OTA_MODE_SELECT_REG);
  s_ota_app.ver_major = (uint8_t)((reg >>4) & 0xf);
  s_ota_app.ver_minor = (uint8_t)((reg >>8) & 0xf);
  s_ota_app.ver_revision = (uint8_t)((reg >>12) & 0xff);
  s_ota_app.ver_test_build = (uint8_t)((reg >>20) & 0xf);
  if(s_ota_app.ver_test_build)
  {
    LOG("OTA Boot Version: %d.%d.%d%c\n", 
        s_ota_app.ver_major,s_ota_app.ver_minor,s_ota_app.ver_revision, s_ota_app.ver_test_build+'a'-1);
  }
  else
  {
    LOG("OTA Boot Version: %d.%d.%d\n", 
        s_ota_app.ver_major,s_ota_app.ver_minor,s_ota_app.ver_revision);
  }
}

//void __attribute__((weak)) ui_firmware_upgrade(void);
static void ota_disconnect_link(void)
{
    LL_Disconnect(0, LL_DISCONNECT_REMOTE_DEV_POWER_OFF);
    WaitMs(500);
}

static void process_cmd(uint8_t* cmdbuf, uint8_t size)
{
  uint8_t rsp = PPlus_SUCCESS;
    ota_app_cmd_t cmd;

    if(size > sizeof(cmd))
    {
        return;
    }

    osal_memcpy(&cmd, cmdbuf, size);

    switch (cmd.cmd) // switch (cmdbuf[0])
    {
    case OTAAPP_CMD_START_OTA:
    {
      uint8_t ota_mode = cmdbuf[1];
      s_reboot_flg = false;
      //set AON register then reboot
      rsp = set_ota_mode(ota_mode);
      if(rsp == PPlus_SUCCESS)
	  {
        //GAPRole_TerminateConnection();
        if ((size != 3) || (cmdbuf[2] != 1))
        {
	        #if (FLASH_PROTECT_FEATURE == 1)
	        hal_flash_disable_lock(SINGLE_OTA);
	        #endif
	        ota_disconnect_link();
	        hal_system_soft_reset();
        }
        //if cmdbuf[2] is 1
        //case host will initiate termination request
        //when device terminated, device reboot to ota mode
        response(&rsp, 1);
        s_reboot_flg = true;
      }
      else
      {
        response(&rsp, 1);
      }
    }
    break;
  case OTAAPP_CMD_FORMAT:
    {
      rsp = PPlus_ERR_NOT_SUPPORTED;
      //format fs and application
      
      response(&rsp, 1);
    }
    break;
  case OTAAPP_CMD_INFO:
    {
      //take mac address and version info
      uint8_t info_rsp[20];
      osal_memset(info_rsp, 0, 20);
      info_rsp[0] = PPlus_SUCCESS;
      LL_ReadBDADDR(&info_rsp[1]);

	    info_rsp[7] = 'V';
	    info_rsp[8] = s_ota_app.ver_major;
	    info_rsp[9] = '.';
	    info_rsp[10] = s_ota_app.ver_minor;
	    info_rsp[11] = '.';
	    info_rsp[12] = s_ota_app.ver_revision;
      if(s_ota_app.ver_test_build)
	    {
	  	  info_rsp[13] = 'a'+s_ota_app.ver_test_build-1;
      }
      response(info_rsp, 8+strlen((const char*)info_rsp+7));

    }
    break;

  default:
    rsp = PPlus_ERR_OTA_UNKNOW_CMD;
    response(&rsp, 1);
  }
}

static void handleConnStatusCB( uint16 connHandle, uint8 changeType )
{ 
  // Make sure this is not loopback connection
  LOG("handleConnStatusCB %x, %d\n", connHandle,changeType );
  if ( connHandle != LOOPBACK_CONNHANDLE )
  {
    // Reset Client Char Config if connection has dropped
    if ( ( changeType == LINKDB_STATUS_UPDATE_REMOVED )      ||
         ( ( changeType == LINKDB_STATUS_UPDATE_STATEFLAGS ) && 
           ( !linkDB_Up( connHandle ) ) ) )
    { 
//      GATTServApp_InitCharCfg( connHandle, ota_ResponseCCCD);
      if(s_reboot_flg)
	    {
        hal_system_soft_reset();
      }
    }
    else
    {
      s_reboot_flg = false;
    }
  }
}

static bStatus_t sendNotify(attHandleValueNoti_t *pNoti)
{
  
  // If notifications enabled
  if ( ota_ResponseCCCD & GATT_CLIENT_CFG_NOTIFY )
  {
    // Set the handle
    pNoti->handle = ota_AttrTbl[OTA_RSP_HANDLE].handle;
  
    // Send the Indication
    return GATT_Notification( 0, pNoti, FALSE);
   
  }
  return bleIncorrectMode;
  
}


static uint8 ota_ReadAttrCB( uint16 connHandle, gattAttribute_t *pAttr, 
                            uint8 *pValue, uint8 *pLen, uint16 offset, uint8 maxLen )
{
  bStatus_t status = ATT_ERR_READ_NOT_PERMITTED;
  LOG("ReadAttrCB\n");
  // If attribute permissions require authorization to read, return error
  if ( gattPermitAuthorRead( pAttr->permissions ) )
  {
    // Insufficient authorization
    return ( ATT_ERR_INSUFFICIENT_AUTHOR );
  }

  return ( status );
}


static bStatus_t ota_WriteAttrCB( uint16 connHandle, gattAttribute_t *pAttr,
                                 uint8 *pValue, uint8 len, uint16 offset )
{
  bStatus_t status = SUCCESS;
  //uint8 notifyApp = 0xFF;
  // If attribute permissions require authorization to write, return error
  if ( gattPermitAuthorWrite( pAttr->permissions ) )
  {
    // Insufficient authorization
    return ( ATT_ERR_INSUFFICIENT_AUTHOR );
  }

  if ( pAttr->type.len == ATT_BT_UUID_SIZE )
  {
    // 16-bit UUID
    uint16 uuid = BUILD_UINT16( pAttr->type.uuid[0], pAttr->type.uuid[1]);
    if(uuid == GATT_CLIENT_CHAR_CFG_UUID)
    {
      if ( pAttr->handle == ota_AttrTbl[5].handle)
      {
        ota_ResponseCCCD = BUILD_UINT16( pValue[0], pValue[1] );
      
        LOG("CCCD set: [%d]\n", ota_ResponseCCCD);
        s_ota_app.notify_en = (ota_ResponseCCCD == 1);
      }
    }

  }
  else
  {
    LOG("WR:%d\n", pAttr->handle);
    // 128-bit UUID Command
    if(pAttr->handle == ota_AttrTbl[OTA_COMMAND_HANDLE].handle)
    {
      process_cmd(pValue, len);
    }
  }
  return ( status );
}



bStatus_t ota_app_AddService(void)
{
  uint8 status = SUCCESS;

  // Register with Link DB to receive link status change callback
  VOID linkDB_Register( handleConnStatusCB  );
  
  load_ota_version();
  
//  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, ota_ResponseCCCD );
    
  // Register GATT attribute list and CBs with GATT Server App
  extern bStatus_t GATTServApp_RegisterService1(const gattAttribute_t *pAttrs, uint16 numAttrs,
                                                          CONST gattServiceCBs_t *pServiceCBs);
  status = GATTServApp_RegisterService1( ota_AttrTbl, 
                                        GATT_NUM_ATTRS( ota_AttrTbl ),
                                        &ota_ProfileCBs );
                                        
  if(status!=SUCCESS)
  {
    LOG("Add OTA service failed!\n");
  }
	

  return ( status );
}


int ota_vendor_module_StartOTA(uint8_t mode)
{
  int ret = 0;
  uint32_t reg = read_reg(OTA_MODE_SELECT_REG);
  if(reg == 0)
    return PPlus_ERR_NOT_REGISTED;
  ret = set_ota_mode(mode);
  if(ret == PPlus_SUCCESS)
  {
        hal_system_soft_reset();
  }
  return ret;
}

int ota_vendor_module_Version(  uint8_t* major, uint8_t* minor, uint8_t* revision, uint8_t *test_build)
{
  uint32_t reg = read_reg(OTA_MODE_SELECT_REG);
  
  if(reg == 0)
    return PPlus_ERR_NOT_REGISTED;
    
  *major = (uint8_t)((reg >>4) & 0xf);
  *minor = (uint8_t)((reg >>8) & 0xf);
  *revision = (uint8_t)((reg >>12) & 0xff);
  *test_build = (uint8_t)((reg >>20) & 0xf);
  return PPlus_SUCCESS;
}


