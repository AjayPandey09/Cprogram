#include <stdio.h>
int main ()
{
int num,rem;
printf("Enter your number to be reversed?\n");
scanf("%d",&num);
printf("the reversed number is: \n");
while(num!=0)
{
rem=num%10;
printf("%d",rem);
num=num/10;
}
putchar('\n');

return 0;
}
