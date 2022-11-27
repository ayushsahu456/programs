/*sum of odd integers from 1 to 50 from do while loop*/
#include <stdio.h>
int main()
{
    int i=1,s=0;
    do
    {
        s=s+1;
        i=i+2;
    }
    while (i<=50);
        printf("sum=%d\n",s);
    
}