/*sum of series:- x + x^3/3 + x^5/5 + ..... */

#include <stdio.h>
#include <math.h>
int main()
{
    int x,n,i,sum=0;
    printf("enter n:-\n");
    scanf("%d",&n);
    printf("enter x:-\n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(x,2*i-1)/i;
    }
    printf("sum is:-%d\n",sum);
}