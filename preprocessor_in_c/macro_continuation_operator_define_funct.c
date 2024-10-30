//'''Continue in single Line 
//'''
#include<stdio.h>

#define message_for(a,b)\
printf(#a "and" #b":I love India!\n")

int main()
{
    message_for('a','b');
}
