#include<stdio.h>
int main()
{
char ch;
printf("enter the character to  be converted.\n");
scanf("%c",&ch);
if(ch>='a'&& ch<='z')
ch='A'+ch-'a';
putchar(ch);
putchar('\n');
return 6;
}
