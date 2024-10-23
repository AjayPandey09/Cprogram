#include<stdio.h>
void modify(int a)
{
a=a*2;
printf("a=%d, from function before modified.",a);
}


int main()
{
int a=2;
printf ("a=%d, from main before calling the function .\n",a);
modify(a);
printf("a=%d, from main after calling the function.\n ",a);
return 0;
}
