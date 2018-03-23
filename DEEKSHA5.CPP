#include<iostream.h>
#include<conio.h>
class data
{
public:int a;
void print()
{
cout<<"a:"<<a;
}
};
int main()
{
data d,*dp;
dp=&d;
int data::*ptr=&data::a;
d.*ptr=10;
d.print();
dp->*ptr=20;
dp->print();
return 0;
}