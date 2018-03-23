#include<iostream.h>
#include<conio.h>
class base
{
public:
void show()
{
cout<<"base class\t";
}
};
class derived:public base
{
public:
void show()
{
cout<<"derived class";
}
};
int main()
{
clrscr();
base b;
derived d;
b.show();
d.show();
getch();
return 0;
}