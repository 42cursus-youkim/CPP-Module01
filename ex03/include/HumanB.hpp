#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(const string& name);
  void setWeapon(Weapon& weapon);
  
  void attack(void);

 private:
  string _name;
  Weapon* _weapon;
};

#endif // __HUMANB_H__