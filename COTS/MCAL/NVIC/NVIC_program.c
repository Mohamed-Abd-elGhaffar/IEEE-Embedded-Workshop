// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_NVIC_program.c
// * ===========================================================================

/************************************< LIB >**********************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/************************************< MCAL >*********************************/
#include "NVIC_config.h"
#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "SCB_interface.h"
#include "SCB_config.h"

/**********************************< Functions >*******************************/

Std_ReturnType NVIC_EnableIRQ(IRQn_t copy_IRQn)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    switch (copy_IRQn)
    {
    case 0 ... 31:
        NVIC_ISER0 = (1 << copy_IRQn);
        Local_Function_Status = E_OK;
        break;

    case 32 ... 63:
        NVIC_ISER1 = (1 << (copy_IRQn-32));
        Local_Function_Status = E_OK;
        break;

    case 64 ... 67:
        NVIC_ISER2 = (1 << (copy_IRQn-64));
        Local_Function_Status = E_OK;
        break;
    
    default:
        Local_Function_Status = E_NOT_OK;
        break;
    }
    
    return Local_Function_Status;
}

Std_ReturnType NVIC_DisableIRQ(IRQn_t copy_IRQn)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    switch (copy_IRQn)
    {
    case 0 ... 31:
        NVIC_ICER0 = (1 << copy_IRQn);
        Local_Function_Status = E_OK;
        break;

    case 32 ... 63:
        NVIC_ICER1 = (1 << (copy_IRQn-32));
        Local_Function_Status = E_OK;
        break;

    case 64 ... 67:
        NVIC_ICER2 = (1 << (copy_IRQn-64));
        Local_Function_Status = E_OK;
        break;
    
    default:
        Local_Function_Status = E_NOT_OK;
        break;
    }
    
    return Local_Function_Status;
}

Std_ReturnType NVIC_SetPendingIRQ (IRQn_t copy_IRQn)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    switch (copy_IRQn)
    {
    case 0 ... 31:
        NVIC_ISPR0 = (1 << copy_IRQn);
        Local_Function_Status = E_OK;
        break;

    case 32 ... 63:
        NVIC_ISPR1 = (1 << (copy_IRQn-32));
        Local_Function_Status = E_OK;
        break;

    case 64 ... 67:
        NVIC_ISPR2 = (1 << (copy_IRQn-64));
        Local_Function_Status = E_OK;
        break;
    
    default:
        Local_Function_Status = E_NOT_OK;
        break;
    }
    
    return Local_Function_Status;
}

Std_ReturnType NVIC_ClearPendingIRQ (IRQn_t copy_IRQn)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    switch (copy_IRQn)
    {
    case 0 ... 31:
        NVIC_ICPR0 = (1 << copy_IRQn);
        Local_Function_Status = E_OK;
        break;

    case 32 ... 63:
        NVIC_ICPR1 = (1 << (copy_IRQn-32));
        Local_Function_Status = E_OK;
        break;

    case 64 ... 67:
        NVIC_ICPR2 = (1 << (copy_IRQn-64));
        Local_Function_Status = E_OK;
        break;
    
    default:
        Local_Function_Status = E_NOT_OK;
        break;
    }
    
    return Local_Function_Status;
}

Std_ReturnType NVIC_GetPendingIRQ (IRQn_t copy_IRQn)
{
    switch (copy_IRQn)
    {
    case 0 ... 31:
        return GET_BIT(NVIC_ISPR0,copy_IRQn);
        break;

    case 32 ... 63:
        return GET_BIT(NVIC_ISPR1,(copy_IRQn-32));
        break;

    case 64 ... 67:
        return GET_BIT(NVIC_ISPR2,(copy_IRQn-64));
        break;
    
    default:
        return 255;
        break;
    }
}

u8 NVIC_GetActive (IRQn_t copy_IRQn)
{
    switch (copy_IRQn)
    {
    case 0 ... 31:
        return GET_BIT(NVIC_IABR0,copy_IRQn);
        break;

    case 32 ... 63:
        return GET_BIT(NVIC_IABR1,(copy_IRQn-32));
        break;

    case 64 ... 67:
        return GET_BIT(NVIC_IABR2,(copy_IRQn-64));
        break;
    
    default:
        return 255;
        break;
    }
}

Std_ReturnType NVIC_SetPriority (IRQn_t copy_IRQn,u8 gPriority ,u8 sPriority)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;
    
    #if (MCAL_NVIC_PG == NVIC_0G_16S || MCAL_NVIC_PG == NVIC_2G_8S || MCAL_NVIC_PG == NVIC_4G_4S || MCAL_NVIC_PG == NVIC_8G_2S || MCAL_NVIC_PG == NVIC_16G_0S)
        
        if (copy_IRQn <= Max_Peripheral_Num && gPriority <= (Max_Priotrity - MCAL_NVIC_PG) && sPriority <= MCAL_NVIC_PG)
        {
            Mcal_Scb_Nvic_config(NVIC_0G_16S_MASK);
            u32 Local_Index = (u32)(copy_IRQn/4);
            u32 x = ((gPriority <<(MCAL_NVIC_PG_BIN - NVIC_16G_0S_BIN)));
            u32 X = ((X | sPriority) << 4);
            u32 Y = (X << ((copy_IRQn % 4)*8));
            NVIC_IPR[Local_Index] = Y;

            Local_Function_Status = E_OK;
        }
        
        else
        {
            Local_Function_Status = E_NOT_OK;
        }
        
    #else
        #error "Please make sure that ur number maches the number of interrupts"
    #endif

    return Local_Function_Status;
}

// Std_ReturnType NVIC_SetPriorityGrouping(u32 priority_grouping)
// {
// 
// }

u8 NVIC_GetPriority (IRQn_t copy_IRQn)
{

}

Std_ReturnType NVIC_SystemReset (void)
{

}
