#include "pattern.h"
#include <iostream>

int pattern::sum(int n) {
    if (n == 2){
        return 2;
    }
    return (n*(n-1)) + sum(n-1);
}