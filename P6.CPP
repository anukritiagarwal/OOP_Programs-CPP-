#include<stdio.h>
#include<conio.h>
void main()
{
int tc,a;
clrscr();
printf("enter the total cost\n");
scanf("%d",&tc);
if(tc<=2000)
{
a=tc-(5/100*tc);
printf("total amount is%f",a);
}
else if (2001<=tc<=5000)
{
a=tc-(10/100*tc);
printf("total amount is%f",a);
}
else
{
a=tc-(15/100*tc);
printf("total amount is%f",a);
}
getch();
}


