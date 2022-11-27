/*calculate area of circle*/
#include <stdio.h>
int main()
{
    float r,area;
    printf("enter radius of circle\n");
    scanf("%f",&r);
    area=2*3.14*r*r;
    printf("area of circle=%f",area);
}