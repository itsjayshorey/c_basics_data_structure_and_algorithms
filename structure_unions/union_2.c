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

    // Assigning values to record1
    strcpy(record1.name, "Abc");
    printf("Union record1 values example\n");
    printf("Name: %s \n", record1.name);

    // At this point, 'record1.subject' will overwrite 'record1.name'
    strcpy(record1.subject, "Science");
    printf("Subject: %s \n", record1.subject);

    // Now, 'record1.percentage' will overwrite both 'record1.name' and 'record1.subject'
    record1.percentage = 86.50;
    printf("Percentage: %f \n", record1.percentage);

    // Assigning values to record2
    strcpy(record2.name, "XYZ");
    printf("\nUnion record2 values example\n");
    printf("Name: %s \n", record2.name);

    strcpy(record2.subject, "Physics");
    printf("Subject: %s \n", record2.subject);

    record2.percentage = 99.50;
    printf("Percentage: %f \n", record2.percentage);

    return 0;
}
