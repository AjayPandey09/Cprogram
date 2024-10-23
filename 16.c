#include<stdio.h>
int main()
{
int year,rem_4,rem_100,rem_400;
printf("enter the year to be tested.\n");
scanf("%d",&year);
rem_4=year%4;
rem_100=year%100;
rem_400=year%400;
if((rem_4==0&&rem_100!=0)||(rem_400==0))
printf("the year %d is a leap year.\n",year);
else
printf("the year %d is not a leap year\n",year);
return 0;
}
