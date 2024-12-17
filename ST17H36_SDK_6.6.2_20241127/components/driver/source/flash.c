
#include "rom_sym_def.h"
#include <string.h>
#include "types.h"
#include "flash.h"
#include "log.h"
#include "error.h"

uint32 flash_ID = 0;

static FLASH_PROTECT_INFO flash_protect_data =
{
    .bypass_flash_lock = FALSE,
    .module_ID = MAIN_INIT,
};

int hal_flash_enable_lock(module_ID_t id)
{
    uint8 ret = PPlus_ERR_BUSY;

    if ((flash_protect_data.module_ID == id) || (flash_protect_data.module_ID == MAIN_INIT))
    {
        flash_protect_data.bypass_flash_lock = FALSE;
        ret = hal_flash_lock();
    }

    return ret;
}

int hal_flash_disable_lock(module_ID_t id)
{
    uint8 ret = PPlus_SUCCESS;
    ret = hal_flash_unlock();

    if (ret != PPlus_SUCCESS)
    {
        return ret;
    }

    flash_protect_data.module_ID = id;
    flash_protect_data.bypass_flash_lock = TRUE;
    return ret;
}

int hal_flash_write_status_register(uint16_t reg_data)
{
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    spif_status_reg_write(reg_data&0xff);
    HAL_EXIT_CRITICAL_SECTION();
    return PPlus_SUCCESS;
}

uint8 hal_flash_get_lock_state(void)
{
    uint8 status;
     _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    status = spif_status_reg_read() & 0xff;
    HAL_EXIT_CRITICAL_SECTION();
    return status;
}

int hal_flash_lock(void)
{
    if (flash_protect_data.bypass_flash_lock == TRUE)
    {
        return PPlus_ERR_FORBIDDEN;
    }
    uint8 flash_lock_status = hal_flash_get_lock_state();
    uint16 flashlock_value = 0;
    switch (flash_ID & 0xffffff)
    {
        case GT25D20E_ID:
            if (flash_lock_status != FLASH_PROTECT_AREA_3BIT_1C)
                flashlock_value = FLASH_PROTECT_AREA_3BIT_1C;
            else
                return PPlus_SUCCESS;
            break;
        case P25D22U_ID:
            if (flash_lock_status != FLASH_PROTECT_AREA_5BIT_7C)
                flashlock_value = FLASH_PROTECT_AREA_5BIT_7C;
            else
                return PPlus_SUCCESS;
            break;
        default:
            while (1); /**the current flash type cannot be found**/
    }
    hal_flash_write_status_register(flashlock_value);
    return PPlus_SUCCESS;
}

int hal_flash_unlock(void)
{
    if (flash_protect_data.bypass_flash_lock == TRUE)
    {
        return PPlus_ERR_FORBIDDEN;
    }
    
    switch (flash_ID & 0xffffff)
    {
        case P25D22U_ID: case GT25D20E_ID:
            hal_flash_write_status_register(0);
            break;
        default:
            break;
    }
    return PPlus_SUCCESS;
}


int hal_get_flash_info(void)
{
    spif_id_t pid;
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    spif_read_identification(&pid);
    HAL_EXIT_CRITICAL_SECTION();
    flash_ID = pid.mcapc<<16 | pid.mtype<<8 | pid.mid;
    return PPlus_SUCCESS;
}


int hal_flash_read(uint32_t addr, uint32_t* data)
{
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    *data = spif_read_word(addr);
    HAL_EXIT_CRITICAL_SECTION();
    return PPlus_SUCCESS;
}

int hal_flash_write(uint32_t addr, uint8_t* data, uint32_t size)
{
    uint8_t retval;
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    retval = spif_write(addr,data,size);
    HAL_EXIT_CRITICAL_SECTION();
    return retval;
}

int hal_flash_erase_sector(unsigned int addr)
{
    uint8_t retval;
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    retval = spif_erase_sector(addr);
    HAL_EXIT_CRITICAL_SECTION();
    return retval;
}

int hal_flash_erase_block64(unsigned int addr)
{
    uint8_t retval;
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    retval = spif_erase_block64(addr);
    HAL_EXIT_CRITICAL_SECTION();
    return retval;
}

int hal_flash_erase_all(void)
{
    uint8_t retval;
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    retval = spif_erase_all();
    HAL_EXIT_CRITICAL_SECTION();
    return retval;
}

int flash_write_word(unsigned int offset, uint32_t  value)
{
    uint8_t retval;
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    retval = spif_write_word(offset,value);
    HAL_EXIT_CRITICAL_SECTION();
    return retval;
}

