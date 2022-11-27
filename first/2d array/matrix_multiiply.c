#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,sum; 
    int a[100][100], b[100][100], c[100][100];
    printf("enter rows and columns of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and column of second matrix\n");
    scanf("%d%d",&r2,&c2);
    printf("enter elemenst of first matrix\n");
    for( i = 0; i<r1; i++)
    {
      for (j=0;j<c1;j++)
      {
          scanf("%d",&a[i][j]);
      }
    }
    printf("enter elements of second array\n");
    for ( i = 0; i <r2; i++)
    {
        for ( j = 0; j<c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }       
 if (c1==r2)
 {
     int c[r1][c2];
     for(i=0;i<r1;i++)
     {
         for ( j = 0; j < c2; j++)
         {
             sum=0;
             for (k=0; k <r1; k++)
              {
                sum=sum+(a[i][k]*b[k][j]);
              }
             c[i][j]=sum;
             
         }
         
     }
 }
 else
 printf("multiplication not possible\n");
 printf("matrix c is:\n");
for( i = 0; i<r1; i++)
    {
      for (j=0;j<c2;j++)
      {
          printf("%d\t",c[i][j]);
      }
      printf("\n");
    }
}