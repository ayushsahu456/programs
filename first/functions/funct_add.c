//addition using functions concept
#include <stdio.h>
int add(int , int);
int main()
{
    int x,y,z;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    z=add(x,y);
    printf("sum is %d \n",z);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}