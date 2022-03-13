#include <iostream>
#include "Karen.hpp"

enum level {
  DEBUG = 0,
  INFO = 1,
  WARNING = 2,
  ERROR = 3,
  NOT_LEVEL = 4,
};

static level getLevel(std::string input) {
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  for (int i = 0; i < 4; i++) {
    if (input == levels[i]) {
      return (level)i;
    }
  }
  return NOT_LEVEL;
}

static void printFilter(const std::string& level, Karen& karen) {
  std::cout << "[" << level << "]\n";
  karen.complain(level);
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
    return (1);
  }
  Karen karen;
  const level lv = getLevel(argv[1]);
  switch (lv) {
    case DEBUG:
      printFilter("DEBUG", karen);
      // fall through
    case INFO:
      printFilter("INFO", karen);
      // fall through
    case WARNING:
      printFilter("WARNING", karen);
      // fall through
    case ERROR:
      printFilter("ERROR", karen);
      break;
    default:
      std::cout << "[ Probably complaing about insignificant problems ]\n";
  };
  return (0);
}