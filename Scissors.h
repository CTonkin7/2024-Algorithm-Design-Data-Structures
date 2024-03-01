#ifdef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors : public Move {
    public:
        Scissors();
        std::string getName() override;
        int compare(Move* other) override;
};

#endif