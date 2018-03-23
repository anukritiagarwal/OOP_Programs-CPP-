#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct abc
{
char name[15];
int marks;
}ob;
void main()
{
clrscr();
cout<<"enter name"<<endl;
gets(ob.name);
cout<<"enter marks"<<endl;
cin>>ob.marks;
cout<<"values inputted"<<endl;
cout<<"name:"<<ob.name<<"\t marks"<<ob.marks<<endl;
getch();
}