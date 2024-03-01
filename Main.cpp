#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    // Create human and computer players, and a referee
    Player* human = new Human("Player_1");
    Player* computer = new Computer();
    Referee referee;

    // Referee adjudicates the game and determines the winner
    Player* winner = referee.refGame(human, computer);
    
    // Output the result of the game
    if (winner == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    } else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }
    
    delete human;
    delete computer;

    return 0;
}
