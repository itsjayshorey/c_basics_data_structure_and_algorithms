#include<stdio.h>
int sum(int n);
int main()
{
    int number = 345;
    printf("Enter the number whose sum of digits you want :  ");
    scanf("%d",&number);
    int sumofdigits = sum(number);
    printf("Sum fo digits of %d is %d",number,sumofdigits);
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n%10 + sum(n/10);
    }
}