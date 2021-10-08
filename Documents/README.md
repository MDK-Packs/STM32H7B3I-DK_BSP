# STMicroelectronics STM32H7B3I-DK

## Overview

The STM32H7B3I-DK Discovery kit is a complete demonstration and development platform for STMicroelectronics Arm® Cortex®-M7 core-based STM32H7B3LIH6QU microcontroller.

The STM32H7B3I-DK Discovery kit is used as a reference design for user application development before porting to the final product, thus simplifying the application development.

The full range of hardware features available on the board helps users enhance their application development by an evaluation of almost all peripherals (such as USB OTG_HS, microSD, USART, FDCAN, audio DAC stereo with audio jack input and output, camera, SDRAM, Octo-SPI Flash memory and RGB interface LCD with capacitive touch panel). ARDUINO® Uno V3 connectors provide easy connection to extension shields or daughterboards for specific applications.

STLINK-V3E is integrated into the board, as the embedded in-circuit debugger and programmer for the STM32 MCU and USB Virtual COM port bridge.
The STM32H7B3I-DK board comes with the STM32CubeH7 MCU Package, which provides an STM32 comprehensive software HAL library as well as various software examples. 

## Schematics

- [STM32H7B3I-DK board schematic](https://www.st.com/resource/en/schematic_pack/mb1332-h7b3i-c01_schematic.pdf)

## CMSIS-Drivers

This board support pack contains a CMSIS-Driver for the [VIO](https://arm-software.github.io/CMSIS_5/develop/Driver/html/group__vio__interface__gr.html) interface. This is a virtual I/O abstraction for peripherals that are typically used in example projects. The **Blinky** example uses this interface to create a blinking light with the USER LED mounted on the board that can be controlled by the **Button USER**.

Virtual Resource  | Variable       | Physical Resource on STM32H7B3I-DK |
:-----------------|:---------------|:-----------------------------------|
vioBUTTON0        | vioSignalIn.0  | Button USER (PC13)                 |
vioLED0           | vioSignalOut.0 | LD3 RED (PG11)                     |
vioLED1           | vioSignalOut.1 | LD2 BLUE (PG2)                     |
virtual terminal  |                | GLCD 4.3 inch (480 x 272 pixel)    |

Refer to the [schematics](#schematics) for board connection information.
