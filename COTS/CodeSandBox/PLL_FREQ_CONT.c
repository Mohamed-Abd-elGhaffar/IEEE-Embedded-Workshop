
#include<stdio.h>

char PLL_MUL (unsigned int PLL_MUL_FAC)
{   
    unsigned int RCC_CFGR = 0xFFFFFFFF;
    printf("\nhex = %x",RCC_CFGR);
    RCC_CFGR &= ~(0b1111 << 18);
    printf("\nhex = %x",RCC_CFGR);
    RCC_CFGR |= ((PLL_MUL_FAC - 2) << 18 );
    printf("\nhex = %x",RCC_CFGR);
    
}
int main()
{
    unsigned int a; 
    scanf("%d",&a);
    PLL_MUL(a);
}