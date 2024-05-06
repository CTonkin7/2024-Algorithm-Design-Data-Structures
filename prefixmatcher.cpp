#include "PrefixMatcher.h"

TrieNode::TrieNode() {
    children[0] = nullptr;
    children[1] = nullptr;
    routerNumber = -1; // Indicates no router assigned
}

PrefixMatcher::PrefixMatcher(int numBits) {
    root = new TrieNode();
    this->numBits = numBits;
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode* current = root;
    for (char c : address) {
        int bit = c - '0';
        if (!current->children[bit]) {
            current->children[bit] = new TrieNode();
        }
        current = current->children[bit];
    }
    current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* current = root;
    for (int i = 0; i < numBits; ++i) {
        if (!current->children[networkAddress[i] - '0']) {
            break;
        }
        current = current->children[networkAddress[i] - '0'];
    }
    return current->routerNumber;
}
