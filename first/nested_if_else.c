/*finding largest of three number using nested if else*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("a is largest\n");
        }
        else
        printf("b is largest\n");

    }
    else if(b>c)
    {
        printf("b is largest\n");
    }
    else
    {
       printf("c is largest\n");
    }
}

