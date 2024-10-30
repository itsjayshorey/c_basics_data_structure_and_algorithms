#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int age;
    struct address
    {
        char locality[50];
        char city[50];
        int pincode;
    };
    
};
int main()
{
    return 0;
}