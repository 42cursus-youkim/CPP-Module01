#include <iostream>
#include <sstream>
#include "Zombie.hpp"

const int NUM_ZOMBIES = 4;

static std::string int_to_string(int i) {
  std::stringstream ss;
  ss << i;
  return ss.str();
}

static void initHeapZombies(Zombie* zombies[], int numZombies) {
  for (int i = 0; i < numZombies; i++)
    zombies[i] = Zombie::newZombie("Heap Zombie " + int_to_string(i));
}

static void cleanHeapZombies(Zombie* zombies[], int numZombies) {
  for (int i = 0; i < numZombies; i++)
    delete zombies[i];
}

static void initStackZombies(int numZombies) {
  for (int i = 0; i < numZombies; i++)
    Zombie::randomChump("Stack Zombie " + int_to_string(i));
}

int main(void) {
  Zombie* heapZombies[NUM_ZOMBIES];
  std::cout << "Creating Heap zombies...\n";
  initHeapZombies(heapZombies, NUM_ZOMBIES);
  cleanHeapZombies(heapZombies, NUM_ZOMBIES);

  std::cout << "Creating Stack zombies...\n";
  initStackZombies(NUM_ZOMBIES);
  return 0;
}