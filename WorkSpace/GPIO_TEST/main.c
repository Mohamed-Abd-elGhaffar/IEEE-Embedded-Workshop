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
	Mcal_Rcc_EnablePeripheral(RCC_APB_2 ,RCC_APB2ENR_IOPBEN);
	Mcal_Gpio_SetPinMode(GPIO_PORT_A, GPIO_PIN7, OUTPUT_PUSH_PULL_LF);
	Mcal_Gpio_SetPinMode(GPIO_PORT_A, GPIO_PIN5, OUTPUT_PUSH_PULL_LF);	
	Mcal_Gpio_SetPinMode(GPIO_PORT_A, GPIO_PIN3, OUTPUT_PUSH_PULL_LF);	
	Mcal_Gpio_SetPinMode(GPIO_PORT_B, GPIO_PIN12, OUTPUT_PUSH_PULL_LF);
	Mcal_Gpio_SetPinMode(GPIO_PORT_B, GPIO_PIN13, OUTPUT_PUSH_PULL_LF);	
	Mcal_Gpio_SetPinMode(GPIO_PORT_B, GPIO_PIN14, OUTPUT_PUSH_PULL_LF);	
	long int i;
	while(1)
	{
	for(i=0; i<80000; i++){}
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN3, GPIO_HIGH);
	Mcal_Gpio_SetPinValue(GPIO_PORT_B, GPIO_PIN12, GPIO_HIGH);
	for(i=0; i<80000; i++);
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN5, GPIO_HIGH);
	Mcal_Gpio_SetPinValue(GPIO_PORT_B, GPIO_PIN13, GPIO_HIGH);
	for(i=0; i<80000; i++);
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN7, GPIO_HIGH);
	Mcal_Gpio_SetPinValue(GPIO_PORT_B, GPIO_PIN14, GPIO_HIGH);
	for(i=0; i<100000; i++);
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN3, GPIO_LOW);
	Mcal_Gpio_SetPinValue(GPIO_PORT_B, GPIO_PIN12, GPIO_LOW);
	for(i=0; i<100000; i++);
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN5, GPIO_LOW);
	Mcal_Gpio_SetPinValue(GPIO_PORT_B, GPIO_PIN13, GPIO_LOW);
	for(i=0; i<100000; i++);
	Mcal_Gpio_SetPinValue(GPIO_PORT_A, GPIO_PIN7, GPIO_LOW);
	Mcal_Gpio_SetPinValue(GPIO_PORT_B, GPIO_PIN14, GPIO_LOW);
	}
}
