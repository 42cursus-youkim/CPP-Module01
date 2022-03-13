#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

using std::string;

class Zombie {
 public:
  Zombie(string name); //, std::string type);
  ~Zombie(void);
  void announce(void);

 private:
  string _name;
  // std::string _type;
};

#endif  // __ZOMBIE_H__