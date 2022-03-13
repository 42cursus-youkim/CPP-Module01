#include <fstream>
#include <iostream>
#include <string>
#include "Replace.hpp"

using std::string;

int main(int argc, const char* argv[]) {
  if (argc != 4) {
    std::cout << "Usage: " << argv[0]
              << " <input_file> <string to replace> <replaced string>"
              << std::endl;
    return 1;
  }
  const string fileName = argv[1], target = argv[2], replaceWith = argv[3];
  Replace replace(fileName, target, replaceWith);
  // string fileName = argv[1];
  // string resultName = stem(fileName) + ".replace";
  // std::ifstream input(fileName.c_str());
  // if (input.fail()) {
  //   std::cerr << "Failed to open " << fileName << std::endl;
  //   return 1;
  // }
  // std::ofstream output;
  // output.open(resultName.c_str());
  // string buffer;
  // while (std::getline(input, buffer)) {
  //   std::cout << buffer << std::endl;
  //   output << buffer << std::endl;
  // }
  // input.close();

  return (0);
}