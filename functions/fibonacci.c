#include<stdio.h>
void fibonacci(int n);
int main()
{
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;

}
void fibonacci(int n)
{
    int first =0;
    int second =1;
    if(n>=1)
    {
        printf("\n%d",first);
    }
    if(n>=2)
    {
        printf("\n%d",second);
    }
    for(int i=3; i<=n;i++)
    {
        int k=first+second;
        printf("\n%d",k);
        first=second;
        second=k;
    }
}
