/*print sum of two array elements*/
#include <stdio.h>
int main()
{
    int i, a[5], b[5],c[5];
    printf("enter elements in first array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements in second array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        c[i]=a[i]+b[i];
     }
     printf("sum of elements is:-\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",c[i]);
    }
    
}