#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(const string& name);
  void attack(void);
  void setWeapon(Weapon& weapon);

 private:
  string _name;
  Weapon* _weapon;
};

#endif // __HUMANB_H__