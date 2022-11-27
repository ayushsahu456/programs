/*print array elemenst*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of elements in an array:-\n");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}