// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_SCB_Private.h
// * ===========================================================================

#ifndef SCB_PRIVATE_H_
    #define SCB_PRIVATE_H_

    #define SCB_BASE_ADDRESS                0xE000ED00U

    #define SCB_CPUID                       (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x00)))
    #define SCB_ICSR                        (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x04)))
    #define SCB_VTOR                        (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x08)))
    #define SCB_AIRCR                       (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x0C)))
    #define SCB_SCR                         (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x10)))
    #define SCB_CCR                         (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x14)))
    #define SCB_SHPR1                       (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x18)))
    #define SCB_SHPR2                       (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x1C)))
    #define SCB_SHPR3                       (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x20)))
    #define SCB_SHCSR                       (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x24)))
    #define SCB_CFSR                        (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x28)))
    #define SCB_HFSR                        (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x2C)))
    #define SCB_MMFAR                       (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x34)))
    #define SCB_BFAR                        (*((volatile u32 *)(SCB_BASE_ADDRESS + 0x38)))

#endif