#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter value at position %d ",i);
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    int max = arr[0];
    for(i=0 ; i<10 ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    printf("Minimum is %d and Maximum is %d ",min,max);
    return 0;
}