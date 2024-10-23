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
int x,y,z;
printf("x: ");
scanf("%d",&x);
printf("y: ");
scanf("%d",&y);
z=maximum(x,y);
printf("%d",z);

return 6;
}
