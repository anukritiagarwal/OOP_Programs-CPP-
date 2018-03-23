#include<iostream.h>
#include<conio.h>
void main()
{
int x,y;
double power(int,int);
clrscr();
cout<<"enter x,y:"<<endl;
cin>>x>>y;
cout<<x<<" to the power "<<y<<" is "<<power(x,y);
getch();
}
double power(int x,int y)
{
double p;
p=1.0;
if(y>=0)
while(y--)
p*=x;
else
while(y++)
p/=x;
return(p);
}