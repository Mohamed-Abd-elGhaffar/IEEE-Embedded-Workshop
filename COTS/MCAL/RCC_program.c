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

/************************<Implementing the choosen clock>**********************/

/**
 * @brief This function enables the chosen clock - That the user chose in 
 *        RCC_Config.h - then it defines it as the system clock
 *        
 * @return Std_ReturnType Local_Function_Status
 *         -E_OK if the function was completed successfully
 *         -E_NOT_OK if the function wasn't completed successfully
 */
Std_ReturnType Mcal_Rcc_InitSySClock()
{

/**
 * @brief Local_Function_Status is a Boolean Which has to main values
 *
 * @param E_OK Whose value is 1 and it means that the function was completed
 *             successfully
 * 
 * @param E_NOT_OK Whose value is 0 and it means that the function wasn't 
 *                 completed successfully
 * 
 * @warning a watchdog needs to be defined in order to avoid endless looping
 *          in case the function failed to start
 */
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    #if RCC_SYS_CLK == RCC_HSI              //*HSI Implementation
        SET_BIT(RCC_CR, RCC_CR_HSION);
        while (!RCC_CR_HSIRDY);             //Waiting for HSI to start
        RCC_CFGR = 0x0;
        Local_Function_Status = E_OK;
    #elif RCC_SYS_CLK == RCC_HSE            //*HSE Implementation    
        #if RCC_HSE_TYPE == RCC_HSE_CRY
            CLR_BIT(RCC_CR, RCC_CR_HSEBYP);
            SET_BIT(RCC_CR, RCC_CR_HSEON);
            while (!RCC_CR_HSERDY);         //Waiting for HSE to start
        
        #elif RCC_HSE_TYPE == RCC_HSE_RC
            SET_BIT(RCC_CR, RCC_CR_HSEBYP);
            SET_BIT(RCC_CR, RCC_CR_HSEON);
            while (!RCC_CR_HSERDY);     
        
        /**
         * @brief To avoid user based errors if the user wrote an incompatible
         *        value an error is returned
         */
        #else
            #error "Please choose a suitable external clock"
        #endif

        RCC_CFGR = 0x00000001;
        SET_BIT(RCC_CR, RCC_CR_CSSON):      //*Activating the HSE security system
        Local_Function_Status = E_OK;    
    
    #elif RCC_CLK_SYS == RCC_PLL            //*PLL Implementation
        SET_BIT(RCC_CR, RCC_CR_PLLON);
            while (!RCC_CR_PLLRDY);         //Waiting for PLL to start   
        RCC_CFGR = 0x00000002;
        Local_Function_Status = E_OK;
    
        /**
         * @brief To avoid user based errors if the user wrote an incompatible
         *        value an error is returned
         */
    #else
        #error "Please choose a suitable clock"

    #endif

    return Local_Function_Status;
}

/**
 * @brief Used to enable a certain peripheral on AHB, APB1 and APB2 busses
 * 
 * @param Rcc_PeripheralBus Bus value (RCC_AHB, RCC_APB_1, RCC_APB_2)
 * @param Rcc_PeripheralBit Peripheral Bit Number (ex: RCC_APB1ENR_USART2EN, etc...)
 * @return Std_ReturnType Local_Function_Status
 *        -E_OK if the function was completed successfully
 *        -E_NOT_OK if the function wasn't completed successfully  
 */
Std_ReturnType Mcal_Rcc_EnablePeripheral(u8 Rcc_PeripheralBus, u8 Rcc_PeripheralBit)
{

    /**
     * @brief Local_Function_Status is a Boolean Which has to main values
     *
     * @param E_OK Whose value is 1 and it means that the function was completed
     *             successfully
     * 
     * @param E_NOT_OK Whose value is 0 and it means that the function wasn't 
     *                 completed successfully
     */
    Std_ReturnType Local_Function_Status = E_NOT_OK;
    switch (Rcc_PeripheralBus)
    {
    case RCC_AHB:
        SET_BIT(RCC_AHBENR, Rcc_PeripheralBit);
        Local_Function_Status = E_OK;
    break;
    
    case RCC_APB_1:
        SET_BIT(RCC_APB1ENR, Rcc_PeripheralBit);
        Local_Function_Status = E_OK;
    break;

    case RCC_APB_2:
        SET_BIT(RCC_APB2ENR, Rcc_PeripheralBit);
        Local_Function_Status = E_OK;
    break;

    default:
        /**
         * @brief To avoid user based errors if the user wrote an incompatible
         *        value an error is returned
         */
        #error "A suitable Peripheral bus must be chosen"
        Local_Function_Status = E_NOT_OK;
    break;
    }
    return Local_Function_Status;
}

/**
 * @brief Used to disable a certain peripheral on AHB, APB1 and APB2 busses
 * 
 * @param Rcc_PeripheralBus Bus value (RCC_AHB, RCC_APB_1, RCC_APB_2)
 * @param Rcc_PeripheralBit Peripheral Bit Number (ex: RCC_APB1ENR_USART2EN, etc...)
 * @return Std_ReturnType Local_Function_Status
 *        -E_OK if the function was completed successfully
 *        -E_NOT_OK if the function wasn't completed successfully  
 */
Std_ReturnType Mcal_Rcc_DisablePeripheral(u8 Rcc_PeripheralBus, u8 Rcc_PeripheralBit)
{

    /**
     * @brief Local_Function_Status is a Boolean Which has to main values
     *
     * @param E_OK Whose value is 1 and it means that the function was completed
     *             successfully
     * 
     * @param E_NOT_OK Whose value is 0 and it means that the function wasn't 
     *                 completed successfully
     */
    Std_ReturnType Local_Function_Status = E_NOT_OK;
    switch (Rcc_PeripheralBus)
    {
    case RCC_AHB:
        CLR_BIT(RCC_AHBENR, Rcc_PeripheralBit);
        Local_Function_Status = E_OK;
    break;
    
    case RCC_APB_1:
        CLR_BIT(RCC_APB1ENR, Rcc_PeripheralBit);
        Local_Function_Status = E_OK;
    break;

    case RCC_APB_2:
        CLR_BIT(RCC_APB2ENR, Rcc_PeripheralBit);
        Local_Function_Status = E_OK;
    break;

    default:
        /**
         * @brief To avoid user based errors if the user wrote an incompatible
         *        value an error is returned
         */
        #error "A suitable Peripheral bus must be chosen"
        Local_Function_Status = E_NOT_OK;
    break;
    }
    return Local_Function_Status;
}

/**
 * @brief Pll Properties such as Multiplication factor and source clock are set in this function
 * 
 * @return Std_ReturnType Local_Function_Status
 *         -E_OK if the function was completed successfully
 *         -E_NOT_OK if the function wasn't completed successfully 
 */
Std_ReturnType Mcal_Rcc_PllProperties()
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;
    
    //PLL source clock
    #if RCC_PLL_SRC == RCC_PLL_SRC_HSE
        SET_BIT(RCC_CFGR ,RCC_PLL_SRC_BIT);
        Local_Function_Status = E_OK;
    #elif RCC_PLL_SRC == RCC_PLL_SRC_HSI
        CLR_BIT(RCC_CFGR ,RCC_PLL_SRC_BIT);
        Local_Function_Status = E_OK;
    #else
        /**
        * @brief To avoid user based errors if the user wrote an incompatible
        *        value an error is returned
        */
        #error "please choose a suitable clock"
    #endif

    //PLL Frequency Multiplier
        #if PLL_MUL_FAC >= PLL_MUL_FAC_MIN && PLL_MUL_FAC <= PLL_MUL_FAC_MAX
        RCC_CFGR &= ~((0b1111) << 18);
        RCC_CFGR |= ((PLL_MUL_FAC - 2) << 18);
        Local_Function_Status = E_OK;
    #else
        /**
        * @brief To avoid user based errors if the user wrote an incompatible
        *        value an error is returned
        */
        #error "Please confirm that '2 <= PLL_MUL_FAC <= 16' "   
    #endif
    return Local_Function_Status;
}

