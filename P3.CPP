#include<iostream.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,limit,i;
clrscr();
cout<<"enter the last limit"<<endl;
cin>>limit;
for(i=1;i<=limit;i++)
{
c=a+b;
cout<<c<<"\t";
a=b;
b=c;
}
getch();
}