#include<iostream.h>
#include<conio.h>
struct abc
{
int a;
int b;
};
void main()
{
struct abc ob;
clrscr();
ob.a=10;
ob.b=20;
cout<<"a="<<ob.a<<endl;
cout<<"b="<<ob.b<<endl;
getch();
}