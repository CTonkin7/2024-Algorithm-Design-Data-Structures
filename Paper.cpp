#include "Paper.h"

Paper::Paper() {}

std::string Paper::getName() {
    return "Paper";
}

bool Paper::compare(Move* other) {
    // Paper beats rock
    return (other->getName() == "Rock");
}