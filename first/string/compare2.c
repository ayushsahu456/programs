//compare two strings without predefined function
#include<stdio.h>
#include<string.h>
void main()
{
    int flag=0,i;
    char s1[30],s2[30];
    printf("enter string 1:-\n");
    gets(s1);
    printf("enter string s2:-\n");
    gets(s2);
    for (  i= 0; s1[i]!='\0'||s2[i]!='\0'; i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("not same\n");
    }
    else
    printf("not same\n");
}