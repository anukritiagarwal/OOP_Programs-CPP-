#include<iostream.h>
#include<conio.h>
void main()
{
int a[5];
int i,max,min;
clrscr();
cout<<" enter values in the array"<<endl;
for(i=0;i<=4;i++)
{
cin>>a[i];
}
max=a[0];
min=a[0];
for(i=0;i<=4;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min);
{
min=a[i];
}
}
cout<<"maximum value is"<<max<<endl;
cout<<"minimum vale is"<< min<<endl;
getch();
}