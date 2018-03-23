#include<iostream.h>
#include<conio.h>
void findmax(int a[]);
int i;
void main()
{
int a[5];

cout<<"enter values in the array"<<endl;
for(i=0;i<=4;i++)
{
cin>>a[i];
}
findmax(a);
getch();
}
void findmax(int a[5])
{
int max=a[0];
for(i=0;i<=4;i++)
{
if (a[i]>max)
{
max=a[i];
}
}
cout<<"maximum value="<<max<<endl;

}

