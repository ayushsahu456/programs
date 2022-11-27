// finding average of three number using function
#include <stdio.h>
float average(int a,int b,int c)
{
    float avg;
    avg=(a+b+c)/3;
    return avg;
}
// main function
int main()
{
    printf("enter three numbers to find average:-\n");
    int x,y,z;
    float res;
    scanf("%d%d%d",&x,&y,&z);
    res=average(x,y,z);
    printf("average of three numbers is= %f",res);
}