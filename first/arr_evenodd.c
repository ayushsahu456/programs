/* count total number of even and odd elements */
#include<stdio.h>
int main()
{
   int n,a[n];
   int e=0,o=0,i;
   printf("enter number of elements in an array:-\n");
   scanf("%d",&n);
   printf("enter elements in an array:-\n");
   for ( i = 0; i < n; i++)
   {
       scanf("%d",&a[i]);
   }
   for ( i = 0; i < n; i++)
   {
       if (a[i]%2==0)
       {
         e=e+1;
       }
       else
       o=o+1;
       
   }
   
}