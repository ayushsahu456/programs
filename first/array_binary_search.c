/*binary search*/
#include<stdio.h>

void main()
{
    int i, n, index=-1, num, start=0, mid, end;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements : \n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter the element to be searched : ");
    scanf("%d", &num);

    end=n-1;
    mid = (start+end)/2;

    while(start <= end)
    {
        if(a[mid] == num)
        {
            index = mid;
            break;
        } else if(a[mid]>num)
        {
            end = mid-1;
        } else if(a[mid]<num)
        {
            start = mid+1;
        }
        mid = (start+end)/2; 
    }
    printf("Index of %d is : %d", num, index);    
}