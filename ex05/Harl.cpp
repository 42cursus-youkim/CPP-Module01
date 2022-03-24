#include <string>
#include "Harl.hpp"

void Harl::debug(void) {
  std::cerr << "I love to get extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger. "
               "I just love it!\n";
}

void Harl::info(void) {
  std::cerr
      << "I cannot believe adding extra bacon cost more money. "
         "You don’t put enough! If you did I would not have to ask for it!\n";
}

void Harl::warning(void) {
  std::cerr << "I think I deserve to have some extra bacon for free. "
               "I’ve been coming here for years and you just started working "
               "here last month.\n";
}

void Harl::error(void) {
  std::cerr << "This is unacceptable, I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  HarlFunc funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

  for (int i = 0; i < 4; i++) {
    if (level == levels[i]) {
      HarlFunc func = funcs[i];
      (this->*func)();
      return;
    }
  }
}