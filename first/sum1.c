/*sum of series:- x/1 + x^2/2 + x^3/3 + .....*/

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
        sum=sum+pow(x,i)/i;
    }
    printf("sum is:-%d\n",sum);
}