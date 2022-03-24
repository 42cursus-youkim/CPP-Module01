#include "Harl.hpp"
#include <string>

void Harl::debug(void) {
  std::cerr << "I love having extra bacon for my "
               "7XL-double-cheese-triple-pickle-specialketchup burger. I "
               "really do!\n";
}

void Harl::info(void) {
  std::cerr << "I cannot believe adding extra bacon costs more money. You "
               "didn’t put enough bacon in my burger! If you did, I wouldn’t "
               "be asking for more!\n";
}

void Harl::warning(void) {
  std::cerr << "I think I deserve to have some extra bacon for free. I’ve been "
               "coming for years whereas you started working here since last "
               "month.\n";
}

void Harl::error(void) {
  std::cerr << "This is unacceptable! I want to speak to the manager now.\n";
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