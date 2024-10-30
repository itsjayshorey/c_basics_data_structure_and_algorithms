#include<stdio.h>
float simpleInterest(int p,int r,int t);
int  main()
{
    int p,t,r;
    printf("Enter Principle :");
    scanf("%d",&p);
    printf("Enter Rate :");
    scanf("%d",&r);
    printf("Enter time :");
    scanf("%d",&t);
    printf("Simple interest is %f\n\n",simpleInterest(p,r,t));
    return 0;
}
float simpleInterest(int p, int r,int t)
{
    float interest = (float)(p*r*t)/(float)100;
    return interest;
}