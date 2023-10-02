// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_SCB_interface.h
// * ===========================================================================

#ifndef SCB_INTERFACE_H_
    #define SCB_INTERFACE_H_
        
    void Mcal_Scb_Nvic_config(u32 Copy_PriorityGrouping);

    #define NVIC_16G_0S                 0
    #define NVIC_8G_2S                  2
    #define NVIC_4G_4S                  4
    #define NVIC_2G_8S                  8
    #define NVIC_0G_16S                 16

    #define NVIC_16G_0S_MASK            0x05FA0300U
    #define NVIC_8G_2S_MASK             0x05FA0400U
    #define NVIC_4G_4S_MASK             0x05FA0500U
    #define NVIC_2G_8S_MASK             0x05FA0600U
    #define NVIC_0G_16S_MASK            0x05FA0700U

    #define NVIC_16G_0S_BIN             0b011
    #define NVIC_8G_2S_BIN              0b100
    #define NVIC_4G_4S_BIN              0b101
    #define NVIC_2G_8S_BIN              0b110
    #define NVIC_0G_16S_BIN             0b111
#endif