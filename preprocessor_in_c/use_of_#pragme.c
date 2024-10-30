#include<stdio.h>
 void function1();
void function2();
#pragma startup function1
 #pragma exit function2
void function1()
{
    printf("\n Now we are in function1");
}
int main()
{
    printf("\n Now we are in main function");
    return 0;
}
void function2()
{
    printf("\n Function2 is called just before end of main function");
}