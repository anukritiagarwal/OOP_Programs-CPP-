#include<iostream.h>
#include<conio.h>
class M
{
public:
void display(void)
{
cout<<"M"<<endl;
}
};
class N
{
public:
void display(void)
{
cout<<"N"<<endl;
}
};
class P:public M,public N
{
public:
void display(void)
{
M::display();
}
};
int main()
{
clrscr();
P p;
p.display();
getch();
return 0;
}