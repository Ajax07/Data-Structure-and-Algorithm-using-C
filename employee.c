#include <stdio.h>

struct employee
{
    char name[20];
    int empid;
    int salary;
};

void main()
{
    struct employee emp;

    printf("\n enter the details:");
    gets(emp.name);
    scanf("%d",&emp.empid);
    scanf("%d",&emp.salary);

    printf("\n Entered Details are:");
    printf("\n Name %s", emp.name);
    printf("\n Id %d", emp.empid);
    printf("\n Salary %d", emp.salary);
}
