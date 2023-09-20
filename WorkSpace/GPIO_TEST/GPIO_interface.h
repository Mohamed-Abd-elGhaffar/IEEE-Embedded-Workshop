// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 13/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_GPIO_interface.h
// * ===========================================================================

#ifndef GPIO_INTERFACE_H_
    #define GPIO_INTERFACE_H_

Std_ReturnType Mcal_Gpio_SetPinMode(u8 Port, u8 Pin, u8 Mode);

Std_ReturnType Mcal_Gpio_SetPinValue(u8 Port, u8 Pin, u8 Value);

Std_ReturnType Mcal_Gpio_GetPinValue(u8 Port, u8 Pin, u8* ValLoc);

#define GPIO_PORT_A                 0
#define GPIO_PORT_B                 1
#define GPIO_PORT_C                 2

#define GPIO_PIN0                   0
#define GPIO_PIN1                   1
#define GPIO_PIN2                   2
#define GPIO_PIN3                   3
#define GPIO_PIN4                   4
#define GPIO_PIN5                   5
#define GPIO_PIN6                   6
#define GPIO_PIN7                   7
#define GPIO_PIN8                   8
#define GPIO_PIN9                   9
#define GPIO_PIN10                  10
#define GPIO_PIN11                  11
#define GPIO_PIN12                  12
#define GPIO_PIN13                  13
#define GPIO_PIN14                  14
#define GPIO_PIN15                  15

#define INPUT_ANALOG                0b0000U
#define INPUT_FLOATING              0b0100U
#define INPUT_PULL_DOWN             0b1000U
#define INPUT_PULL_UP               0b1000U

#define OUTPUT_PUSH_PULL            0b0001U
#define OUTPUT_OPEN_DRAIN           0b0101U
#define AF_OUTPUT_PUSH_PULL         0b1001U
#define AF_OUTPUT_OPEN_DRAIN        0b1101U

#define OUTPUT_PUSH_PULL_HF         0b0011U
#define OUTPUT_OPEN_DRAIN_HF        0b0111U
#define AF_OUTPUT_PUSH_PULL_HF      0b1011U
#define AF_OUTPUT_OPEN_DRAIN_HF     0b1111U

#define OUTPUT_PUSH_PULL_LF         0b0010U
#define OUTPUT_OPEN_DRAIN_LF        0b0110U
#define AF_OUTPUT_PUSH_PULL_LF      0b1010U
#define AF_OUTPUT_OPEN_DRAIN_LF     0b1110U

#define GPIO_LOW                    0
#define GPIO_HIGH                   1

#endif