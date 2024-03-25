#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include "Finder.h"

using namespace std;

int main() {
    string s1 = "734658732465";
    string s2 = "463";
    Finder finder;
    vector<int> result = finder.findSubstrings(s1, s2);

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}