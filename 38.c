#include<stdio.h>
int maximum(int x,int y);
int maximum(int x,int y)
{
int z;
z=(x>y)?x:y;
return z;
}

int main()
{
int a,b,c,d;
printf("a: ");
scanf("%d",&a);
printf("b: ");
scanf("%d",&b);
printf("c: ");
scanf("%d",&c);
d=maximum(a,b);
printf("%d",maximum(d,c));

return 6;
}
