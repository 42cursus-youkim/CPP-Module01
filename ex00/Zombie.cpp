#include "Zombie.hpp"
#include <iostream>

static string withTag(string str) {
  return "<" + str + "> ";
}

Zombie::Zombie(string name) : _name(name) {}

Zombie::~Zombie(void)
{
  std::cout << withTag(_name) << "died" << std::endl;
}

void Zombie::announce(void)
{
  std::cout << withTag(_name) << "BraiiiiiiinnnzzzZ..." << std::endl;
}
