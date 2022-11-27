/*calculate simple interest*/
#include <stdio.h>
int main()
{
    int p,t;
    float s,r;
    printf("enter principle value\n");
    scanf("%d",&p);
    printf("enter time\n");
    scanf("%d",&t);
    printf("enter rate of interest\n");
    scanf("%f",&r);
    s=(p*r*t)/100;
    printf("simple interest:-%f",s);
}