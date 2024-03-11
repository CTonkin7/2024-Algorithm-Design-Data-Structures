// Truckloads.cpp function definition file created by Caleb Tonkin (a1850062)

#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){

    if(numCrates <= loadSize){
        return 1;
    }
    else 
    {
        return numTrucks(numCrates/2, loadSize) + numTrucks((numCrates + 1)/2, loadSize);
    }

}