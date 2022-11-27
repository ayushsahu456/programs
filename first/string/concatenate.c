//concatenate two strings using predefined function strcat(str1,str2)

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    printf("enter string 1:-\n");
    gets(s1);
    printf("enter string 2:-\n");
    gets(s2);
    strcat(s1,s2);
    printf("string after concatenate is:-  %s\n",s1);
}