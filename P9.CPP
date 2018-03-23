 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int i,j,k;
 for(i=1;i<=5;i++)
 {
 for(j=5;j>=i;j--)
 {
 if(i<=3)
 {
 printf("%d",i);
 }
 else
 {
 k=6-i;
 printf("%d",k);
 }
 }
 printf("\n");
 }
 getch();
 }


