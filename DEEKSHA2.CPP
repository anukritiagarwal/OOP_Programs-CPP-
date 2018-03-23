#include<conio.h>
#include<iostream.h>
//using namespace std;
class sum
{
int a,b,t;
public:
void getdata();
void putdata();
};
void sum::getdata()
{
cout<<"enter the value of a and b";
cin>>a>>b;
}
void sum::putdata()
{
t=a+b;
cout<<"addition of"<< a <<" and "<< b <<"="<<t;
}
int main()
{
sum obj;
clrscr();
obj.getdata();
obj.putdata();
getch();
return 0;
}