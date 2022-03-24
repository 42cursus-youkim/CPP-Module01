#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const string& name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
  _weapon = &weapon;
}

void HumanB::attack(void) {
  if (_weapon)
    std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
  else
    std::cout << _name << " doesn't have anything to attack!\n";
}
