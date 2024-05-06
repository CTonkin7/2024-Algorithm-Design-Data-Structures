#include <iostream>
#include "autocomplete.h"

int main() {
    Autocomplete autocomplete;
    autocomplete.insert("bin");
    autocomplete.insert("ball");
    autocomplete.insert("ballet");

    std::vector<std::string> suggestions;

    suggestions = autocomplete.getSuggestions("b");
    std::cout << "Suggestions for 'b': ";
    for (std::string word : suggestions) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    suggestions = autocomplete.getSuggestions("ba");
    std::cout << "Suggestions for 'ba': ";
    for (std::string word : suggestions) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    suggestions = autocomplete.getSuggestions("bal");
    std::cout << "Suggestions for 'bal': ";
    for (std::string word : suggestions) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    suggestions = autocomplete.getSuggestions("balle");
    std::cout << "Suggestions for 'balle': ";
    for (std::string word : suggestions) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
