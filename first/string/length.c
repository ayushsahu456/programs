// find length of string using predefined function strlen()
#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int count=0;
    printf("ENTER YOUR NAME:-\n");
    gets(name);
    count=strlen(name);
    printf("name entered is:-\n");
    puts(name);
    printf("length is:-%d\n",count);
}