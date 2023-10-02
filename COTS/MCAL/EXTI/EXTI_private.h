// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_EXTI_private.h
// * ===========================================================================

#ifndef EXTI_PRIVATE_H_
    #define EXTI_PRIVATE_H_

    #define EXTI_BASE_ADDRESS               0x40010400U

    #define EXTI_IMR                        (*((volatile u32 *)(EXTI_BASE_ADDRESS + 0x00)))
    #define EXTI_EMR                        (*((volatile u32 *)(EXTI_BASE_ADDRESS + 0x04)))
    #define EXTI_RTSR                       (*((volatile u32 *)(EXTI_BASE_ADDRESS + 0x08)))
    #define EXTI_FTSR                       (*((volatile u32 *)(EXTI_BASE_ADDRESS + 0x0C)))
    #define EXTI_SWIER                      (*((volatile u32 *)(EXTI_BASE_ADDRESS + 0x10)))
    #define EXTI_PR                         (*((volatile u32 *)(EXTI_BASE_ADDRESS + 0x14)))

#endif