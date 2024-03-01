#include "Scissors.h"

Scissors::Scissors() {}

std::string Scissors::getName() {
    return "Scissors";
}

bool Scissors::compare(Move* other) {
    // Scissors beats paper
    return (other->getName() == "Paper");
}
