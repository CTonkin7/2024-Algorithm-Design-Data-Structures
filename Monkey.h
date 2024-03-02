#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey : public Move {
    public:
        Monkey();
        std::string getName() override;
        bool compare(Move* other) override;
};

#endif