#include <iostream>
#include "function.h"

// FUNCTION : 1 x 2 + 2 x 3 + 3 x 4 ... + (n-1) x n
// HEAD RECURSIVE VERSION
int function::f1(int n) {
    if (n == 2) { // base case (1 x 2 = 2)
        return 2;
    }
    return n*(n-1) + f(n-1); // recursive case
}

// TAIL RECURSIVE VERSION

int function::f2(int n, int acc) {
    if (n == 2) { // base case (1 x 2 = 2)
        return acc;
    }
    return f(n-1, acc + n*(n-1)); // recursive case
}

//helper function

int f(int n){
    f(n,0);
}