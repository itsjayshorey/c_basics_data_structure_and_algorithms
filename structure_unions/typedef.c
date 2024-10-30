//type def is a keyword to assign alternative names to existing types. It is user defined data types when names of data types get slightly complicated.
//type def can be used to give an alias name to pointers also.
#include<stdio.h>
#include<string.h>
typedef struct employee
{
    char name[50];
    int salary;
}emp;
void main()
{
    emp el;
    printf("\nEnter Employee record\n");
    printf("\nEmployee name \t");
    scanf("%s",el.name);
    printf("\nEnter Employee Salary\t");
    scanf("%d",&el.salary);
    //printf("%d",&el.salary);
    //printf("%d",&el.name);
    printf("\nstudent name is %s",el.name);
    printf("\n salary is %d",el.salary);
}