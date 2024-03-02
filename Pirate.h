#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"

class Pirate : public Move {
    public:
        Pirate();
        std::string getName() override;
        bool compare(Move* other) override;
};

#endif