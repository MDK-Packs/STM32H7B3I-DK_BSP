/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 31/03/2022 08:37:38
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            64000000
#define MX_HSE_VALUE                            24000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_SYSCLKFreq_VALUE                     280000000
#define MX_HCLKFreq_Value                       140000000
#define MX_CortexFreq_Value                     280000000
#define MX_APB1Freq_Value                       70000000
#define MX_APB2Freq_Value                       70000000
#define MX_CECFreq_Value                        32000
#define MX_RTCFreq_Value                        32768
#define MX_USBFreq_Value                        186666666
#define MX_WatchDogFreq_Value                   32000
#define MX_SPDIFRXFreq_Value                    186666666
#define MX_MCO1PinFreq_Value                    24000000
#define MX_MCO2PinFreq_Value                    280000000

/*-------------------------------- CORTEX_M7  --------------------------------*/

#define MX_CORTEX_M7                            1

/* GPIO Configuration */

/*-------------------------------- DEBUG      --------------------------------*/

#define MX_DEBUG                                1

/* GPIO Configuration */

/* Pin PA15 */
#define MX_DEBUG_JTDI_Pin                       PA15
#define MX_JTDI                                 DEBUG_JTDI

/* Pin PA14 */
#define MX_DEBUG_JTCK_SWCLK_Pin                 PA14
#define MX_JTCK                                 DEBUG_JTCK_SWCLK

/* Pin PB4 */
#define MX_DEBUG_JTRST_Pin                      PB4

/* Pin PB3 */
#define MX_DEBUG_JTDO_SWO_Pin                   PB3
#define MX_JTDO_TRACESWO                        DEBUG_JTDO_SWO

/* Pin PA13 */
#define MX_DEBUG_JTMS_SWDIO_Pin                 PA13
#define MX_JTMS                                 DEBUG_JTMS_SWDIO

/*-------------------------------- DMA        --------------------------------*/

#define MX_DMA                                  1

/* NVIC Configuration */

/* NVIC DMA1_Stream1_IRQn */
#define MX_DMA1_Stream1_IRQn_interruptPremptionPriority 8
#define MX_DMA1_Stream1_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream1_IRQn_Subriority         0

/* NVIC DMA1_Stream0_IRQn */
#define MX_DMA1_Stream0_IRQn_interruptPremptionPriority 8
#define MX_DMA1_Stream0_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream0_IRQn_Subriority         0

/*-------------------------------- I2C4       --------------------------------*/

#define MX_I2C4                                 1

/* GPIO Configuration */

/* Pin PD13 */
#define MX_I2C4_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C4_SDA_Pin                         PD13
#define MX_I2C4_SDA_GPIOx                       GPIOD
#define MX_I2C4_SDA                             I2C4_SDA
#define MX_I2C4_SDA_GPIO_Pin                    GPIO_PIN_13
#define MX_I2C4_SDA_GPIO_AF                     GPIO_AF4_I2C4
#define MX_I2C4_SDA_GPIO_Pu                     GPIO_PULLUP
#define MX_I2C4_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PD12 */
#define MX_I2C4_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C4_SCL_Pin                         PD12
#define MX_I2C4_SCL_GPIOx                       GPIOD
#define MX_I2C4_SCL                             I2C4_SCL
#define MX_I2C4_SCL_GPIO_Pin                    GPIO_PIN_12
#define MX_I2C4_SCL_GPIO_AF                     GPIO_AF4_I2C4
#define MX_I2C4_SCL_GPIO_Pu                     GPIO_PULLUP
#define MX_I2C4_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/*-------------------------------- I2S6       --------------------------------*/

#define MX_I2S6                                 1

/* GPIO Configuration */

/* Pin PG12 */
#define MX_I2S6_SDI_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2S6_SDI_Pin                         PG12
#define MX_I2S6_SDI_GPIOx                       GPIOG
#define MX_I2S6_SDI_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2S6_SDI                             I2S6_SDI
#define MX_I2S6_SDI_GPIO_Pin                    GPIO_PIN_12
#define MX_I2S6_SDI_GPIO_AF                     GPIO_AF5_SPI6
#define MX_I2S6_SDI_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PA3 */
#define MX_I2S6_MCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2S6_MCK_Pin                         PA3
#define MX_I2S6_MCK_GPIOx                       GPIOA
#define MX_I2S6_MCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2S6_MCK                             I2S6_MCK
#define MX_I2S6_MCK_GPIO_Pin                    GPIO_PIN_3
#define MX_I2S6_MCK_GPIO_AF                     GPIO_AF5_SPI6
#define MX_I2S6_MCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PA0 */
#define MX_I2S6_WS_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_I2S6_WS_Pin                          PA0
#define MX_I2S6_WS_GPIOx                        GPIOA
#define MX_I2S6_WS_GPIO_PuPd                    GPIO_NOPULL
#define MX_I2S6_WS                              I2S6_WS
#define MX_I2S6_WS_GPIO_Pin                     GPIO_PIN_0
#define MX_I2S6_WS_GPIO_AF                      GPIO_AF5_SPI6
#define MX_I2S6_WS_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PG14 */
#define MX_I2S6_SDO_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2S6_SDO_Pin                         PG14
#define MX_I2S6_SDO_GPIOx                       GPIOG
#define MX_I2S6_SDO_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2S6_SDO                             I2S6_SDO
#define MX_I2S6_SDO_GPIO_Pin                    GPIO_PIN_14
#define MX_I2S6_SDO_GPIO_AF                     GPIO_AF5_SPI6
#define MX_I2S6_SDO_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PG13 */
#define MX_I2S6_CK_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_I2S6_CK_Pin                          PG13
#define MX_I2S6_CK_GPIOx                        GPIOG
#define MX_I2S6_CK_GPIO_PuPd                    GPIO_NOPULL
#define MX_I2S6_CK                              I2S6_CK
#define MX_I2S6_CK_GPIO_Pin                     GPIO_PIN_13
#define MX_I2S6_CK_GPIO_AF                      GPIO_AF5_SPI6
#define MX_I2S6_CK_GPIO_Mode                    GPIO_MODE_AF_PP

/*-------------------------------- RTC        --------------------------------*/

#define MX_RTC                                  1

/* GPIO Configuration */

/*-------------------------------- SDMMC1     --------------------------------*/

#define MX_SDMMC1                               1

/* GPIO Configuration */

/* Pin PD2 */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO1_CMD                            SDMMC1_CMD
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDMMC1
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PC8 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO1_D0                             SDMMC1_D0
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC9 */
#define MX_SDMMC1_D1_Pin                        PC9
#define MX_SDMMC1_D1_GPIOx                      GPIOC
#define MX_SDMMC1_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO1_D1                             SDMMC1_D1
#define MX_SDMMC1_D1_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D1_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D1_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC10 */
#define MX_SDMMC1_D2_Pin                        PC10
#define MX_SDMMC1_D2_GPIOx                      GPIOC
#define MX_SDMMC1_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO1_D2                             SDMMC1_D2
#define MX_SDMMC1_D2_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC1_D2_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D2_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC11 */
#define MX_SDMMC1_D3_Pin                        PC11
#define MX_SDMMC1_D3_GPIOx                      GPIOC
#define MX_SDMMC1_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO1_D3                             SDMMC1_D3
#define MX_SDMMC1_D3_GPIO_Pin                   GPIO_PIN_11
#define MX_SDMMC1_D3_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D3_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC12 */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO1_CK                             SDMMC1_CK
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC SDMMC1_IRQn */
#define MX_SDMMC1_IRQn_interruptPremptionPriority 8
#define MX_SDMMC1_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_SDMMC1_IRQn_Subriority               0

/*-------------------------------- SPI2       --------------------------------*/

#define MX_SPI2                                 1

/* GPIO Configuration */

/* Pin PA12 */
#define MX_SPI2_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI2_SCK_Pin                         PA12
#define MX_SPI2_SCK_GPIOx                       GPIOA
#define MX_SPI2_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_SCK                             SPI2_SCK
#define MX_SPI2_SCK_GPIO_Pin                    GPIO_PIN_12
#define MX_SPI2_SCK_GPIO_AF                     GPIO_AF5_SPI2
#define MX_SPI2_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PC2 */
#define MX_SPI2_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MISO_Pin                        PC2
#define MX_SPI2_MISO_GPIOx                      GPIOC
#define MX_SPI2_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MISO                            SPI2_MISO
#define MX_SPI2_MISO_GPIO_Pin                   GPIO_PIN_2
#define MX_SPI2_MISO_GPIO_AF                    GPIO_AF5_SPI2
#define MX_SPI2_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC3 */
#define MX_SPI2_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MOSI_Pin                        PC3
#define MX_SPI2_MOSI_GPIOx                      GPIOC
#define MX_SPI2_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MOSI                            SPI2_MOSI
#define MX_SPI2_MOSI_GPIO_Pin                   GPIO_PIN_3
#define MX_SPI2_MOSI_GPIO_AF                    GPIO_AF5_SPI2
#define MX_SPI2_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA SPI2_TX */
#define MX_SPI2_TX_DMA_Instance                 DMA1_Stream1
#define MX_SPI2_TX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_SPI2_TX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI2_TX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI2_TX_DMA_Mode                     DMA_NORMAL
#define MX_SPI2_TX_DMA_SyncRequestNumber        1
#define MX_SPI2_TX_DMA_Request                  DMA_REQUEST_SPI2_TX
#define MX_SPI2_TX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI2_TX_DMA_Direction                DMA_MEMORY_TO_PERIPH
#define MX_SPI2_TX_DMA_SignalID                 NONE
#define MX_SPI2_TX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI2_TX_DMA_IpInstance
#define MX_SPI2_TX_DMA_RequestNumber            1
#define MX_SPI2_TX_DMA_EventEnable              DISABLE
#define MX_SPI2_TX_DMA_SyncEnable               DISABLE
#define MX_SPI2_TX_DMA_DMA_Handle
#define MX_SPI2_TX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI2_TX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI2_TX_DMA_SyncSignalID             NONE
#define MX_SPI2_TX_DMA_PeriphInc                DMA_PINC_DISABLE

/* DMA SPI2_RX */
#define MX_SPI2_RX_DMA_Instance                 DMA1_Stream0
#define MX_SPI2_RX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_SPI2_RX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI2_RX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI2_RX_DMA_Mode                     DMA_NORMAL
#define MX_SPI2_RX_DMA_SyncRequestNumber        1
#define MX_SPI2_RX_DMA_Request                  DMA_REQUEST_SPI2_RX
#define MX_SPI2_RX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI2_RX_DMA_Direction                DMA_PERIPH_TO_MEMORY
#define MX_SPI2_RX_DMA_SignalID                 NONE
#define MX_SPI2_RX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI2_RX_DMA_IpInstance
#define MX_SPI2_RX_DMA_RequestNumber            1
#define MX_SPI2_RX_DMA_EventEnable              DISABLE
#define MX_SPI2_RX_DMA_SyncEnable               DISABLE
#define MX_SPI2_RX_DMA_DMA_Handle
#define MX_SPI2_RX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI2_RX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI2_RX_DMA_SyncSignalID             NONE
#define MX_SPI2_RX_DMA_PeriphInc                DMA_PINC_DISABLE

/* NVIC Configuration */

/* NVIC SPI2_IRQn */
#define MX_SPI2_IRQn_interruptPremptionPriority 8
#define MX_SPI2_IRQn_PriorityGroup              NVIC_PRIORITYGROUP_4
#define MX_SPI2_IRQn_Subriority                 0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- UART4      --------------------------------*/

#define MX_UART4                                1

#define MX_UART4_VM                             VM_ASYNC

/* GPIO Configuration */

/* Pin PH14 */
#define MX_UART4_RX_GPIO_ModeDefaultPP          GPIO_MODE_AF_PP
#define MX_UART4_RX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART4_RX_Pin                         PH14
#define MX_UART4_RX_GPIOx                       GPIOH
#define MX_UART4_RX_GPIO_PuPd                   GPIO_NOPULL
#define MX_UART4_RX_GPIO_Pin                    GPIO_PIN_14
#define MX_UART4_RX_GPIO_AF                     GPIO_AF8_UART4

/* Pin PH13 */
#define MX_UART4_TX_GPIO_ModeDefaultPP          GPIO_MODE_AF_PP
#define MX_UART4_TX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART4_TX_Pin                         PH13
#define MX_UART4_TX_GPIOx                       GPIOH
#define MX_UART4_TX_GPIO_PuPd                   GPIO_NOPULL
#define MX_UART4_TX_GPIO_Pin                    GPIO_PIN_13
#define MX_UART4_TX_GPIO_AF                     GPIO_AF8_UART4

/* NVIC Configuration */

/* NVIC UART4_IRQn */
#define MX_UART4_IRQn_interruptPremptionPriority 8
#define MX_UART4_IRQn_PriorityGroup             NVIC_PRIORITYGROUP_4
#define MX_UART4_IRQn_Subriority                0

/*-------------------------------- USART1     --------------------------------*/

#define MX_USART1                               1

#define MX_USART1_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PA9 */
#define MX_USART1_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_Pin                        PA9
#define MX_USART1_TX_GPIOx                      GPIOA
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_VCP_TX                               USART1_TX
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/* Pin PA10 */
#define MX_USART1_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_Pin                        PA10
#define MX_USART1_RX_GPIOx                      GPIOA
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_VCP_RX                               USART1_RX
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PC13 */
#define MX_PC13_Pin                             PC13
#define MX_PC13_GPIOx                           GPIOC
#define MX_PC13_GPIO_PuPd                       GPIO_NOPULL
#define MX_WAKEUP                               PC13
#define MX_PC13_GPIO_Pin                        GPIO_PIN_13
#define MX_PC13_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_RISING

/* Pin PG11 */
#define MX_PG11_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PG11_Pin                             PG11
#define MX_PG11_GPIOx                           GPIOG
#define MX_PG11_PinState                        GPIO_PIN_RESET
#define MX_PG11_GPIO_PuPd                       GPIO_NOPULL
#define MX_USER_LED1                            PG11
#define MX_PG11_GPIO_Pin                        GPIO_PIN_11
#define MX_PG11_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PA11 */
#define MX_PA11_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PA11_Pin                             PA11
#define MX_PA11_GPIOx                           GPIOA
#define MX_PA11_PinState                        GPIO_PIN_RESET
#define MX_PA11_GPIO_PuPd                       GPIO_NOPULL
#define MX_SPI2_NSS                             PA11
#define MX_PA11_GPIO_Pin                        GPIO_PIN_11
#define MX_PA11_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PI2 */
#define MX_PI2_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PI2_Pin                              PI2
#define MX_PI2_GPIOx                            GPIOI
#define MX_PI2_PinState                         GPIO_PIN_RESET
#define MX_PI2_GPIO_PuPd                        GPIO_NOPULL
#define MX_WIFI_WKUP                            PI2
#define MX_PI2_GPIO_Pin                         GPIO_PIN_2
#define MX_PI2_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PI1 */
#define MX_PI1_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PI1_Pin                              PI1
#define MX_PI1_GPIOx                            GPIOI
#define MX_PI1_PinState                         GPIO_PIN_RESET
#define MX_PI1_GPIO_PuPd                        GPIO_NOPULL
#define MX_WIFI_RST                             PI1
#define MX_PI1_GPIO_Pin                         GPIO_PIN_1
#define MX_PI1_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PI4 */
#define MX_PI4_Pin                              PI4
#define MX_PI4_GPIOx                            GPIOI
#define MX_PI4_GPIO_PuPd                        GPIO_NOPULL
#define MX_WIFI_GPIO                            PI4
#define MX_PI4_GPIO_Pin                         GPIO_PIN_4
#define MX_PI4_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PG2 */
#define MX_PG2_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PG2_Pin                              PG2
#define MX_PG2_GPIOx                            GPIOG
#define MX_PG2_PinState                         GPIO_PIN_RESET
#define MX_PG2_GPIO_PuPd                        GPIO_NOPULL
#define MX_USER_LED2                            PG2
#define MX_PG2_GPIO_Pin                         GPIO_PIN_2
#define MX_PG2_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PI3 */
#define MX_PI3_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PI3_Pin                              PI3
#define MX_PI3_GPIOx                            GPIOI
#define MX_PI3_PinState                         GPIO_PIN_RESET
#define MX_PI3_GPIO_PuPd                        GPIO_NOPULL
#define MX_WIFI_BOOT                            PI3
#define MX_PI3_GPIO_Pin                         GPIO_PIN_3
#define MX_PI3_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PI5 */
#define MX_PI5_Pin                              PI5
#define MX_PI5_GPIOx                            GPIOI
#define MX_PI5_GPIO_PuPd                        GPIO_NOPULL
#define MX_WIFI_DATRDY                          PI5
#define MX_PI5_GPIO_Pin                         GPIO_PIN_5
#define MX_PI5_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PG3 */
#define MX_PG3_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PG3_Pin                              PG3
#define MX_PG3_GPIOx                            GPIOG
#define MX_PG3_PinState                         GPIO_PIN_SET
#define MX_PG3_GPIO_PuPd                        GPIO_NOPULL
#define MX_AUDIO_NRST                           PG3
#define MX_PG3_GPIO_Pin                         GPIO_PIN_3
#define MX_PG3_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PI8 */
#define MX_PI8_Pin                              PI8
#define MX_PI8_GPIOx                            GPIOI
#define MX_PI8_GPIO_PuPd                        GPIO_PULLUP
#define MX_uSD_Detect                           PI8
#define MX_PI8_GPIO_Pin                         GPIO_PIN_8
#define MX_PI8_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

#endif  /* __MX_DEVICE_H */

