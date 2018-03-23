#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct abc
{
char name[15];
int marks;
}ob={"abc",100};
void main()
{
clrscr();
cout<<"name="<<ob.name<<endl;
cout<<"marks="<<ob.marks<<endl;
getch();
}