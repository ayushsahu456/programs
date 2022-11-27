//insertion sorting
#include <stdio.h>
void printarray(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
void insertionsort(int a[],int size)
{
    for (int step = 1; step < size; step++)
    {
        int t= a[step];
        int j=step-1;
        //compare t with each element on the left of it until an element smaller than
        //it is found
        //for descending order change t<a[j] to t>a[j]
        while (t < a[j] && j>=0)
     {
        a[j+1]=a[j];
        --j;
     }
     a[j+1]=t;
    }
    
}
//main function
void main()
{
    int data[]={9,5,1,4,3};
    int size= sizeof(data)/sizeof(data[0]);
    printf("original array is:-\n");
    printarray(data,size);
    insertionsort(data,size);
    printf("sorted array in ascending order:\n");
    printarray(data,size);
}