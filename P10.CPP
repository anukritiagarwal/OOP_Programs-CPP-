 #include<iostream.h>
 #include<conio.h>
 int abc(int a);
 void main()
 {
 int a=5;
 clrscr();
 int f=abc(a);
 cout<<"f="<<f<<endl;
 getch();
 }
 int abc(int a)
 {
 int fact=1;
 for(int i=1;i<=a;i++)
 {
 fact=fact*i;
 }
 return fact;
 }