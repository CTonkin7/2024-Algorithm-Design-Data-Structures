#include "Human.h"
#include <iostream>

Human::Human(std::string name) : name(name) {}

Move* Human::makeMove() {
    std::string move;
    std::cout << "Enter move: ";
    std::cin >> move;
    
    if (move == "Rock"){
        return new Rock();
    }
    else if (move == "Paper"){
        return new Paper();
    }
    else if (move == "Scissors"){
        return new Scissors();
    }
    else{
        std::cout << "Invalid move. Try again." << std::endl;
        return nullptr;
    
    }
}

std::string Human::getName(){
    return name;
}