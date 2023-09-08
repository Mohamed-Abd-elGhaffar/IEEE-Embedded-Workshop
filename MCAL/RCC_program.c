//* ===========================================================================
//*                      Author      : Mohamed Reda Mohamed
//*                      Date        : 7/9/2023
//*                      Version     : 0.1
//*                      Module      : MCAL_RCC_program.c
//* ===========================================================================

/************************************< LIB >**********************************/
#include<STD_TYPES.h>
#include<BIT_MATH.h>

/************************************< MCAL >*********************************/
#include<RCC_config.h>
#include<RCC_interface.h>
#include<RCC_private.h>

Std_ReturnType Mcal_Rcc_InitSySClock()
{

/************************<Implementing th choosen clock>**********************/
    #if RCC_SYS_CLK == RCC_HSI              //*HSI Implementation
        SET_BIT(RCC_CR, RCC_CR_HSION);
        while (!RCC_CR_HSIRDY);             //Waiting for HSI to start
        RCC_CFGR = 0x0;
    
    #elif RCC_SYS_CLK == RCC_HSE            //*HSE Implementation    
        #if RCC_HSE_TYPE == RCC_HSE_CRY
            CLR_BIT(RCC_CR, RCC_CR_HSEBYP);
            SET_BIT(RCC_CR, RCC_CR_HSEON);
            while (!RCC_CR_HSERDY);         //Waiting for HSE to start
        #elif RCC_HSE_TYPE == RCC_HSE_RC
            SET_BIT(RCC_CR, RCC_CR_HSEBYP);
            SET_BIT(RCC_CR, RCC_CR_HSEON);
            while (!RCC_CR_HSERDY);     
        #else
            #error "Please choose a suitable external clock"
        #endif
        RCC_CFGR = 0x00000001
        SET_BIT(RCC_CR, RCC_CR_CSSON):      //*Activating the security system
    
    #elif RCC_CLK_SYS == RCC_PLL
        SET_BIT(RCC_CR, RCC_CR_PLLON);
            while (!RCC_CR_PLLRDY);     
        RCC_CFGR = 0x00000002
    
    #else
        #error "Please choose a suitable clock"

    #endif
}

Std_ReturnType Mcal_Rcc_EnablePeripheral()
{

}

Std_ReturnType Mcal_Rcc_DisablePeripheral()
{

}
