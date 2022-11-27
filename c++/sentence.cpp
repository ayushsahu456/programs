#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName<<endl;
  // to get a length of a sentence enter sentence using getline(cin, variable name)
  cout<< "length of fullName="<<fullName.length()<<endl;
  return 0;
}
