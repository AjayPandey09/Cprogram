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
char c,d;
c=getchar();
d=lctu(c);
putchar(d);
return 6;
}
