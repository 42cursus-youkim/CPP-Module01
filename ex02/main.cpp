#include <iostream>
#include <string>

using std::cout;

int main(void) {
  std::string string = "HI THIS IS BRAIN";
  std::string* stringPTR = &string;
  std::string& stringREF = string;

  cout << "[[[Printing address of string]]]\n";
  cout << "address of <string>          :" << &string << "\n";
  cout << "address of <string pointer>  :" << stringPTR << "\n";
  cout << "address of <string reference>:" << &stringREF << "\n";

  cout << "\n[[[Printing value of string]]]\n";
  cout << "value of <string>            :" << string << "\n";
  cout << "value of <string pointer>    :" << *stringPTR << "\n";
  cout << "value of <string reference>  :" << stringREF << "\n";
}