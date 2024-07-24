#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList list;

    list.insertFront(10);
    list.insertFront(20);
    list.insertFront(30);
    list.insertFront(40);
    list.insertFront(50);

    std::cout << "Original list: " <<std::endl;
    list.printList();

    list.swap(1, 3);
    std::cout << "List after swapping positions 1 and 3: "<<std::endl;
    list.printList();

    list.find_and_delete(30);
    std::cout << "List after deleting node with value 30: "<<std::endl;
    list.printList();

    return 0;
}
