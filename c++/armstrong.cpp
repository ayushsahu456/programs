//check whether a number is armstrong or not
#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,temp;
    cout<<"enter a number:- ";
    cin>>n;
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (temp==sum)
    {
        cout<<"number is armstrong"<<endl;    
    }
    else
    {
        cout<<"number is not armstrong"<<endl;
    }
    
}