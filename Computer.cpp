// This code was written by Caleb Tonkin (a1850062)
// Collaboration with Ben Butler (a1852044)


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
    return new Rock();
}

std::string Computer::getName(){
    return "Computer";
}


