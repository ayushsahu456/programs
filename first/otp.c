//program to generate otp
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
 int main()
 {
     char otp[5],votp[5],c;
     int i;
     srand((unsigned)time(NULL));
     for(i=0;i<4;i++)
     {
         c=rand()%10+48;                    //generating randum OTP
         otp[i]=c;
     }
     otp[i]='\0';                           //storing null in last
     printf("OTP generated= %s\n",otp);
     printf("VERIFY OTP:-\n");
     scanf("%s",&votp);
     if (strcmp(otp,votp)==0)               //verifying OTP
     {
         printf("***OTP VERIFIED***\n");
     }
     else
     printf("***WRONG OTP***\n");
 }