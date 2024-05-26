#include "Referee.h"
#include <iostream>
#include <string>

using namespace std;

Referee::Referee() {}

Player * Referee::refGame(Player * player1, Player * player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->compare(move2)== 1){
        std::cout << "Player 1 Wins!" << std::endl;
        return player1;
    } else if (move2->compare(move1)== 1){
        std::cout << "Player 2 Wins!" << std::endl;
        return player2;
    } else {
        std::cout << "It's a tie!" << std::endl;
        return nullptr;
    }
}
