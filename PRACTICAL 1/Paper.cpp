
#include "Paper.h"

Paper::Paper(){}
std::string Paper::getName(){
    return "Paper";
}
bool Paper::compare(Move* other){
    return (other->getName() == "Rock");
}