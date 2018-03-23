#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int c,f,l,m,n,s,arr[10];
printf("enter no. of elements\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(c=0;c<n;c++)
{
scanf("%d",&arr[c]);
}
printf("enter value to find\n");
scanf("%d",&s);
f=0;
l=n-1;
m=(f+l)/2;
while(f<=l)
{
if(arr[m]<s)
{
f=m+1;
}
else if(arr[m]==s)
{
printf("%d found at location %d.\n",s,m+1);
break;
}
else
{
l=m-1;
}
m=(f+l)/2;
}
if(f>l)
{
printf("not found, %d is not present.\n",s);
}
getch();
return 0;
}