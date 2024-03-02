#include "Zombie.h"

Zombie::Zombie() {}

std::string Zombie::getName() {
    return "Zombie";
}

bool Zombie::compare(Move* other) {
    // Zombie beats Pirate and Monkey
    return (other->getName() == "Pirate" || other->getName() == "Monkey");
}
