#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("enter any character\n");
scanf("%c",&ch);
if(isalpha(ch))
{
printf("alphabet entered");
}
else if(isdigit(ch))
{
printf("digit entered");
}
else
{
printf("special character entered");
}
getch();
}