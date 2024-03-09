#ifndef COMPUTER_H
#define COMPUTER_H
using namespace std;
#include "Player.h"

class Computer : public Player {
    public:
    Move* makeMove() override;
    std::string getName() override;
};

#endif

