#include<iostream.h>
#include<conio.h>
class test
{
int code;
static int count;
public:
void setcount()
{

}
void showcode()
{

}
void setcode()
{
cout<<"object number:"<<code<<endl;
}
};
int test::count;
int main()
{
test t1,t2;
t1.setcount();
t2.setcount();
test t3;
t1.showcode();
t2.showcode();
t3.showcode();
return(0);
}
