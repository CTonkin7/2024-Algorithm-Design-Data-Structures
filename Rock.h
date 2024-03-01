#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock : public Move {
    public:
        Rock();
        std::string getName() override;
        bool compare(Move* other) override;
};

#endif