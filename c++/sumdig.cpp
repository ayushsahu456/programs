//print sum of digit
#include<iostream>
using namespace std;
int main(){
    int n,i,d,sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    for ( i = 0; n > 0; i++)
    {
          d=n%10;
          sum=sum+d;
          n=n/10;
    }
    cout<<"sum of digit is: ";
    cout<<sum<<endl;
    
}