
#include "Scissors.h"

Scissors::Scissors(){}
std::string Scissors::getName(){
    return "Scissors";
}
bool Scissors::compare(Move* other){
    return (other->getName() == "Paper");
}