#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=5;i>=1;i--)
{
for(k=4;k>=i;k--)
{
cout<<" ";
}
for(j=5;j>=i;j--)
{
cout<<j;
}
cout<<endl;
}
getch();
}