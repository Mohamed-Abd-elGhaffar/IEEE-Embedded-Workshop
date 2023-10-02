// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_AFIO_private.h
// * ===========================================================================

#ifndef AFIO_PRIVATE_H_
    #define AFIO_PRIVATE_H_

     #define AFIO_BASE_ADDRESS              0x40010000U

     #define AFIO_EVCR                      (*((volatile u32 *)(AFIO_BASE_ADDRESS + 0x00)))
     #define AFIO_MAPR                      (*((volatile u32 *)(AFIO_BASE_ADDRESS + 0x04)))
     #define AFIO_EXTICR1                   (*((volatile u32 *)(AFIO_BASE_ADDRESS + 0x08)))
     #define AFIO_EXTICR2                   (*((volatile u32 *)(AFIO_BASE_ADDRESS + 0x0C)))
     #define AFIO_EXTICR3                   (*((volatile u32 *)(AFIO_BASE_ADDRESS + 0x10)))
     #define AFIO_EXTICR4                   (*((volatile u32 *)(AFIO_BASE_ADDRESS + 0x14)))
     #define AFIO_MAPR2                     (*((volatile u32 *)(AFIO_BASE_ADDRESS + 0x1C)))
     
     #endif