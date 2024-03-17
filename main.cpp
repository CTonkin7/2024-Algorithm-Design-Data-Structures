#include "fib.h"
#include <iostream>

int main() {
    std::cout << "enter n: ";
    int n;
    std::cin >> n;
    fib result;
    std::cout << result.fibSum(n) << std::endl;
    } 