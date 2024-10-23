#include<stdio.h>
char lctu(char);//function declaration
char lctu(char c)
{
char ch;
ch=c;
if(ch>='a'&& ch<='z')
return('A'+ch-'a');
else

return ch;
}
int main()
{
putchar(lctu(getchar()));
return 6;
}
