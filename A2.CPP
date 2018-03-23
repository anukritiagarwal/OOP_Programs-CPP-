#include<stdio.h>
#include<conio.h>
struct employee
{
int id;
char name[25];
int age;
};
int main()
{
clrscr();
int i;
struct employee e[2];
for(i=0;i<2;i++)
{
printf("enter details of %d employee \n",i+1);
printf("enter employee id:\n");
scanf("%d",&e[i].id);
printf("enter employee name:\n");
scanf("%s",&e[i].name);
printf("enter age of the employee:\n");
scanf("%d",&e[i].age);
}
printf("\ndetails of employees");
for(i=0;i<2;i++)
{
printf("\n %d \t %s \t %d ",e[i].id,e[i].name,e[i].age);
}
getch();
return 0;
}