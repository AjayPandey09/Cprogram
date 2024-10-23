#include<stdio.h>
void prn(void)
{
printf("we are batch 1. reporting from function.\n);
}
void prn19(void)//function defined
{
printf("we are in prn19 now\n.");
}
int main()
{
prn();// it is calling the function in main
printf("the control is in main .\n");
prn19();//it is calling the function in main
return 8;
}
