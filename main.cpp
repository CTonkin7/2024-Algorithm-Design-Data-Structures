#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string input;
    std::cout << "Enter a list of integers separated by space: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::vector<int> nums;
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }

    QuickSort quickSort;
    RecursiveBinarySearch binarySearch;

    std::vector<int> sortedList = quickSort.sort(nums);

    bool foundOne = binarySearch.search(sortedList, 1);

    std::cout << (foundOne ? "true" : "false") << " ";
    for (int num : sortedList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
