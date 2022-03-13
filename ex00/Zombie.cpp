#include "Zombie.hpp"
#include <iostream>

static std::string withTag(std::string str) {
  return "<" + str + "> ";
}

Zombie::Zombie(std::string name) : _name(name) {
}

Zombie::~Zombie(void) {
  std::cout << withTag(_name) << "Went back to grave...\n";
}

void Zombie::announce(void) {
  std::cout << withTag(_name) << "BraiiiiiiinnnzzzZ...\n";
}
