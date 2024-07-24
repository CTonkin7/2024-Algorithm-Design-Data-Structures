#include "Animal.h"
#include "Tiger.h"
#include <iostream>
#include <vector>
#include <string>

int main(){
    Tiger tigger;
    Animal* zoo = &tigger;
    zoo->makeSound();
}