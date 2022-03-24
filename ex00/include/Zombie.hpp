#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {
 public:
  Zombie(std::string name);
  ~Zombie(void);

  void announce(void);

 private:
  std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif  // __ZOMBIE_H__