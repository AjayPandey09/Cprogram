#include <stdio.h>
int main()
{
int i,j,prod;
printf("Enter the input for which table should be generated.\n");
scanf("%d",&j);
printf("the table of %d is as below : \n",j);
for(i=1;i<11;++i)
{
prod=j*i;
printf("%d x %d=%d\n",i,j,prod);

}
//printf("this print is out of for loop.\n");

return 0;
}
