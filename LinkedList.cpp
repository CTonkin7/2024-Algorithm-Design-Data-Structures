#include <iostream>
#include "LinkedList.h"
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = len - 1; i >= 0; i--) {
        insertPosition(1, array[i]);
    }
}

LinkedList::~LinkedList() {
    while (head) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);
    if (pos <= 0) {
        pos = 1;
    }
    if (!head || pos == 1) {
        newNode->setLink(head);
        head = newNode;
    } else {
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp->getLink(); i++) {
            temp = temp->getLink();
        }
        newNode->setLink(temp->getLink());
        temp->setLink(newNode);
    }
}

bool LinkedList::deletePosition(int pos) {
    if (!head || pos <= 0) {
        return false;
    }
    Node* temp = head;
    if (pos == 1) {
        head = head->getLink();
        delete temp;
    } else {
        Node* prev = nullptr;
        for (int i = 1; i < pos && temp; i++) {
            prev = temp;
            temp = temp->getLink();
        }
        if (!temp) {
            return false;
        }
        prev->setLink(temp->getLink());
        delete temp;
    }
    return true;
}

int LinkedList::get(int pos) {
    if (!head || pos <= 0) {
        return std::numeric_limits<int>::max();
    }
    Node* temp = head;
    for (int i = 1; i < pos && temp; i++) {
        temp = temp->getLink();
    }
    if (!temp) {
        return std::numeric_limits<int>::max();
    }
    return temp->getData();
}

int LinkedList::search(int target) {
    Node* temp = head;
    int pos = 1;
    while (temp) {
        if (temp->getData() == target) {
            return pos;
        }
        temp = temp->getLink();
        pos++;
    }
    return -1;
}

void LinkedList::printList() {
    Node* temp = head;
    std::cout << "[";
    while (temp) {
        std::cout << temp->getData();
        if (temp->getLink()) {
            std::cout << " ";
        }
        temp = temp->getLink();
    }
    std::cout << "]" << std::endl;
}
