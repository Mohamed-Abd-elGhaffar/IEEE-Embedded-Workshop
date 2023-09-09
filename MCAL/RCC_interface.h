//* ===========================================================================
//*                      Author      : Mohamed Reda Mohamed
//*                      Date        : 7/9/2023
//*                      Version     : 0.1
//*                      Module      : MCAL_RCC_interface.h
//* ===========================================================================

#ifndef RCC_INTERFACE_H_         

    #define RCC_INTERFACE_H_

    Std_ReturnType Mcal_Rcc_InitSySClock();
    Std_ReturnType Mcal_Rcc_EnablePeripheral(u8 Rcc_PeripheralBus, u8 Rcc_PeripheralBit);
    Std_ReturnType Mcal_Rcc_DisablePeripheral(u8 Rcc_PeripheralBus, u8 Rcc_PeripheralBit);



#endif