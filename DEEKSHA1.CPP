#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int a[10][10],b[10][10],c[10][10];
int x,y,i,j,m,n;
cout<<"\nenter the number of rows and columns for matrix a:::\n\n";
cin>>x>>y;
cout<<"\n\nenter elements for matrix for matrix a:::\n\n";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cin>>a[i][j];
}
cout<<"\n";
}
cout<<"\n\nmatrix a:\n\n";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cout<<"\t"<<a[i][j];
}
cout<<"\n\n";
}
cout<<"\n-----------\n";
cout<<"\nenter the number of rows and columns for matrix b:::\n\n";
cin>>m>>n;
cout<<"\n\nenter elements for matrix b:::\n\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>b[i][j];
}
cout<<"\n";
}
cout<<"\n\nmatrix b:\n\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"\t"<<b[i][j];
}
cout<<"\n\n";
}
if(y==m)
{
for(i=0;i<x;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0;
for(int k=0;k<m;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
cout<<"\n------------\n";
cout<<"\n\nmultiplication of matrix a and matrix b:\n\n";
for(i=0;i<x;i++)
{
for(j=0;j<n;j++)
{
cout<<"\t"<<c[i][j];
}
cout<<"\n\n";
}
}
else
{
cout<<"\n\nmultiplication is not possible";
}
getch();
return 0;
}
