#include <iostream>
#include "Reverser.h" // Include the header file that declares the Reverser class

int main() {
    Reverser reverser;

    // Test 1: reverseDigit with input 1234 should return 4321
    int result1 = reverser.reverseDigit(1234);
    if (result1 == 4321) {
        std::cout << "Test 1 passed\n";
    } else {
        std::cout << "Test 1 failed: Expected 4321 but got " << result1 << "\n";
    }

    // Test 2: reverseDigit with input 100 should return 1
    int result2 = reverser.reverseDigit(100);
    if (result2 == 1) {
        std::cout << "Test 2 passed\n";
    } else {
        std::cout << "Test 2 failed: Expected 1 but got " << result2 << "\n";
    }

    // Add more tests as needed...

    return 0;
}