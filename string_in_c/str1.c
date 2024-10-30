#include<stdio.h>
#include<string.h>
int main()
{
    char str[6]={ 'H','E','L','L','O'};
    printf("Starting message : %s \n",str);
    printf("Length of string is %d \n",strlen(str));
    char str2[6];
    strcpy(str2, str);
    printf("String 2 is %s ",str2);
    // using strcopy
    return 0;
}