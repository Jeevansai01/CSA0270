#include <stdio.h>
struct employee
{
    int idno,age;
    float salary;
    char name [10],design[20];
 }emp;
 main()
{
printf("enter the details of employee/n");
printf("enter the name:");
scanf("%s",&emp.name);
printf("enter the designation:");
scanf("%s",&emp.design);
printf("enter the salary:");
scanf("%s",&emp.salary);
printf("enter the age:");
scanf("%s",&emp.age);
printf("enter the idno:");
scanf("%s",&emp.idno );
printf("enter the employee details");
printf("\t%s\t%s\t%d\t%d\t%0.2f",emp.name,emp.salary,emp.age,emp.idno,emp.design);
}