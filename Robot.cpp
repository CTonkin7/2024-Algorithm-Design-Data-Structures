#include "Robot.h"

Robot::Robot() {}

std::string Robot::getName() {
    return "Robot";
}

bool Robot::compare(Move* other) {
    // Robot beats Ninja and Zombie
    return (other->getName() == "Ninja" || other->getName() == "Zombie");
}
