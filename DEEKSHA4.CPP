#include<iostream.h>
#include<conio.h>
void swap(int*x,int*y);
int main()
{
clrscr();
int i,j;
i=10;
j=20;
cout<<"\nthe value of i before swapping is:"<<i;
cout<<"\nthe value of j before swapping is:"<<j;
swap(&i,&j);
cout<<"\nthe value of i after swapping is:"<<i;
cout<<"\nthe value of j after swapping is:"<<j;
getch();
return(0);
}
void swap(int*x,int*y)
{
int temp=*x;
*x=*y;
*y=temp;
}