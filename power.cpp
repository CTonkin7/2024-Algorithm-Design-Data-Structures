#include <iostream>
#include "power.h"

int power::pow(int x, int n, int acc) {
    if (n == 0) {
        return acc;
    }
    return pow(x, n - 1, x * acc);
}