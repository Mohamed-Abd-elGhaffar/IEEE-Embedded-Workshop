#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[4] = "A14";
    // char* num = str+1;
    printf("%c\n%d",*str,atoi(str+1));
}