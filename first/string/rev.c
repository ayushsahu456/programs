//reverse a string using pre defined functions
#include<stdio.h>
#include<string.h>
void main()
{
    char name[30];
    printf("enter name:-\n;");
    gets(name);
   strrev(name);
   printf("string after rev=%s",name);
}