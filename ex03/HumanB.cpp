#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const string& name) {
  _name = name;
}

void HumanB::attack(void)
{
  std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
  _weapon = &weapon;
}
