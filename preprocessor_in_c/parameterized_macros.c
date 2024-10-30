#include<stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
#define square(x)((x)*(x))
int main(void)
{
    printf("Max between 20 and 10 is %d\n",MAX(10,20));
    printf("Square of 2 is : %d\n",square(2));
    return 0;
}