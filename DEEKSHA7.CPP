#include<iostream.h>
#include<conio.h>
class space
{
int x,y,z;
public:
void getdata(int a,int b,int c);
void display(void);
void operator-();
};
void space::getdata(int a,int b,int c)
{
x=a;y=b;z=c;
}
void space::display(void)
{
cout<<x<<" ";
cout<<y<<" ";
cout<<z<<"\n";
}
void space::operator-()
{
x=-x;y=-y;z=-z;
}
void main()
{
clrscr();
space s;
s.getdata(10,-20,30);
cout<<"s:";
s.display();
getch();
}