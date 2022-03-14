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
  replace.createReplaceFile();
  return (0);
}