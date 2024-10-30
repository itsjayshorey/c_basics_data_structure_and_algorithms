#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[10];
    float percentage;
};
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
    return 0;
}
//Structure variable for student is 
//struct student report