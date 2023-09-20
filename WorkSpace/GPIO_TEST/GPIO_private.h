// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 13/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_GPIO_private.h
// * ===========================================================================

#ifndef GPIO_PRIVATE_H_
    #define GPIO_PRIVATE_H_

/*********************************< GPIO >**************************************/
    #define GPIO_PA                 0x40010800U     //GPIO port A base address
    #define GPIO_PB                 0x40010C00U     //GPIO port B base address
    #define GPIO_PC                 0x40011000U     //GPIO port C base address

/****************************< GPIO REGISTERS >*********************************/
                           
                           /*****< PORT A >*****/
    #define GPIOA_CRL               (*((volatile u32 *)(GPIO_PA + 0x00)))     //Port A configuration register low
    #define GPIOA_CRH               (*((volatile u32 *)(GPIO_PA + 0x04)))     //Port A configuration register high
    #define GPIOA_IDR               (*((volatile u32 *)(GPIO_PA + 0x08)))     //Port A input data register
    #define GPIOA_ODR               (*((volatile u32 *)(GPIO_PA + 0x0C)))     //Port A output data register
    #define GPIOA_BSRR              (*((volatile u32 *)(GPIO_PA + 0x10)))     //Port A bit set/reset
    #define GPIOA_BRR               (*((volatile u32 *)(GPIO_PA + 0x14)))     //Port A bit reset register
    #define GPIOA_LCKR              (*((volatile u32 *)(GPIO_PA + 0x18)))     //Port A configuration lock register
                           
                           /*****< PORT B >*****/
    #define GPIOB_CRL               (*((volatile u32 *)(GPIO_PB + 0x00)))     //Port B configuration register low
    #define GPIOB_CRH               (*((volatile u32 *)(GPIO_PB + 0x04)))     //Port B configuration register high
    #define GPIOB_IDR               (*((volatile u32 *)(GPIO_PB + 0x08)))     //Port B input data register
    #define GPIOB_ODR               (*((volatile u32 *)(GPIO_PB + 0x0C)))     //Port B output data register
    #define GPIOB_BSRR              (*((volatile u32 *)(GPIO_PB + 0x10)))     //Port B bit set/reset
    #define GPIOB_BRR               (*((volatile u32 *)(GPIO_PB + 0x14)))     //Port B bit reset register
    #define GPIOB_LCKR              (*((volatile u32 *)(GPIO_PB + 0x18)))     //Port B configuration lock register
                           
                           /*****< PORT C >*****/
    #define GPIOC_CRL               (*((volatile u32 *)(GPIO_PC + 0x00)))     //Port C configuration register low
    #define GPIOC_CRH               (*((volatile u32 *)(GPIO_PC + 0x04)))     //Port C configuration register high
    #define GPIOC_IDR               (*((volatile u32 *)(GPIO_PC + 0x08)))     //Port C input data register
    #define GPIOC_ODR               (*((volatile u32 *)(GPIO_PC + 0x0C)))     //Port C output data register
    #define GPIOC_BSRR              (*((volatile u32 *)(GPIO_PC + 0x10)))     //Port C bit set/reset
    #define GPIOC_BRR               (*((volatile u32 *)(GPIO_PC + 0x14)))     //Port C bit reset register
    #define GPIOC_LCKR              (*((volatile u32 *)(GPIO_PC + 0x18)))     //Port C configuration lock register

#endif