// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_EXTI_interface.h
// * ===========================================================================

#ifndef EXTI_INTERFACE_H_
    #define EXTI_INTERFACE_H_

    void Mcal_EXTI_EnableLine(u8 copy_ExtiLine);
    void Mcal_EXTI_DisableLine(u8 copy_ExtiLine);
    Std_ReturnType Mcal_EXTI_LineMode(u8 copy_ExtiLine, u8 copy_Mode);
    Std_ReturnType Mcal_EXTI_SetPending(u8 copy_ExtiLine);

    #define EXTI_LINE_0                 0
    #define EXTI_LINE_1                 1
    #define EXTI_LINE_2                 2
    #define EXTI_LINE_3                 3
    #define EXTI_LINE_4                 4
    #define EXTI_LINE_5                 5
    #define EXTI_LINE_6                 6
    #define EXTI_LINE_7                 7
    #define EXTI_LINE_8                 8
    #define EXTI_LINE_9                 9
    #define EXTI_LINE_10                10
    #define EXTI_LINE_11                11
    #define EXTI_LINE_12                12
    #define EXTI_LINE_13                13
    #define EXTI_LINE_14                14
    #define EXTI_LINE_15                15
    #define EXTI_LINE_16                16
    #define EXTI_LINE_17                17
    #define EXTI_LINE_18                18
    #define EXTI_LINE_19                19
    
    #define EXTI_RISING                 0
    #define EXTI_FALLING                1

#endif