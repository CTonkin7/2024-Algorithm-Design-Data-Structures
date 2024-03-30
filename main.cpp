#include <iostream>
#include "BubbleSort.h"

int main() {
    std::vector<int> unsorted = {64, 34, 25, 12, 22, 11, 90};
    
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
