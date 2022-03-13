#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>

using std::string;

class Weapon {
 public:
  Weapon();
  Weapon(const string& type);
  const string& getType(void) const;
  void setType(const string& type);

 private:
  string _type;
};

#endif  // __WEAPON_H__