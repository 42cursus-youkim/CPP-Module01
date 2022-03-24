#include <iostream>
#include <sstream>
#include "Zombie.hpp"

const int NUM_ZOMBIES = 3;

int main(void) {
  Zombie* zombies = zombieHorde(NUM_ZOMBIES, "Heap Zombie");
  for (int i = 0; i < NUM_ZOMBIES; i++)
    zombies[i].announce();
  delete[] zombies;
}