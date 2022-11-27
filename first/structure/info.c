//print info
#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char name[30];
    char gender;
    float height;
};
struct date
{
    int day;
    int month;
    int year;
};
struct adress
{
    char city[50];
    char district[50];
    char state[100];
    char pin[6];
};


int main()
{
    struct employee e1;
    struct date d1;
    struct adress a1;
    printf("++++!!welcome to confidential database!!++++\n");
    printf("database operation menu:\n");
    printf("a)add record\n");
    printf("b)delete record\n");
    printf("c)search record\n");
    printf("d)print record\n");
    printf("e)exit\n");
    char d;
    printf("enter our choice:-\n");
    scanf("%c",&d);
    switch (d)
    {
    case 'a':
        printf("++add information++\n");
        printf("enter name:-");
        scanf("%s\n",e1.name);
        printf("enter date of birth:-");
        scanf("%d %d %d\n",&d1.day,&d1.month,&d1.year);
        printf("enter gender:-");
        scanf("%c\n",&e1.gender);
        printf("enter height:-");
        scanf("%f\n",&e1.height);
        printf("enter residence(as a place district and pin):-");
        scanf("%s %s %s %s\n",a1.city,a1.district,a1.state,a1.pin);
        break;
        case 'b':
        printf("deleted\n");
        break;
        case 'c':
        break;
        case 'd':
        printf("name=%s\n",e1.name);
        printf("dob=%d/%d/%d\n",d1.day,d1.month,d1.year);
        printf("gender=%c\n",e1.gender);
        printf("height=%f\n",e1.height);
        printf("residence details=%s %s %s %s\n",a1.city,a1.district,a1.state,a1.pin);
        break;
        case 'e':
        printf("exited\n");
        break;
    default:
        break;
    }
}