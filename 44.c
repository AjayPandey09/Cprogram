#include<stdio.h>
void display(int u[],int n);
void getarray(void);
void display(int u[], int n)
{
int i;
for(i=0;i<n;++i)
printf("%d\n",u[i]);

}
int main()
{
getarray();
//display(a,4);
return 9;
}

void getarray();

void getarray(void)
{
int a[4];
for(int i=0;i<4;++i)
scanf("%d",&a[i]);
}
