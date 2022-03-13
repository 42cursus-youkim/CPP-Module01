#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {
 public:
  Zombie(std::string name);
  ~Zombie(void);
  static Zombie* newZombie(std::string name);
  static void randomChump(std::string name);
  void announce(void);

 private:
  std::string _name;
};

#endif  // __ZOMBIE_H__