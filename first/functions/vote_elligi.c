//check eligibility of voting using function
#include<stdio.h>
void check(int age)
{
    if(age>=18)
    {
        printf("you are eligible to vote\n");
    }
    else 
        printf("you are not eligible to vote\n");
}
//main function
int main()
{
   int a;
   printf("enter your age:-\n");
   scanf("%d",&a);
   check(a);
}