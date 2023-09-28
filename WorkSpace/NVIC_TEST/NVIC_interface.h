// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_NVIC_interface.h
// * ===========================================================================

#ifndef NVIC_INTERFACE_H_
    #define NVIC_INTERFACE_H_

typedef u8 IRQn_t;

Std_ReturnType NVIC_EnableIRQ(IRQn_t copy_IRQn);
Std_ReturnType NVIC_DisableIRQ(IRQn_t copy_IRQn);
Std_ReturnType NVIC_SetPendingIRQ (IRQn_t copy_IRQn);
Std_ReturnType NVIC_ClearPendingIRQ (IRQn_t copy_IRQn);
Std_ReturnType NVIC_GetPendingIRQ (IRQn_t copy_IRQn);
u8 NVIC_GetActive (IRQn_t copy_IRQn);
Std_ReturnType NVIC_SetPriorityGrouping(u32 priority_grouping);
Std_ReturnType NVIC_SetPriority (IRQn_t copy_IRQn, u8 gPriority, u8 sPriority);
Std_ReturnType NVIC_GetPriority (IRQn_t copy_IRQn);
Std_ReturnType NVIC_SystemReset (void);

#define Max_Peripheral_Num              81
#define Max_Priotrity                   16

#endif