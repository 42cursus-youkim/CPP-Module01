#include <stdlib.h>
#include <iostream>
#include <sstream>
#include "Zombie.hpp"

const int NUM_ZOMBIES = 3;

int main(void) {
  Zombie* zombies = zombieHorde(NUM_ZOMBIES, "Heap Zombie");
  for (int i = 0; i < NUM_ZOMBIES; i++)
    zombies[i].announce();
  delete[] zombies;

  std::cout << "\n[[[Done.]]]\n";
  system("leaks prog.out | grep 'leaks for'");
}