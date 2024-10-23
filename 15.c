#include <stdio.h>
int main ()
{
int num,rem;
printf("Enter your number to be tested.\n");
scanf("%d",&num);
rem=num%2;
if(rem==0)

printf("the mumber is even.\n");

if(rem==1)
printf("the number is odd.\n");
return 0;
}
