#include<stdio.h>
int main()
{
int values[3][4]={00,00,00,00,11,11,11,11,22,22,22,22};
int r,c;
for(r=0;r<3;++r)
{
for(c=0;c<4;++c)
printf("%d\t",values[r][c]);
}


return 0;
}
