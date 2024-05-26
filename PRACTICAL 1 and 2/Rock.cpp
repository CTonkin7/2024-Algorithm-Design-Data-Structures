
#include "Rock.h"

Rock::Rock(){}
std::string Rock::getName(){
    return "Rock";
}
bool Rock::compare(Move* other){
    return (other->getName() == "Scissors");
}