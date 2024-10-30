#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d is of type %d", n, iseven(n));
    return 0;
}
int iseven(num)
{
    return (num%2==0) ? 1:0;
}