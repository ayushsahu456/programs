//concept of pointers
#include<iostream>
#include<string>

using  namespace std;
int main(){
string food="pizza";
string *ptr=&food;
cout<< food<<endl; //prints pizza
cout<< &food<<endl; //prints address of food
cout<< ptr<<endl; //prints address of food
}


//ptr stores address of any variable 
//or pointers point to any variable