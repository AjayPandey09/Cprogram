#include<stdio.h>
int main()
{
char ch;
ch=getchar();
if((ch>='a'&& ch<='z')||(ch>'A'&& ch<'Z'))
printf("Its a character.\n");
else if (ch>='0'&& ch<='9')
printf("It's a numeral.\n");
else
printf("Its a special character.\n");
return 0;
}
