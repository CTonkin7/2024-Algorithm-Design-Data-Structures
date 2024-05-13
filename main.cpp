#include <iostream>
#include "Heap.tpp"

int main() {
    // Create a heap with some initial values
    std::vector<int> initialValues = {20, 15, 30, 40, 50, 100, 25};
    Heap<int> myHeap(initialValues);

    // Display the minimum element
    std::cout << "Initial min element: " << myHeap.getMin() << std::endl;

    // Insert more elements
    myHeap.insert(10);
    myHeap.insert(5);
    myHeap.insert(60);

    std::cout << "New min element after insertions: " << myHeap.getMin() << std::endl;

    // Remove the minimum element (root element)
    myHeap.remove(myHeap.getMin());
    std::cout << "New min element after removing the previous min: " << myHeap.getMin() << std::endl;

    // Remove a specific element
    myHeap.remove(50);
    std::cout << "State after removing 50 (not shown all elements): Min is now " << myHeap.getMin() << std::endl;

    // Continue to test other functionalities or edge cases
    return 0;
}
