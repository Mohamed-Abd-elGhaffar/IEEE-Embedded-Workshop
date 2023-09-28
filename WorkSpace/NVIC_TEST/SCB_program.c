// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_SCB_program.c
// * ===========================================================================

/************************************< LIB >**********************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/************************************< MCAL >*********************************/
#include "SCB_config.h"
#include "SCB_interface.h"
#include "SCB_private.h"

/**********************************< Functions >*******************************/
Std_ReturnType Mcal_Scb_Nvic_config(u32 Copy_PriorityGrouping)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;
    SCB_AIRCR = Copy_PriorityGrouping;
}