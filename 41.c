#include<stdio.h>
int main()
{
int a[10];
int i;
//taking values into array
for(i=0;i<5;++i)
scanf("%d",&a[i]);
//printing values
for (i=0;i<5;++i)
printf("a[%d]=%d\n",i,a[i]);
//calculating the min value
int minvalue;
minvalue=a[0];
for(i=1;i<5;++i)
if(a[i]<minvalue)
 minvalue=a[i];

printf("the minimum value is %d\n.",minvalue);
return 0;
}

