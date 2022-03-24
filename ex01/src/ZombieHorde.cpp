#include <sstream>
#include "Zombie.hpp"

static std::string int_to_string(int i) {
  std::stringstream ss;

  ss << i;
  return ss.str();
}

Zombie* zombieHorde(int N, std::string name) {
  Zombie* zombies = new Zombie[N];
  for (int i = 0; i < N; i++) {
    zombies[i].setName(name + " " + int_to_string(i));
  }
  return zombies;
}