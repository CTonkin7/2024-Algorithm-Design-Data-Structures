#include "Monkey.h"

Monkey::Monkey() {}

std::string Monkey::getName() {
    return "Monkey";
}

bool Monkey::compare(Move* other) {
    // Monkey beats Ninja and Robot
    return (other->getName() == "Ninja" || other->getName() == "Robot");
}
