#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Monkey.h"
#include "Zombie.h"
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
    else if (move == "Robot"){
        return new Robot();
    }
    else if (move == "Ninja"){
        return new Ninja();
    }
    else if (move == "Pirate"){
        return new Pirate();
    }
    else if (move == "Monkey"){
        return new Monkey();
    }
    else if (move == "Zombie"){
        return new Zombie();
    }
    else{
        std::cout << "Invalid move. Try again." << std::endl;
        return nullptr;
    
    }
}

std::string Human::getName(){
    return name;
}