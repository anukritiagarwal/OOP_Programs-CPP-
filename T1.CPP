#include<iostream.h>
#include<conio.h>
void square(int&&,int&&);
void main()
{
int x=2;
int y=3;
void(*pFunc)(int&&,int&&);
square=pFunc;
pFunc(x,y);
cout<<"x*x="<<x<<endl;
cout<<"y*y="<<y<<endl<<endl;
}
void square(int&&rX,int&&rY)
{
rX=*rX;
rY=*rY;
}

