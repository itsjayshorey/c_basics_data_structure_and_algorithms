#include<stdio.h>
struct student {
    char name[20];
    int age;
    int r_no;
};
int main()
{
    int max =10;
    int i;
    struct student s[max];
    for(i=0; i<max; i++)
    {
        printf("Enter name of the student : ");
        scanf("%s",s[i].name);
        printf("Enter age of student : ");
        scanf("%d",&s[i].age);
        printf("Enter Roll Number of the student : ");
        scanf("%d",&s[i].r_no);
    }

    for(i=0;i<max;i++)
    {
        printf("Name : %s | Age : %d | Roll number : %d \n",s[i].name,s[i].age,s[i].r_no);
    }
    return 0;
}