#include "autocomplete.h"
#include <iostream>

Trie::Trie() {
    root = new TrieNode();
}

void Trie::insert(std::string word) {
    TrieNode* current = root;
    for (char c : word) {
        if (current->children.find(c) == current->children.end()) {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->isEndOfWord = true;
}

std::vector<std::string> Trie::getSuggestions(std::string partialWord) {
    TrieNode* current = root;
    std::vector<std::string> suggestions;
    for (char c : partialWord) {
        if (current->children.find(c) == current->children.end()) {
            return suggestions;
        }
        current = current->children[c];
    }
    getAllWordsFromNode(current, partialWord, suggestions);
    return suggestions;
}

void Trie::getAllWordsFromNode(TrieNode* node, std::string prefix, std::vector<std::string>& suggestions) {
    if (node->isEndOfWord) {
        suggestions.push_back(prefix);
    }
    for (auto it = node->children.begin(); it != node->children.end(); ++it) {
        getAllWordsFromNode(it->second, prefix + it->first, suggestions);
    }
}

void Autocomplete::insert(std::string word) {
    trie.insert(word);
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    return trie.getSuggestions(partialWord);
}
