
#include "Finder.h"
#include <vector>
#include <string>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;

    size_t index = 0;
    for (size_t i = 1; i <= s2.size(); ++i) {
        std::string prefix = s2.substr(0, i);
        size_t found = s1.find(prefix, index); 
        
        if (found != string::npos) {
            result.push_back(found);
            index = i;
            continue;
        } else {
            result.push_back(-1);
            break;  
        }
    }

    if (result.empty()) {
        result.push_back(-1);
    }

    return result;
}
