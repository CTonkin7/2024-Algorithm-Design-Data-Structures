#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>
#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() : isEndOfWord(false) {}
};

class Trie {
public:
    TrieNode* root;

    Trie();

    void insert(std::string word);

    std::vector<std::string> getSuggestions(std::string partialWord);

private:
    void getAllWordsFromNode(TrieNode* node, std::string prefix, std::vector<std::string>& suggestions);
};

class Autocomplete {
public:
    Trie trie;

    void insert(std::string word);

    std::vector<std::string> getSuggestions(std::string partialWord);
};

#endif // AUTOCOMPLETE_H
