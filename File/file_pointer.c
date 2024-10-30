#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("iit.txt","w");
    printf("Enter data");
    while ((ch=getchar())!= EOF)// && (ch!='/'))
    {
        putc(ch,fp);
    }
    fclose(fp);
    fp = fopen("iit.txt","r");
    while ((ch = getch())!=EOF)
    {
        printf("%c",ch);
        fclose(fp);
    }
    
}