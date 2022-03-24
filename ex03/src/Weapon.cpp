#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(const string& type) : _type(type) {}

const string& Weapon::getType(void) const {
  return _type;
}

void Weapon::setType(const string& type) {
  _type = type;
}
