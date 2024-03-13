#include "isPalendrome.h"
#include <iostream>

bool isPalendrome::isPalendromeCheck(std::string input) {
    int size = input.size();
    if (size == 0 || size == 1) {
        return true;
    }
    if (input[0] == input[size - 1]) {
        return isPalendromeCheck(input.substr(1, size - 2));
    } else {
        return false;
    }
}