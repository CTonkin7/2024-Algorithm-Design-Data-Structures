#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;

    size_t index = 0;
    while (index < s1.size()) {
        size_t found = s1.find(s2, index);
        if (found != string::npos) {
            result.push_back(found);
            index = found + 1;  // Start searching from the next character
        } else {
            break;  // Stop searching if the substring is not found
        }
    }

    // If no substring is found, push -1 into the result vector
    if (result.empty()) {
        result.push_back(-1);
    }

    return result;
}
