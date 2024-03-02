#include "Computer.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Monkey.h"
#include "Zombie.h"


Move* Computer::makeMove(){
    return new Ninja();
}

std::string Computer::getName(){
    return "Computer";
}


