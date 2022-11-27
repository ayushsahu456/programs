/*reverse of a number*/\
#include <stdio.h>
int main()
{
    int i,n,rev=0;
    printf("enter a number:-\n");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    printf("reverse number=%d\n",rev);
}