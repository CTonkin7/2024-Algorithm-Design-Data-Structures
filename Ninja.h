#ifndef NINJA_H
#define NINJA_H
#include "Move.h"

class Ninja : public Move {
    public:
        Ninja();
        std::string getName() override;
        bool compare(Move* other) override;
};

#endif