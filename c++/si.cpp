//calculate simple interest

#include<iostream>
using namespace std;
int main(){
    int p,t;
    float s,r;
    cout<<"enter principle value:- "<<endl;
    cin>>p;
    cout<<"enter time period:- "<<endl;
    cin>>t;
    cout<<"enter rate of interest:- "<<endl;
    cin>>r;
    s=(p*r*t)/100;
    cout<<"simple interest is:- ";
    cout<<s<<endl;
}