#include "truckloads.h"
#include <iostream>

using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize, int acc){
    if(numCrates <= loadSize){
        return acc + 1;
    } 
    else{
        return numTrucks(numCrates/2, loadSize, acc) + numTrucks(numCrates - numCrates/2, loadSize, acc);
    }

}