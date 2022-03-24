#include <stdlib.h>
#include <iostream>
#include <sstream>
#include "Zombie.hpp"
#include "zombieUtil.hpp"

const int NUM_ZOMBIES = 2;

static std::string int_to_string(int i) {
  std::stringstream ss;
  ss << i;
  return ss.str();
}

static void initHeapZombies(Zombie* zombies[], int numZombies) {
  for (int i = 0; i < numZombies; i++)
    zombies[i] = newZombie("Heap Zombie " + int_to_string(i));
}

static void cleanHeapZombies(Zombie* zombies[], int numZombies) {
  std::cout << "\n[Manually cleaning heap zombies...]\n\n";
  for (int i = 0; i < numZombies; i++)
    delete zombies[i];
}

static void initStackZombies(int numZombies) {
  for (int i = 0; i < numZombies; i++)
    randomChump("Stack Zombie " + int_to_string(i));
}

int main(void) {
  Zombie* heapZombies[NUM_ZOMBIES];
  std::cout << "[[[Creating Heap zombies...]]]\n";
  initHeapZombies(heapZombies, NUM_ZOMBIES);
  for (int i = 0; i < NUM_ZOMBIES; i++)
    heapZombies[i]->announce();
  cleanHeapZombies(heapZombies, NUM_ZOMBIES);

  std::cout << "\n[[[Creating Stack zombies...]]]\n";
  initStackZombies(NUM_ZOMBIES);

  std::cout << "\n[[[Done.]]]\n";
  system("leaks prog.out | grep 'leaks for'");
  return 0;
}