/*linear search*/
#include<stdio.h>

void main()
{
    int i, n, num, index = -1;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements : \n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter the element to be searched : ");
    scanf("%d", &num);

    for (i=0; i < n; i++)
    {
         if(a[i] == num)
         {
            index = i;
            break; 
        }
    }
    printf("Index of element is : %d", index);  
}