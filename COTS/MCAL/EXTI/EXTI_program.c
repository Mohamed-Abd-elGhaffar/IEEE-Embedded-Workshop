// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_EXTI_program.c
// * ===========================================================================

/************************************< LIB >**********************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/************************************< MCAL >*********************************/
#include "EXTI_config.h"
#include "EXTI_interface.h"
#include "EXTI_private.h"

/**********************************< Functions >*******************************/
void Mcal_EXTI_EnableLine(u8 copy_ExtiLine)
{
    SET_BIT(EXTI_IMR, copy_ExtiLine);
}

void Mcal_EXTI_DisableLine(u8 copy_ExtiLine)
{
    CLR_BIT(EXTI_IMR, copy_ExtiLine);
}

Std_ReturnType Mcal_EXTI_LineMode(u8 copy_ExtiLine, u8 copy_Mode)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    switch (copy_Mode)
    {
    case EXTI_RISING:
        SET_BIT(EXTI_RTSR, copy_ExtiLine);
        CLR_BIT(EXTI_FTSR, copy_ExtiLine);
        Local_Function_Status = E_OK;
    break;

    case EXTI_FALLING:
        SET_BIT(EXTI_FTSR, copy_ExtiLine);
        CLR_BIT(EXTI_RTSR, copy_ExtiLine);
        Local_Function_Status = E_OK;
    break;
    
    case EXTI_ON_CHANGE:
        SET_BIT(EXTI_RTSR, copy_ExtiLine);
        SET_BIT(EXTI_FTSR, copy_ExtiLine);
        Local_Function_Status = E_OK;
    break;

    default:
        Local_Function_Status = E_NOT_OK;
    break;
    }
}

Std_ReturnType Mcal_EXTI_ClrPending(u8 copy_ExtiLine)
{
    SET_BIT(EXTI_PR, copy_ExtiLine);
}
