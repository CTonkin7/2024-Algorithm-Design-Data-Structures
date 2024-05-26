
#include "Human.cpp"
#include "Referee.cpp"
#include "Computer.cpp"
#include "Move.cpp"
#include "Rock.cpp"
#include "Paper.cpp"
#include "Scissors.cpp"
#include <string>
#include <iostream>

int main(){
    Human human("Caleb");
    Computer computer;
    Referee referee;

    Player * winner = referee.refGame(&human, &computer);

}