#include<stdio.h>
long int func(int a);
long int func(int a)
{
int i;
long int prod;
prod=1;

for(i=2;i<=a;++i)
prod =prod*i;


return prod;
}

int main()
{
int x;
printf("enter the factorial calculation.\n");
scanf("%d",&x);

printf("%d!=%ld\n",x,func(x));
return 7;
}
