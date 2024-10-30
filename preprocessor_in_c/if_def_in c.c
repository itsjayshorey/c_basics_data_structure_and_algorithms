#include<stdio.h>
#define HELLO 100;
void main()
{
    #ifdef HELLO
    printf("HELLO is defined\n");
    #else printf("HELLO is not defined");
    #endif
    return 0;
}