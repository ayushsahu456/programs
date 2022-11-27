//subtraction of two matrix
#include<stdio.h>
void main()
{
    int r1,c1,i,j;
    int a[100][100],b[100][100],c[100][100];
    printf("ENTER NUMBER OF ROWS AND COLUMNS IN ARRAY:-\n");
    scanf("%d%d",&r1,&c1);
    printf("ENTER ELEMENTS OF ARRAY 1:-\n");  // input first matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("ENTER ELEMENTS OF ARRAY 2:-\n");   //input second matrix
    for ( i = 0; i <r1; i++)
    {
        for ( j = 0; j<c1; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)             //calculating diffrence
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    } 
    printf("SUBTRACTION OF TWO MATRIX IS:-\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }     
}   