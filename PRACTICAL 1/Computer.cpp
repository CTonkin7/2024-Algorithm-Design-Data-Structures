#include "Computer.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"


Move* Computer::makeMove(){
    return new Rock();
}

std::string Computer::getName(){
    return "Computer";
}


