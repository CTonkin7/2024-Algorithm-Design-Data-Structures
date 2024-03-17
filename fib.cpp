#include <iostream>
#include <vector>
#include "fib.h"

int fib::fibSum(int n) {
    static std::vector<int> fib_values = {0,1};

    if (n >= fib_values.size()) {
        fib_values.resize(n+1);
    }
    if (n<=1){
        return n;
    }
    if (fib_values.at(n) != 0) {
        return fib_values.at(n);
    }
    //otherwise calculate the value and add to vector
    int value = fibSum(n - 1) + fibSum(n - 2);
    fib_values.at(n) = value;
    
    return value;
}