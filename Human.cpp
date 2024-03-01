#include "Human.h"
#include <iostream>


Human::Human(std::string name) : name(name) {}

Move* Human::makeMove() {
    Move* move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}

std::string Human::getName(){
    return name;
}