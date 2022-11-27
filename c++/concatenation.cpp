//concatinate two string 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstname="ayush ";
    string lastname="sahu";
    string fullname=firstname+lastname; //concatenate using + sign
    cout<< fullname<< endl;
    string full=firstname.append(lastname); //concatenate using append() function
    cout<<fullname<<endl;
    string s1="10";
    string s2="20";
    string s3=s1+s2; //concatenate two integers or numbers
    cout<<s3<<endl;

}
/* we can give sapce between two string using " " or ' ' */