//* ===========================================================================
//*                      Author      : Mohamed Reda Mohamed
//*                      Date        : 7/9/2023
//*                      Version     : 0.1
//*                      Module      : MCAL_RCC_private.h
//* ===========================================================================

#ifndef RCC_PRIVATE_H_  
    
    #define RCC_PRIVATE_H_

/*******************************< RCC >*************************************/
    #define RCC_Base_ADDRESS                     0x40021000
    #define RCC_CR              *((volatile u32*)0x40021000) 
    #define RCC_CFGR            *((volatile u32*)0x40021004) 
    #define RCC_CIR             *((volatile u32*)0x40021008) 
    #define RCC_APB2RSTR        *((volatile u32*)0x4002100C) 
    #define RCC_APB1RSTR        *((volatile u32*)0x40021010) 
    #define RCC_AHBENR          *((volatile u32*)0x40021014) 
    #define RCC_APB2ENR         *((volatile u32*)0x40021018) 
    #define RCC_APB1ENR         *((volatile u32*)0x4002101C) 
    #define RCC_BDCR            *((volatile u32*)0x40021020) 
    #define RCC_CSR             *((volatile u32*)0x40021024) 

    #define RCC_HSI             0
    #define RCC_HSE             1
    #define RCC_PLL             2

    #define RCC_HSE_CRY         0
    #define RCC_HSE_RC          1        

/*******************************< RCC_CR_BITS >******************************/
    #define RCC_CR_HSION        0
    #define RCC_CR_HSIRDY       1
    #define RCC_CR_HSEON        16
    #define RCC_CR_HSERDY       17
    #define RCC_CR_HSEBYP       18
    #define RCC_CR_CSSON        19
    #define RCC_CR_PLLON        24
    #define RCC_CR_PLLRDY       25

/*******************************< RCC_CFGR_BITS >****************************/
         
#endif
