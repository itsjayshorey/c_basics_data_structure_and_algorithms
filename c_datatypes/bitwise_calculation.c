#include<stdio.h>
int main()
{
    int inp;
    scanf("%d",&inp);
    int divi,multi;
    divi=inp<<1;
    multi=inp>>1;
    printf("%d \n",divi);
    printf("%d \n",multi);
    printf("%d \n",inp);
}