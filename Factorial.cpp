#include "factorial.h"

int Factorial::factorial(int n, int accumulator = 1) {
    if (n == 0) {
        return accumulator;
    }
    return n * factorial(n - 1, n * accumulator);
}