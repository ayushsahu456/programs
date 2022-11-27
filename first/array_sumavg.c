/* calculate sum and avg of 5 students marks */
#include<stdio.h>
int main()
{
    int a[5],sum=0;
    float avg;
    printf("enter array elements:-\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("average= %f",avg);
    printf("sum= %d",sum);
}