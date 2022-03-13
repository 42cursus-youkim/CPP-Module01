#include <iostream>
#include <string>

int main(void) {
  std::string string = "HI THIS IS BRAIN";
  std::string* stringPTR = &string;
  std::string& stringREF = string;

  std::cout << "address using <string>          :" << &string << "\n";
  std::cout << "address using <string pointer>  :" << stringPTR << "\n";
  std::cout << "address using <string referebce>:" << &stringREF << "\n";
}