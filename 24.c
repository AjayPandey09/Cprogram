#include<stdio.h>
int main()
{
long int fib[50];
int i;
fib[0]=0;
fib[1]=1;
for(i=2;i<50;++i)
{
fib[i]=fib[i-1]+fib[i-2];
printf("%ld\n",fib[i]);

}




return 0;
}

