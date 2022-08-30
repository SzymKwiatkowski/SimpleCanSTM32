
#ifndef MAIN_H
#define MAIN_H

/* INCLUDES */
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_can.h"
#include "stm32f746xx.h"

/* DEFINES */
#define LED_Pin                                 GPIO_PIN_13
#define LED_GPIO_Port                           GPIOC
#define BTN1_Pin                                GPIO_PIN_5
#define BTN1_GPIO_Port                          GPIOB
#define BTN1_EXTI_IRQn                          EXTI9_5_IRQn
#define BTN2_Pin                                GPIO_PIN_6
#define BTN2_GPIO_Port                          GPIOB
#define BTN2_EXTI_IRQn                          EXTI9_5_IRQn
#define BTN3_Pin                                GPIO_PIN_7
#define BTN3_GPIO_Port                          GPIOB
#define BTN3_EXTI_IRQn                          EXTI9_5_IRQn
#define BTN4_Pin                                GPIO_PIN_8
#define BTN4_GPIO_Port                          GPIOB
#define BTN4_EXTI_IRQn                          EXTI9_5_IRQn

/* CAN PINS */
#define CAN1_TX_Pin                             GPIO_PIN_8
#define CAN1_TX_Port                            GPIOB
#define CAN1_RX_Pin                             GPIO_PIN_9
#define CAN1_RX_Port                            GPIOB

/* VARIABLES */
extern CAN_HandleTypeDef hcan;
extern CAN_FilterTypeDef sFilterConfig;

/* METHODS */
void Error_Handler(void);
void MX_CAN_Init(void);
void StartCan();
void SetupFilter();
void modifyData(uint32_t id, uint32_t len, uint8_t byte0, uint8_t byte1, uint8_t byte2, uint8_t byte3,
                uint8_t byte4, uint8_t byte5, uint8_t byte6, uint8_t byte7);
void handleInput(uint32_t id, uint8_t* data);
#endif // MAIN_H