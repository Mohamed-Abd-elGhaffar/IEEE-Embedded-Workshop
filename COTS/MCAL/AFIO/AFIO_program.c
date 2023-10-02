// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 28/9/2023
// *                      Version     : 0.1
// *                      Module      : MCAL_AFIO_program.c
// * ===========================================================================

/************************************< LIB >**********************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/************************************< MCAL >*********************************/
#include "AFIO_config.h"
#include "AFIO_interface.h"
#include "AFIO_private.h"

#include "GPIO_interface.h"

/**********************************< Functions >*******************************/
Std_ReturnType Mcal_Exti_ConfigPin(u8 copy_Port,u8 copy_PinNum)
{
    Std_ReturnType Local_Function_Status = E_NOT_OK;

    switch (copy_Port)
    {
    case GPIO_PORT_A:
        switch (copy_PinNum)
        {
        case 0 ... 3:
            AFIO_EXTICR1 &= (~(0b1111 << copy_PinNum));            
            AFIO_EXTICR1 |= (copy_Port << copy_PinNum);
            Local_Function_Status = E_OK;            
        break;
        
        case 4 ... 7:
            AFIO_EXTICR2 &= (~(0b1111 << (copy_PinNum-4)));            
            AFIO_EXTICR2 |= (copy_Port << (copy_PinNum-4));
            Local_Function_Status = E_OK;            
        break;
        
        case 8 ... 11:
            AFIO_EXTICR3 &= (~(0b1111 << (copy_PinNum-8)));            
            AFIO_EXTICR3 |= (copy_Port << (copy_PinNum-8));
            Local_Function_Status = E_OK;            
        break;
        
        case 12 ... 15:
            AFIO_EXTICR4 &= (~(0b1111 << (copy_PinNum-12)));            
            AFIO_EXTICR4 |= (copy_Port << (copy_PinNum-12));
            Local_Function_Status = E_OK;            
        break;
        
        default:
            Local_Function_Status = E_NOT_OK;
            return Local_Function_Status;
        break;
        }
    break;
    
    case GPIO_PORT_B:
        switch (copy_PinNum)
        {
        case 0 ... 3:
            AFIO_EXTICR1 &= (~(0b1111 << copy_PinNum));            
            AFIO_EXTICR1 |= (copy_Port << copy_PinNum);
            Local_Function_Status = E_OK;            
        break;
        
        case 4 ... 7:
            AFIO_EXTICR2 &= (~(0b1111 << (copy_PinNum-4)));            
            AFIO_EXTICR2 |= (copy_Port << (copy_PinNum-4));
            Local_Function_Status = E_OK;            
        break;
        
        case 8 ... 11:
            AFIO_EXTICR3 &= (~(0b1111 << (copy_PinNum-8)));            
            AFIO_EXTICR3 |= (copy_Port << (copy_PinNum-8));
            Local_Function_Status = E_OK;            
        break;
        
        case 12 ... 15:
            AFIO_EXTICR4 &= (~(0b1111 << (copy_PinNum-12)));            
            AFIO_EXTICR4 |= (copy_Port << (copy_PinNum-12));
            Local_Function_Status = E_OK;            
        break;
        
        default:
            Local_Function_Status = E_NOT_OK;
            return Local_Function_Status;
        break;
        }
    break;
    
    case GPIO_PORT_C:
        switch (copy_PinNum)
        {
        case 0 ... 3:
            AFIO_EXTICR1 &= (~(0b1111 << copy_PinNum));            
            AFIO_EXTICR1 |= (copy_Port << copy_PinNum);
            Local_Function_Status = E_OK;            
        break;
        
        case 4 ... 7:
            AFIO_EXTICR2 &= (~(0b1111 << (copy_PinNum-4)));            
            AFIO_EXTICR2 |= (copy_Port << (copy_PinNum-4));
            Local_Function_Status = E_OK;            
        break;
        
        case 8 ... 11:
            AFIO_EXTICR3 &= (~(0b1111 << (copy_PinNum-8)));            
            AFIO_EXTICR3 |= (copy_Port << (copy_PinNum-8));
            Local_Function_Status = E_OK;            
        break;
        
        case 12 ... 15:
            AFIO_EXTICR4 &= (~(0b1111 << (copy_PinNum-12)));            
            AFIO_EXTICR4 |= (copy_Port << (copy_PinNum-12));
            Local_Function_Status = E_OK;            
        break;
        
        default:
            Local_Function_Status = E_NOT_OK;
            return Local_Function_Status;
        break;
        }
    break;
    
    case GPIO_PORT_D:
        switch (copy_PinNum)
        {
        case 0 ... 3:
            AFIO_EXTICR1 &= (~(0b1111 << copy_PinNum));            
            AFIO_EXTICR1 |= (copy_Port << copy_PinNum);
            Local_Function_Status = E_OK;            
        break;
        
        case 4 ... 7:
            AFIO_EXTICR2 &= (~(0b1111 << (copy_PinNum-4)));            
            AFIO_EXTICR2 |= (copy_Port << (copy_PinNum-4));
            Local_Function_Status = E_OK;            
        break;
        
        case 8 ... 11:
            AFIO_EXTICR3 &= (~(0b1111 << (copy_PinNum-8)));            
            AFIO_EXTICR3 |= (copy_Port << (copy_PinNum-8));
            Local_Function_Status = E_OK;            
        break;
        
        case 12 ... 15:
            AFIO_EXTICR4 &= (~(0b1111 << (copy_PinNum-12)));            
            AFIO_EXTICR4 |= (copy_Port << (copy_PinNum-12));
            Local_Function_Status = E_OK;            
        break;
        
        default:
            Local_Function_Status = E_NOT_OK;
            return Local_Function_Status;
        break;
        }
    break;
    
    case GPIO_PORT_E:
        switch (copy_PinNum)
        {
        case 0 ... 3:
            AFIO_EXTICR1 &= (~(0b1111 << copy_PinNum));            
            AFIO_EXTICR1 |= (copy_Port << copy_PinNum);
            Local_Function_Status = E_OK;            
        break;
        
        case 4 ... 7:
            AFIO_EXTICR2 &= (~(0b1111 << (copy_PinNum-4)));            
            AFIO_EXTICR2 |= (copy_Port << (copy_PinNum-4));
            Local_Function_Status = E_OK;            
        break;
        
        case 8 ... 11:
            AFIO_EXTICR3 &= (~(0b1111 << (copy_PinNum-8)));            
            AFIO_EXTICR3 |= (copy_Port << (copy_PinNum-8));
            Local_Function_Status = E_OK;            
        break;
        
        case 12 ... 15:
            AFIO_EXTICR4 &= (~(0b1111 << (copy_PinNum-12)));            
            AFIO_EXTICR4 |= (copy_Port << (copy_PinNum-12));
            Local_Function_Status = E_OK;            
        break;
        
        default:
            Local_Function_Status = E_NOT_OK;
            return Local_Function_Status;
        break;
        }
    break;
    
    case GPIO_PORT_F:
        switch (copy_PinNum)
        {
        case 0 ... 3:
            AFIO_EXTICR1 &= (~(0b1111 << copy_PinNum));            
            AFIO_EXTICR1 |= (copy_Port << copy_PinNum);
            Local_Function_Status = E_OK;            
        break;
        
        case 4 ... 7:
            AFIO_EXTICR2 &= (~(0b1111 << (copy_PinNum-4)));            
            AFIO_EXTICR2 |= (copy_Port << (copy_PinNum-4));
            Local_Function_Status = E_OK;            
        break;
        
        case 8 ... 11:
            AFIO_EXTICR3 &= (~(0b1111 << (copy_PinNum-8)));            
            AFIO_EXTICR3 |= (copy_Port << (copy_PinNum-8));
            Local_Function_Status = E_OK;            
        break;
        
        case 12 ... 15:
            AFIO_EXTICR4 &= (~(0b1111 << (copy_PinNum-12)));            
            AFIO_EXTICR4 |= (copy_Port << (copy_PinNum-12));
            Local_Function_Status = E_OK;            
        break;
        
        default:
            Local_Function_Status = E_NOT_OK;
            return Local_Function_Status;
        break;
        }
    break;
    
    case GPIO_PORT_G:
        switch (copy_PinNum)
        {
        case 0 ... 3:
            AFIO_EXTICR1 &= (~(0b1111 << copy_PinNum));            
            AFIO_EXTICR1 |= (copy_Port << copy_PinNum);
            Local_Function_Status = E_OK;            
        break;
        
        case 4 ... 7:
            AFIO_EXTICR2 &= (~(0b1111 << (copy_PinNum-4)));            
            AFIO_EXTICR2 |= (copy_Port << (copy_PinNum-4));
            Local_Function_Status = E_OK;            
        break;
        
        case 8 ... 11:
            AFIO_EXTICR3 &= (~(0b1111 << (copy_PinNum-8)));            
            AFIO_EXTICR3 |= (copy_Port << (copy_PinNum-8));
            Local_Function_Status = E_OK;            
        break;
        
        case 12 ... 15:
            AFIO_EXTICR4 &= (~(0b1111 << (copy_PinNum-12)));            
            AFIO_EXTICR4 |= (copy_Port << (copy_PinNum-12));
            Local_Function_Status = E_OK;            
        break;
        
        default:
            Local_Function_Status = E_NOT_OK;
            return Local_Function_Status;
        break;
        }
    break;
    
    default:
    Local_Function_Status = E_NOT_OK;
    break;
    }

    return Local_Function_Status;
}