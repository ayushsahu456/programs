//compare two strings using pre defined function
#include<stdio.h>
#include<string.h>
void main()
{
    int value;
    char s1[30],s2[30];
    printf("enter string 1:-\n");
    gets(s1);
    printf("enter string 2:-\n");
    gets(s2);
    value=strcmp(s1,s2);
    if(value==0)
    {
        printf("same");
    }
    else
    printf("not same");
}