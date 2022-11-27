//print factrial of a number

#include<iostream>
using namespace std;
int main(){
int n,i,fac=1;
cout<<"enter a number"<<endl;
cin>>n;
if (n==0)
{
    cout<<"factorial of a number is:- ";
    cout<<fac;
}
else{
for(i=n;i>=1;i--){
    fac=fac*i;
}
cout<<"factorial of a number is:- ";
cout<<fac;
}
}