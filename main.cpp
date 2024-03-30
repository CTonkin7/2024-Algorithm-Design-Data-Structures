#include <iostream>
#include "BubbleSort.h"

int main() {
    std::vector<int> unsorted = {1,10,20,7,-1,4};
    
    // Using Bubble Sort
    BubbleSort bubbleSort;
    std::vector<int> sorted = bubbleSort.sort(unsorted);
    
    // Displaying sorted vector
    std::cout << "Sorted array using Bubble Sort: ";
    for (int num : sorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}