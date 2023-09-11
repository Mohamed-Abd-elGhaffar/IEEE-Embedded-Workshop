/**< lib >**/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/**< MCAL >**/
#include "RCC_interface.h"

int main()
{
  Mcal_Rcc_InitSySClock();
	Mcal_Rcc_EnablePeripheral(RCC_APB_2 ,RCC_APB2ENR_IOPAEN);
	while(1);	
}
