/*
1.c union is also like structure, i.e. collection of different data types which are grouped together. Each element in a union is called member.
2. Union allocates one common storage space for all its members.
3.We can access only one member of union at a time because, Union allocates one common storage space for all its members
4.Many union variables can be created in a program and memory will be created in a program and memory will be allocated for each union variable seperately
*/
#include<stdio.h>
#include<string.h>
union student
{
    char name[20];
    char subject[20];
    float percentage;
};
int main()
{
    union student record1;
    union student record2;
    strcpy(record1.name," Abc");
    strcpy(record1.subject,"Science");
    record1.percentage = 86.50;
    printf("Union record1 values example\n");
    printf("Name : %s \n", record1.name);
    printf("Subject : %s \n",record1.subject);
    printf("Name :%s \n",record2.name);
    strcpy(record2.subject,"Physics");
    printf("Subject : %s \n ",record2.subject);
    record2.percentage = 99.50;
    printf("Percentage: %f \n",record2.percentage);
    return 0;
}