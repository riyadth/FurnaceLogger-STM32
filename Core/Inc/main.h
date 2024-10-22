/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define D21_Pin GPIO_PIN_13
#define D21_GPIO_Port GPIOC
#define A0_Pin GPIO_PIN_0
#define A0_GPIO_Port GPIOC
#define A1_Pin GPIO_PIN_1
#define A1_GPIO_Port GPIOC
#define A2_Pin GPIO_PIN_2
#define A2_GPIO_Port GPIOC
#define A3_Pin GPIO_PIN_3
#define A3_GPIO_Port GPIOC
#define D2_Pin GPIO_PIN_0
#define D2_GPIO_Port GPIOA
#define D3_LED2_Pin GPIO_PIN_1
#define D3_LED2_GPIO_Port GPIOA
#define D1_TXD1_Pin GPIO_PIN_2
#define D1_TXD1_GPIO_Port GPIOA
#define D0_RXD1_Pin GPIO_PIN_3
#define D0_RXD1_GPIO_Port GPIOA
#define D10_Pin GPIO_PIN_4
#define D10_GPIO_Port GPIOA
#define D13_LED1_Pin GPIO_PIN_5
#define D13_LED1_GPIO_Port GPIOA
#define D12_Pin GPIO_PIN_6
#define D12_GPIO_Port GPIOA
#define D11_Pin GPIO_PIN_7
#define D11_GPIO_Port GPIOA
#define A4_Pin GPIO_PIN_4
#define A4_GPIO_Port GPIOC
#define A5_Pin GPIO_PIN_5
#define A5_GPIO_Port GPIOC
#define D27_VBAT_ADC_Pin GPIO_PIN_0
#define D27_VBAT_ADC_GPIO_Port GPIOB
#define D28_VBAT_EN_Pin GPIO_PIN_1
#define D28_VBAT_EN_GPIO_Port GPIOB
#define NC_BOOT1_Pin GPIO_PIN_2
#define NC_BOOT1_GPIO_Port GPIOB
#define D29_SCL2_Pin GPIO_PIN_10
#define D29_SCL2_GPIO_Port GPIOB
#define D30_SDA2_Pin GPIO_PIN_11
#define D30_SDA2_GPIO_Port GPIOB
#define D31_Pin GPIO_PIN_12
#define D31_GPIO_Port GPIOB
#define D32_SCK2_Pin GPIO_PIN_13
#define D32_SCK2_GPIO_Port GPIOB
#define D33_MISO2_Pin GPIO_PIN_14
#define D33_MISO2_GPIO_Port GPIOB
#define D34_MOSI2_Pin GPIO_PIN_15
#define D34_MOSI2_GPIO_Port GPIOB
#define D35_Pin GPIO_PIN_6
#define D35_GPIO_Port GPIOC
#define D36_Pin GPIO_PIN_7
#define D36_GPIO_Port GPIOC
#define D37_Pin GPIO_PIN_8
#define D37_GPIO_Port GPIOC
#define BUT_Pin GPIO_PIN_9
#define BUT_GPIO_Port GPIOC
#define D6_Pin GPIO_PIN_8
#define D6_GPIO_Port GPIOA
#define D7_Pin GPIO_PIN_9
#define D7_GPIO_Port GPIOA
#define D8_Pin GPIO_PIN_10
#define D8_GPIO_Port GPIOA
#define D26_Pin GPIO_PIN_10
#define D26_GPIO_Port GPIOC
#define USB_P_Pin GPIO_PIN_11
#define USB_P_GPIO_Port GPIOC
#define DISC_Pin GPIO_PIN_12
#define DISC_GPIO_Port GPIOC
#define D25_MMC_CS_Pin GPIO_PIN_2
#define D25_MMC_CS_GPIO_Port GPIOD
#define D4_Pin GPIO_PIN_5
#define D4_GPIO_Port GPIOB
#define D5_SCL_Pin GPIO_PIN_6
#define D5_SCL_GPIO_Port GPIOB
#define D9_SDA_Pin GPIO_PIN_7
#define D9_SDA_GPIO_Port GPIOB
#define D14_Pin GPIO_PIN_8
#define D14_GPIO_Port GPIOB
#define D24_Pin GPIO_PIN_9
#define D24_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
