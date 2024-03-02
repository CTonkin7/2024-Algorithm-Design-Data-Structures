#include "Pirate.h"

Pirate::Pirate() {}

std::string Pirate::getName() {
    return "Pirate";
}

bool Pirate::compare(Move* other) {
    // Pirate beats Robot and Monkey
    return (other->getName() == "Robot" || other->getName() == "Monkey");
}
