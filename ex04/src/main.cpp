// #include <stdlib.h>
#include <fstream>
#include <iostream>
#include <stdexcept>
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
  if (target.length() == 0) {
    std::cout << "Target string cannot be empty" << std::endl;
    return 1;
  }
  try {
    Replace replace(fileName, target, replaceWith);
    replace.createReplaceFile();
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
    return 1;
  }
  // system("leaks prog.out | grep 'leaks for'");
  return (0);
}