#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    int n;
    char str2[10];
    int i;
    int len;
    int p;
    printf("Enter the string : ");
    scanf("%s",str);
    printf("Enter how many times you want string to be rotated :");
    scanf("%d",&n);
    len = strlen(str);
    for(int i=0; i<len; i++)
    {
        p = (i+n)%len;
        str2[p] = str[i];
    }
    str2[len] = '\0';
    printf("\n Rotated string is %s",str2);
    printf("\n");
}