#include "osapi.h"
#include "c_types.h"
#include "at.h"
#include "at_baseCmd.h"
#include "user_interface.h"
#include "at_version.h"
#include "version.h"

/** @defgroup AT_BASECMD_Functions
  * @{
  */ 
  
/**
  * @brief  Execution commad of AT.
  * @param  id: commad id number
  * @retval None
  */
void ICACHE_FLASH_ATTR
at_exeCmdNull(uint8_t id)
{
  at_backOk;
}

/**
  * @brief  Execution commad of restart.
  * @param  id: commad id number
  * @retval None
  */
void ICACHE_FLASH_ATTR
at_exeCmdRst(uint8_t id)
{
  at_backOk;
  system_restart();
}

/**
  * @brief  Execution commad of version.
  * @param  id: commad id number
  * @retval None
  */
void ICACHE_FLASH_ATTR
at_exeCmdGmr(uint8_t id)
{
  char temp[128];

  os_sprintf(temp,"%04X%04X\r\n",
             AT_VERSION,SDK_VERSION);
  uart0_sendStr(temp);
  at_backOk;
}
/**
  * @}
  */
