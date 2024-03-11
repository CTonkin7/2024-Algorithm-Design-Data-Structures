#include <iostream>
#include "Reverser.h"

int main(){
    Reverser r;
    int reversedNumber = r.reverseDigit(12345);
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    Reverser r2;
    std::string reversedString = r2.reverseString("Hello");
    std::cout << "Reversed string: " << reversedString << std::endl;
}