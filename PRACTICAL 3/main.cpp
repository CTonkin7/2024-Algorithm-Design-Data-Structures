
#include "truckloads.h"
#include <iostream>

int main(){
    Truckloads t;
    int numCrates = 1024;
    int loadSize = 5;
    int acc = 0;

    std::cout << "Number of trucks required: " << t.numTrucks(numCrates, loadSize, acc) << std::endl;
}