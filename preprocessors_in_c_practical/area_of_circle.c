#include<stdio.h>
#define PI 3.14
#define ar_cir(r) (r*r*3.14) 
int main()
{
    int radius;
    float area;
    printf("Enter radius of circle :");
    scanf("%d",&radius);
    area=PI * radius*radius;
    printf("\n Area of circle %d is %f   ",radius,ar_cir(radius));
}