//Main.cpp file created by Caleb Tonkin (a1850062)

#include <iostream>
#include "Truckloads.h"

int main(){
    int numCrates = 1024;
    int loadSize = 5;
    Truckloads t;
    int numTrucks = t.numTrucks(numCrates, loadSize);
    std::cout << "Number of trucks: " << numTrucks << std::endl;

}