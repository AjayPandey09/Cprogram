#include<stdio.h>

int main()
{
int x,y,z;
printf("x: ");
scanf("%d",&x);
printf("y: ");
scanf("%d",&y);
if(x==y)
printf("they are equal.");
else
{
z=(x>y)?x:y;
printf("%d",z);
}
return 6;
}
