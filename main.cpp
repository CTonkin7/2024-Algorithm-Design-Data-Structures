//Main.cpp file created by Caleb Tonkin (a1850062)

#include <iostream>
#include "Truckloads.h"

int main(){
    int numCrates = 15;
    int loadSize = 1;
    Truckloads t;
    std::cout << "Number of trucks: " << t.numTrucks(numCrates, loadSize) << std::endl;

}