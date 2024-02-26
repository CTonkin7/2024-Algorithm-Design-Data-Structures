// Player_h abstract class to create the base player class. Player class includes ...
// ... public makeMove and getName functions

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
public:
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif // PLAYER_H
