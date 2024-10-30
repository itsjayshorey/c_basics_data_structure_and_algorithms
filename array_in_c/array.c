#include<stdio.h>
//Array is a type of data structure arrays can store fixed 
//<datatype> <variable name> [<size of array]
int main()
{
    int numbers[10];
    float values[5];
    char name[6];


    //IN LINE INITIALIZATION
    int numbers_10[10] ={6,7,10,32,44,5,1,4,3,2};
    int number_[]={6,7,10,32,44,5,1,4,3,2};

    //DYNAMIC INITIALIZATION
    int arr[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter the number ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d\n",arr[i]);
    }
}
//bounds checking --> No inbuilt function is available for that
