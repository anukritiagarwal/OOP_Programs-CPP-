#include<stdio.h>
#include<conio.h>
struct details
{
char name[30];
int age;
int employeeid;
};
int main()
{
struct details d;
clrscr();
printf("enter name\n");
gets(d.name);
printf("enter age\n");
scanf("%d",&d.age);
printf("enter the id\n");
scanf("%d",&d.employeeid);
printf("name of employee:%s \n",d.name);
printf("age of the employee:%d \n",d.age);
printf("employee id is:%d \n",d.employeeid);
getch();
return 0;
}