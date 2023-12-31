/**
  **************************************************************************
  * @file     operate_spim.h
  * @brief    operate_spim header file
  **************************************************************************
  *                       Copyright notice & Disclaimer
  *
  * The software Board Support Package (BSP) that is made available to
  * download from Artery official website is the copyrighted work of Artery.
  * Artery authorizes customers to use, copy, and distribute the BSP
  * software and its related documentation for the purpose of design and
  * development in conjunction with Artery microcontrollers. Use of the
  * software is governed by this copyright notice and the following disclaimer.
  *
  * THIS SOFTWARE IS PROVIDED ON "AS IS" BASIS WITHOUT WARRANTIES,
  * GUARANTEES OR REPRESENTATIONS OF ANY KIND. ARTERY EXPRESSLY DISCLAIMS,
  * TO THE FULLEST EXTENT PERMITTED BY LAW, ALL EXPRESS, IMPLIED OR
  * STATUTORY OR OTHER WARRANTIES, GUARANTEES OR REPRESENTATIONS,
  * INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT.
  *
  **************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __OPERATE_SPIM_H
#define __OPERATE_SPIM_H

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup AT32A403A_periph_examples
  * @{
  */

/** @addtogroup 403A_FLASH_operate_spim
  * @{
  */

#define SPIM_SECTOR_SIZE    4096
#define SPIM_TEST_ADDR      0x08400000

/** @defgroup FLASH_operate_spim_functions
  * @{
  */

void spim_operate(void);

/**
  * @}
  */


/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __OPERATE_SPIM_H */
