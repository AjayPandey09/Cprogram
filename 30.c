#include<stdio.h>
int main()
{
int i,n;
long int prod;
prod=1;

printf("enter the number .\n");
scanf("%d",&n);
for(i=2;i<=n;++i)
prod =prod*i;

printf("%ld\n",prod);
return 8;
}
