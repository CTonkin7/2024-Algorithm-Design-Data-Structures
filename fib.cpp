#include <iostream>
#include "fib.h"

int fib::fibSum(int n) {
    if (n <= 1) {
        return n;
    }
    return fibSum(n - 1) + fibSum(n - 2);
}