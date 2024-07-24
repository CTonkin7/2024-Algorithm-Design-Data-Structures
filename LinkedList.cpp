
#include "LinkedList.h"
#include <iostream>


LinkedList::LinkedList(){
    head = nullptr;
}


LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}


void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}


void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

bool LinkedList::swap(int pos1, int pos2) {
    if (pos1 == pos2) return true;
    Node* node1 = head;
    Node* node2 = head;
    Node* prev1 = nullptr;
    Node* prev2 = nullptr;
    for (int i = 0; node1 && i < pos1; i++) {
        prev1 = node1;
        node1 = node1->link;
    }
    for (int i = 0; node2 && i < pos2; i++) {
        prev2 = node2;
        node2 = node2->link;
    }
    if (!node1 || !node2) return false;
    if (prev1) {
        prev1->link = node2;
    } else {
        head = node2;
    }
    if (prev2) {
        prev2->link = node1;
    } else {
        head = node1;
    }
    Node* temp = node2->link;
    node2->link = node1->link;
    node1->link = temp;
    return true;
}

bool LinkedList::find_and_delete(int target) {
    Node* temp = head;
    Node* prev = nullptr;
    while (temp != nullptr && temp->data != target) {
        prev = temp;
        temp = temp->link;
    }
    if (temp == nullptr) return false;
    if (prev != nullptr) {
        prev->link = temp->link;
    } else {
        head = temp->link;
    }
    delete temp;
    return true;
}
