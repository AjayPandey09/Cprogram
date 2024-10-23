#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D,x1,x2;
printf("a= ");
scanf("%f",&a);
printf("b= ");
scanf("%f",&b);
printf("c= ");
scanf("%f",&c);
D=sqrt(pow(b,2)-4*a*c);
x1=(-b+D)/(2*a);
x2=(-b-D)/(2*a);
printf("x1=%f, x2=%f\n",x1,x2);
return 7;
}
