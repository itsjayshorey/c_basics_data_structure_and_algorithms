#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[10];
    float percentage;
};
void func(struct student record);
int main()
{
    int i;
    struct student record[2];
    record[0].id=1;
    strcpy(record[0].name,"Abc");
    record[0].percentage = 86.5;
    record[1].id=2;
    strcpy(record[1].name,"xyz");
    record[1].percentage = 90.5;
    func(record[0]);
    return 0;
}
void func(struct student record)
{
    printf("ID is %d \n",record.id);
    printf("Name is %s \n",record.name);
    printf("Percentage is %f \n",record.percentage);
}
//Structure variable for student is 
//struct student report