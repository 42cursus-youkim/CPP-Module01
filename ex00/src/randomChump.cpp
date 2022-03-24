#include "zombieUtil.hpp"

void randomChump(std::string name) {
  Zombie zombie(name);

  zombie.announce();
}
