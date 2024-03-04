#include "Referee.h"
Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->compare(move2)) {
        return player1; // Player 1 wins
    } else if (move2->compare(move1)) {
        return player2; // Player 2 wins
    } else {
        return nullptr; // Tie
    }
    return player2; // Player 2 wins
}
