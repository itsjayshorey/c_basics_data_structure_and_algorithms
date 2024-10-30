#include<stdio.h>
int fact(int n);
int main()
{
    int fact_num;
    printf("Enter the number whose factorial you want :  ");
    scanf("%d",&fact_num);
    printf("Factorial of %d is %d",fact_num,fact(fact_num));

}
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}