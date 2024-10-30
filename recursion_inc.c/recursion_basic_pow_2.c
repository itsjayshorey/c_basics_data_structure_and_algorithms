#include<stdio.h>
int f(int n);
int main()
{
    int power;
    printf("Enter the power of 2 you eant to see : ");
    scanf("%d",&power);
    printf("2 raise to power %d is %d" ,power,f(power));
}
int f(int n)
{
    int y;
    if(n==0)
    {
        return 1;
    }
    else
    {
        y=2*f(n-1);
    }
}