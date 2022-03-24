#include <stdlib.h>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
  {
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  std::cout << "\n";
  {
    Weapon club = Weapon("crude spiked club");

    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  std::cout << "[[[Done]]]]\n";
  system("leaks prog.out | grep 'leaks for'");
}