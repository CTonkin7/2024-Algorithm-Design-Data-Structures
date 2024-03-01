#include "Rock.h"

Rock::Rock() {}

std::string Rock::getName() {
    return "Rock";
}

bool Rock::compare(Move* other) {
    // Rock beats scissors
    return (other->getName() == "Scissors");
}
