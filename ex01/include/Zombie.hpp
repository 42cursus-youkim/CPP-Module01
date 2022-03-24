#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {
 public:
  Zombie();
  Zombie(std::string name);
  ~Zombie(void);

  void announce(void);
  void setName(std::string name);

 private:
  std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif  // __ZOMBIE_H__