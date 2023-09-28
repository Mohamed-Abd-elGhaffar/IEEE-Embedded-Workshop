/**< lib >**/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/**< MCAL >**/
#include "RCC_interface.h"
#include "SCB_interface.h"
#include "NVIC_interface.h"

/**< app >**/

int main(void)
{
	Mcal_Rcc_InitSySClock();
		
	NVIC_EnableIRQ(6);
		
 	NVIC_SetPriority(6, 0, 2);	
	
	NVIC_SetPendingIRQ(6);
	while(1);
}
