#include<stdio.h>
main()
{
int basic_salary,hra,pa,gross;
printf("Enter the Basic Salary: ");
scanf("%d",&basic_salary);
if(basic_salary<=10000)
{
hra  = (20 * basic_salary) / 100;
pa   = (80 * basic_salary) / 100;
gross= basic_salary+hra+pa;
 printf("Gross Salary: %d",gross);
}
   else if(basic_salary<=20000)
{
hra = (25 * basic_salary) /100;
pa  = (90 * basic_salary) /100;
gross= basic_salary+hra+pa;
 printf("Gross Salary: %d",gross);
}
 else
{
hra = (30 * basic_salary) / 100;
pa  = (95 * basic_salary) / 100;
 printf("Gross Salary: %d",gross);
}
}
