// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 7/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_RCC_config.h
// * ===========================================================================

#ifndef RCC_CONFIG_H_  
    
    #define RCC_CONFIG_H_

    /**
     * @brief choose your desired system clock
     * 
     * @param RCC_HSI which will enable the High Speed Internal Clock
     * @param RCC_HSE which will enable the High Speed External Clock
     */
    #define RCC_SYS_CLK         RCC_HSE 
                             //?RCC_HSI

    /**
     * @brief //!If you choose RCC_HSE, you will have to choose its type
     * 
     * @param RCC_HSE_CRY Which will enable the crystal clock
     * @param RCC_HSE_RC  Which will enable the RC clock
     */
    #define RCC_HSE_TYPE        RCC_HSE_CRY
                             //?RCC_HSE_RC

    /**
     * @brief Choose your desired PLL source
     * 
     * @param RCC_PLL_SRC_HSI Which will make HSI the source clock for pll   
     * @param RCC_PLL_SRC_HSE Which will make HSE the source clock for pll   
     */
    #define RCC_PLL_SRC         RCC_PLL_SRC_HSE
                             //?RCC_PLL_SRC_HSI

    /**
     * @brief If the PLL source clock's frequency is below the desired frequency,
     *        you can change the following value to a suitable value that will be
     *        a multiplying factor for the PLL clock's frequency
     * 
     * @param PLL_MUL_FAC_MIN Is the lowest multiplying factor which is equal to "2" 
     * @param PLL_MUL_FAC_MIN Is the highest multiplying factor which is equal to "16" 
     * 
     * @note Any integer from "2" to "16" is eligible
     */
    #define PLL_MUL_FAC         PLL_MUL_FAC_MIN
                             //?PLL_MUL_FAC_MAX , any value from 2 --> 16

#endif