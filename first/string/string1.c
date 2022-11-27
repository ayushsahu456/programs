//read and print string using gets()
#include <stdio.h>
void main()
{
    char name[30];
    printf("enter name");
    gets(name);
    printf("%s",name);
}