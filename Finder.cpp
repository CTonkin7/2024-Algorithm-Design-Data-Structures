#include "Finder.h"
#include <vector>
#include <string>

using namespace std;

#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;

    for (size_t i = 1; i <= s2.size(); ++i) {
        std::string prefix = s2.substr(0, i);
        size_t index = 0;
        while (index < s1.size()) {
            size_t found = s1.find(prefix, index);
            if (found != string::npos) {
                result.push_back(found);
                index = found + 1;
                break;  // Start searching from the next character
            } else {
                break;  // No need to search further for this prefix
            }
        }
    }

    // If no occurrence is found for any prefix, push -1 into the result vector
    if (result.empty()) {
        result.push_back(-1);
    }

    return result;
}

