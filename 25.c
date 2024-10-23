#include<stdio.h>
int main()
{
int n;
printf("enter the number for which you want TRN.\n");
scanf("%d",&n);
int i,TN;
TN=0;

for(i=1;i<=2;++i)
TN=TN+i;

printf("%d\n",TN);


return 0;
}
