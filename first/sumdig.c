/*sum of digits of a number*/
#include<stdio.h>
int main()
{
    int i,d,n,sum=0;
    printf("enter a number:-\n");
    scanf("%d",&n);
    for (i=0;n>0;i++)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("sum=%d\n",sum);
    
}