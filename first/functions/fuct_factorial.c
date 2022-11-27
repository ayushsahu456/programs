//factorial using fuctions concept
#include <stdio.h>
int fact(int);
int main()
{
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
    b=fact(a);
    printf("factoral is:- %d \n",b);
}
int fact(int n)
{
    int c,i;
    for(i=1;i<=n;i++)
    {
        c=c*i;
    }
    return c;
}