#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(string name, Weapon& weapon);
  void attack(void);

 private:
  string _name;
  Weapon& _weapon;
};

#endif  // __HUMANA_H__