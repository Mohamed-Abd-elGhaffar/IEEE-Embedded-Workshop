// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 13/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_GPIO_program.c
// * ===========================================================================

/************************************< LIB >**********************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/************************************< MCAL >*********************************/
#include "GPIO_config.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"

/************************************< Functions >*********************************/
Std_ReturnType Mcal_Gpio_SetPinMode(u8 Port, u8 Pin, u8 Mode)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;
    switch (Port)
    {
    case GPIO_PORT_A:
        if (Pin >= 0 && Pin <=7)
        {
            GPIOA_CRL &= (~(0b1111 << (Pin * 4)));
            GPIOA_CRL |= (Mode << (Pin * 4));
            Local_Function_Status = E_OK;
        }
        else if (Pin >= 8 && Pin <= 15)
        {
            GPIOA_CRH &= (~(0b1111 << ((Pin-8) * 4)));
            GPIOA_CRH |= (Mode << ((Pin-8) * 4));
            Local_Function_Status = E_OK;
        }
        else
        {
            Local_Function_Status = E_NOT_OK;
        }
    break;
    
    case GPIO_PORT_B:
        if (Pin >= 0 && Pin <=7)
        {
            GPIOB_CRL &= (~(0b1111 << (Pin * 4)));
            GPIOB_CRL |= (Mode << (Pin * 4));
            Local_Function_Status = E_OK;
        }
        else if (Pin >= 8 && Pin <= 15)
        {
            GPIOB_CRH &= (~(0b1111 << ((Pin-8) * 4)));
            GPIOB_CRH |= (Mode << ((Pin-8) * 4));
            Local_Function_Status = E_OK;
        }
        else
        {
            Local_Function_Status = E_NOT_OK;
        }
    break;

    case GPIO_PORT_C:
        if (Pin >= 0 && Pin <=7)
        {
            GPIOC_CRL &= (~(0b1111 << (Pin * 4)));
            GPIOC_CRL |= (Mode << (Pin * 4));
            Local_Function_Status = E_OK;
        }
        else if (Pin >= 8 && Pin <= 15)
        {
            GPIOC_CRH &= (~(0b1111 << ((Pin-8) * 4)));
            GPIOC_CRH |= (Mode << ((Pin-8) * 4));
            Local_Function_Status = E_OK;
        }
        else
        {
            Local_Function_Status = E_NOT_OK;
        }
    break;
        
    default:
        Local_Function_Status = E_NOT_OK;
    break;
    }
    return Local_Function_Status;
}

Std_ReturnType Mcal_Gpio_SetPinValue(u8 Port, u8 Pin, u8 Value)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    switch (Port)
    {
    case GPIO_PORT_A:
        switch (Value)
        {
        case GPIO_HIGH:
            SET_BIT(GPIOA_ODR, Pin);
            Local_Function_Status = E_OK;  
        break;
        
        case GPIO_LOW:
            CLR_BIT(GPIOA_ODR, Pin);
            Local_Function_Status = E_OK;  
        break;

        default:
                    Local_Function_Status = E_NOT_OK;
        break;
        }
    break;

    case GPIO_PORT_B:
        switch (Value)
        {
        case GPIO_HIGH:
            SET_BIT(GPIOB_ODR, Pin);
            Local_Function_Status = E_OK;   
        break;
        
        case GPIO_LOW:
            CLR_BIT(GPIOB_ODR, Pin);
            Local_Function_Status = E_OK;   
        break;

        default:
            Local_Function_Status = E_NOT_OK;
        break;
        }
    break;
    case GPIO_PORT_C:
        switch (Value)
        {
        case GPIO_HIGH:
            SET_BIT(GPIOC_ODR, Pin);
            Local_Function_Status = E_OK;
        break;
        
        case GPIO_LOW:
            CLR_BIT(GPIOC_ODR, Pin);
            Local_Function_Status = E_OK;
        break;

        default:
            Local_Function_Status = E_NOT_OK;
        break;
        }
    break;
    
    default:
        Local_Function_Status = E_NOT_OK;
        break;
    }
}

Std_ReturnType Mcal_Gpio_GetPinValue(u8 Port, u8 Pin, u8* ValLoc)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    switch (Port)
    {
    case GPIO_PORT_A:
        *ValLoc = GET_BIT(GPIOA_IDR, Pin);
        Local_Function_Status = E_OK;
    break;

    case GPIO_PORT_B:
        *ValLoc = GET_BIT(GPIOB_IDR, Pin);
        Local_Function_Status = E_OK;
    break;

    case GPIO_PORT_C:
        *ValLoc = GET_BIT(GPIOC_IDR, Pin);
        Local_Function_Status = E_OK;
    break;
    
    default:
        Local_Function_Status = E_NOT_OK;
    break;
    }
}