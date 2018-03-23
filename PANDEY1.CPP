#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int x,a,b;
cout<<"enter the values of a and b\n";
cin>>a;
cin>>b;
 x=(a-b);
  try
 {
if(x!=0)
{
cout<<"result(a/x)="<<a/x<<"\n";
}
else
{
throw(x);
}
}
catch(int i)
{
cout<<"exception caught:x="<<x<<"\n";
}
cout<<"end";
return 0;
}

