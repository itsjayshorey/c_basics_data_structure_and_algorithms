//pass by value func(arr[4])
//pass by reference(arr)
#include<stdio.h>
void func1(int val); // pass by value
void func2(int *ref, int size);//pass by reference

int main()
{
    int arr[5] = {2,3,4,5,6};
    func1(arr[4]);
    printf("\n");
    func2(arr,5);
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
}
void func1(int val)
{
    printf("Received value is %d ",val);
    val=20;

}
void func2(int *ref, int size)
{
    int i=0;
    for(i=0; i<size; i++)
    {
        printf("%d ",*(ref+i));
    }
    ref[1]=10;
}