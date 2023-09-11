/* ===========================================================================
*                      Author      : Mohamed Reda Mohamed
*                      Date        : 7/9/2023
*                      Version     : 0.1
*                      Module      : MCAL_RCC_interface.h
* ============================================================================*/

#ifndef RCC_INTERFACE_H_         

    #define RCC_INTERFACE_H_

    Std_ReturnType Mcal_Rcc_InitSySClock();
    Std_ReturnType Mcal_Rcc_EnablePeripheral(u8 Rcc_PeripheralBus, u8 Rcc_PeripheralBit);
    Std_ReturnType Mcal_Rcc_DisablePeripheral(u8 Rcc_PeripheralBus, u8 Rcc_PeripheralBit);
    Std_ReturnType Mcal_Rcc_PllProperties();
    
/*******************************< RCC >*************************************/
    /**
     * @brief Definition for The High Speed Internal clock signal (HSI)
     * 
     * - The HSI clock signal is generated from an internal 8 MHz RC Oscillator
     *   and can be used directly as a system clock or divided by 2 to be used
     *   as PLL input. 
     * 
     * @note The HSI RC oscillator has the advantage of providing a clock source
     *       at low cost (no external components). It also has a faster startup
     *       time than the HSE crystal oscillator however, even with calibration
     *       the frequency is less accurate than an external crystal oscillator
     *       or ceramic resonator.
     */    
    #define RCC_HSI                 0

    /**
     * @brief Definition for The High Speed External clock signal (HSE)
     * 
     * @note: HSE is an external clock system that can be an RC clock, 
     *        Ceramic resonator or Crystal resonator and it's type will
     *        be defined later in this file and chosen in RCC_CONFIG.h as
     * 
     * @param RCC_HSE_RC In this mode, an external clock source (mainly RC 
     *        Clocks) must be provided. It can have a frequency of up to 50 MHz.
     *        Select this mode by Changing the value of RCC_HSE_TYPE in RCC_Config.h.
     *        The external clock signal (square, sinus or triangle) with ~50% duty 
     *        cycle has to drive the OSC_IN pin while the OSC_OUT pin should be left
     *        untouched
     * 
     * @param RCC_HSE_CRY In this mide, a 3-25 MHz external oscillator is connected
     *                    to OSC_IN and OSC_OUT. The 3 to 25 MHz external oscillator
     *                    has the advantage of producing a very accurate rate on the
     *                    main clock.
     */
    #define RCC_HSE                 1
    #define RCC_HSE_CRY             0
    #define RCC_HSE_RC              1

    /**
     * @brief Definition for the Phase Locked Loop (PLL)
     * 
     * @note The main PLL provides a frequency multiplier starting from one of the
     *       following clock sources:
     *          • HSI clock divided by 2
     *          • HSE or PLL2 clock through a configurable divider
     * 
     */
    #define RCC_PLL                 2

    /**
     * @brief Definition for Advanced High-performance Bus (AHB) and Advanced Peripheral 
     *        Bus (APB).
     * 
     * @note The two AHB/APB bridges provide full synchronous connections between the 
     *       AHB and the 2 APB buses. APB1 is limited to 36 MHz, APB2 operates at full
     *       speed (up to 72 MHz depending on the device).
     *              
     * @param RCC_AHB Is the definition of the Advanced High-performance Bus (AHB)
     * @param RCC_APB_1 Is the definition of the first Advanced Peripheral Bus (APB1)
     * @param RCC_APB_2 Is the definition of the second Advanced Peripheral Bus (APB2)
     */
    #define RCC_AHB                 0
    #define RCC_APB_1               1
    #define RCC_APB_2               2

/*******************************< PLL >*************************************/
    /**
     * @brief Used to define the bit responsible of defining PLLSRC in RCC_CFGR register 
     */
    #define RCC_PLL_SRC_BIT         16

    /**
     * @brief Used to define the PLLSRC type
     * 
     * @param RCC_PLL_SRC_HSI HSI is used as PLL source
     * @param RCC_PLL_SRC_HSE HSE is used as PLL source 
     */
    #define RCC_PLL_SRC_HSI         0
    #define RCC_PLL_SRC_HSE         1
    
    /**
     * @brief used to define the maximum and minimum PLL multiplication factor
     */
    #define PLL_MUL_FAC_MIN         2
    #define PLL_MUL_FAC_MAX         16

/*******************************< RCC_CR_BITS >******************************/
    #define RCC_CR_HSION            0   //Internal high-speed clock enable
    #define RCC_CR_HSIRDY           1   //Internal high-speed clock ready flag
    #define RCC_CR_HSEON            16  //External high-speed clock enable
    #define RCC_CR_HSERDY           17  //External high-speed clock ready flag
    #define RCC_CR_HSEBYP           18  //External high-speed clock bypass

    /**
     * @brief Clock security system enable, When CSSON is set, the clock detector
     *        is enabled by hardware when the HSE oscillator is ready, and disabled
     *        by hardware if a HSE clock failure is detected, which can be used to
     *        protect our system from hse clock failure
     */
    #define RCC_CR_CSSON            19

    #define RCC_CR_PLLON            24  //PLL enable
    #define RCC_CR_PLLRDY           25  //PLL clock ready flag

/*******************************< RCC_AHBENR_BITS >*************************/
    #define RCC_AHBENR_DMA1EN       0   //DMA1 clock enable
    #define RCC_AHBENR_DMA2EN       1   //DMA2 clock enable
    #define RCC_AHBENR_SRAMEN       2   //SRAM interface clock enable
    #define RCC_AHBENR_FLITFEN      4   //FLITF clock enable
    #define RCC_AHBENR_CRCEN        6   //CRC clock enable
    #define RCC_AHBENR_FSMCEN       8   //FSMC clock enable
    #define RCC_AHBENR_SDIOEN       10  //SDIO clock enable

/*******************************< RCC_APB1ENR_BITS >************************/
                          /*****< Timers >*****/
    #define RCC_APB1ENR_TIM2EN      0   //TIM2 timer clock enable
    #define RCC_APB1ENR_TIM3EN      1   //TIM3 timer clock enable
    #define RCC_APB1ENR_TIM4EN      2   //TIM4 timer clock enable
    #define RCC_APB1ENR_TIM5EN      3   //TIM5 timer clock enable
    #define RCC_APB1ENR_TIM6EN      4   //TIM6 timer clock enable
    #define RCC_APB1ENR_TIM7EN      5   //TIM7 timer clock enable
    #define RCC_APB1ENR_TIM12EN     6   //TIM12 timer clock enable
    #define RCC_APB1ENR_TIM13EN     7   //TIM13 timer clock enable
    #define RCC_APB1ENR_TIM14EN     8   //TIM14 timer clock enable

                        /*****< Watch dog >*****/
    #define RCC_APB1ENR_WWDGEN      11  //Window watchdog clock enable
    
                           /*****< SPI >*****/
    #define RCC_APB1ENR_SPI2EN      14  //SPI2 clock enable
    #define RCC_APB1ENR_SPI3EN      15  //SPI3 clock enable
    
                          /*****< USART >*****/
    #define RCC_APB1ENR_USART2EN    17  //USART2 clock enable
    #define RCC_APB1ENR_USART3EN    18  //USART3 clock enable
    #define RCC_APB1ENR_USART4EN    19  //USART4 clock enable
    #define RCC_APB1ENR_USART5EN    20  //USART5 clock enable
    
                           /*****< I2C >*****/
    #define RCC_APB1ENR_I2C1EN      21  //I2C1 clock enable
    #define RCC_APB1ENR_I2C2EN      22  //I2C2 clock enable
    
                           /*****< USB >*****/
    #define RCC_APB1ENR_USBEN       23  //USB clock enable
    
                           /*****< CAN >*****/
    #define RCC_APB1ENR_CANEN       25  //CAN clock enable
    
                         /*****< Back_Up >*****/
    #define RCC_APB1ENR_BKPEN       27  //Backup interface clock enable
    
                     /*****< Power Interface>*****/
    #define RCC_APB1ENR_PWREN       28  //Power interface clock enable
    
                           /*****< DAC >*****/
    #define RCC_APB1ENR_DACEN       29  //DAC interface clock enable

/*******************************< RCC_APB2ENR_BITS >************************/
                          /*****< Timers >*****/
    #define RCC_APB2ENR_TIM1EN      11  //TIM1 timer clock enable
    #define RCC_APB2ENR_TIM8EN      13  //TIM8 timer clock enable
    #define RCC_APB2ENR_TIM9EN      19  //TIM9 timer clock enable
    #define RCC_APB2ENR_TIM10EN     20  //TIM10 timer clock enable
    #define RCC_APB2ENR_TIM11EN     21  //TIM11 timer clock enable
    
                          /*****< AFIO >*****/
    #define RCC_APB2ENR_ِAFIOEN      0   //Alternate function IO clock enable
    
                           /*****< I/O >*****/
    #define RCC_APB2ENR_IOPAEN      2   //IO port A clock enable
    #define RCC_APB2ENR_IOPBEN      3   //IO port B clock enable
    #define RCC_APB2ENR_IOPCEN      4   //IO port C clock enable
    #define RCC_APB2ENR_IOPDEN      5   //IO port D clock enable
    #define RCC_APB2ENR_IOPEEN      6   //IO port E clock enable
    #define RCC_APB2ENR_IOPFEN      7   //IO port F clock enable
    #define RCC_APB2ENR_IOPGEN      8   //IO port G clock enable
    
                           /*****< ADC >*****/
    #define RCC_APB2ENR_ADC1EN      9   //ADC 1 interface clock enable
    #define RCC_APB2ENR_ADC2EN      10  //ADC 2 interface clock enable
    #define RCC_APB2ENR_ADC3EN      15  //ADC 3 interface clock enable
    
                            /****< SPI >*****/
    #define RCC_APB2ENR_SPI1EN      12  //SPI1 clock enable
    
                          /*****< USART >*****/
    #define RCC_APB2ENR_USART1EN    14  //USART1 clock enable


#endif