#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>

class TrieNode {
public:
    TrieNode* children[2];
    int routerNumber;

    TrieNode();
};

class PrefixMatcher {
private:
    TrieNode* root;
    int numBits;

public:
    PrefixMatcher(int numBits);

    void insert(std::string address, int routerNumber);

    int selectRouter(std::string networkAddress);
};

#endif // PREFIXMATCHER_H
