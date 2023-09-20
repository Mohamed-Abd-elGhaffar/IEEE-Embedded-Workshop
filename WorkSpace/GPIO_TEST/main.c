/**< lib >**/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/**< MCAL >**/
#include "RCC_interface.h"
#include "GPIO_interface.h"

/**< app >**/

int main(void)
{
	Mcal_Rcc_InitSySClock();
	Mcal_Rcc_EnablePeripheral(RCC_APB_2 ,RCC_APB2ENR_IOPAEN);
	
	Mcal_Gpio_SetPinMode(GPIO_PORT_A, GPIO_PIN3, OUTPUT_PUSH_PULL);
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN3, GPIO_HIGH);
	
	Mcal_Gpio_SetPinMode(GPIO_PORT_A, GPIO_PIN0, INPUT_PULL_UP);
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN0, GPIO_HIGH);
	
	Mcal_Gpio_SetPinMode(GPIO_PORT_A, GPIO_PIN1, INPUT_PULL_UP);
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN1, GPIO_LOW);
	
	//SET_BIT(0x4001080C, 3);
	while(1);
}
