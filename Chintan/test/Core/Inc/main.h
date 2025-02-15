/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define in_efuse_vcc_Pin GPIO_PIN_0
#define in_efuse_vcc_GPIO_Port GPIOC
#define out_efuse_vcc_Pin GPIO_PIN_1
#define out_efuse_vcc_GPIO_Port GPIOC
#define buck_i_Pin GPIO_PIN_2
#define buck_i_GPIO_Port GPIOC
#define buck_vcc_Pin GPIO_PIN_3
#define buck_vcc_GPIO_Port GPIOC
#define efuse_I_1_Pin GPIO_PIN_0
#define efuse_I_1_GPIO_Port GPIOA
#define efuse_I_2_Pin GPIO_PIN_1
#define efuse_I_2_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define lsc_vcc_Pin GPIO_PIN_4
#define lsc_vcc_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define alert_1_Pin GPIO_PIN_6
#define alert_1_GPIO_Port GPIOA
#define alert_2_Pin GPIO_PIN_7
#define alert_2_GPIO_Port GPIOA
#define lsc_vccB1_Pin GPIO_PIN_1
#define lsc_vccB1_GPIO_Port GPIOB
#define efuse_EN_Pin GPIO_PIN_8
#define efuse_EN_GPIO_Port GPIOC
#define Buck_Boost_EN_Pin GPIO_PIN_9
#define Buck_Boost_EN_GPIO_Port GPIOC
#define PGOOD_Pin GPIO_PIN_8
#define PGOOD_GPIO_Port GPIOA
#define OVP_Pin GPIO_PIN_9
#define OVP_GPIO_Port GPIOA
#define LATCH_1_Pin GPIO_PIN_10
#define LATCH_1_GPIO_Port GPIOA
#define LATCH_2_Pin GPIO_PIN_11
#define LATCH_2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
