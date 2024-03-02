#include "Ninja.h"

Ninja::Ninja() {}

std::string Ninja::getName() {
    return "Ninja";
}

bool Ninja::compare(Move* other) {
    // Ninja beats Pirate and Zombie
    return (other->getName() == "Pirate" || other->getName() == "Zombie");
}
