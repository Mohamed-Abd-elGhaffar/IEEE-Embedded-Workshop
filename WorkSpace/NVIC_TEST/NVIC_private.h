// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_NVIC_private.h
// * ===========================================================================

#ifndef NVIC_PRIVATE_H_
    #define NVIC_PRIVATE_H_

#define NVIC_BASE_ADDRESS           0xE000E100

/************************************< NVIC_ISER >*********************************/
#define NVIC_ISER0                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x000)))
#define NVIC_ISER1                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x004)))
#define NVIC_ISER2                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x008)))

/************************************< NVIC_ICER >*********************************/
#define NVIC_ICER0                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x080)))
#define NVIC_ICER1                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x084)))
#define NVIC_ICER2                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x088)))

/************************************< NVIC_ISPR >*********************************/
#define NVIC_ISPR0                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0100)))
#define NVIC_ISPR1                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0104)))
#define NVIC_ISPR2                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0108)))

/************************************< NVIC_ICPR >*********************************/
#define NVIC_ICPR0                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0180)))
#define NVIC_ICPR1                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0184)))
#define NVIC_ICPR2                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0188)))

/************************************< NVIC_IABR >*********************************/
#define NVIC_IABR0                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0200)))
#define NVIC_IABR1                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0204)))
#define NVIC_IABR2                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x0208)))

/************************************< NVIC_IPR >*********************************/
#define NVIC_IPR                    ((volatile u32 *)(NVIC_BASE_ADDRESS + 0x300))
// #define NVIC_IPR20                  (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0x320)))

/************************************< NVIC_STIR >*********************************/
#define NVIC_STIR                   (*((volatile u32 *)(NVIC_BASE_ADDRESS + 0xE00)))

#endif