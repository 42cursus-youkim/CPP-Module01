#include "zombieUtil.hpp"

Zombie* newZombie(std::string name) {
  return new Zombie(name);
}
