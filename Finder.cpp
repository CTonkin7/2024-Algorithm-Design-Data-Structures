
#include "Finder.h"
#include <vector>
#include <string>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;

     // Track the maximum index found
    size_t index = 0;
    for (size_t i = 1; i <= s2.size(); ++i) {
        std::string prefix = s2.substr(0, i);
        size_t found = s1.find(prefix, index); // Start search from the max index found
        
        if (found != string::npos) {
            result.push_back(found);
            //index = found + 1;
            continue;
        } else {
            result.push_back(-1);
            continue;  // No need to search further for this prefix
        }
    }

    // If no occurrence is found for any prefix, push -1 into the result vector
    if (result.empty()) {
        result.push_back(-1);
    }

    return result;
}
