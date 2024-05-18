#ifndef DOCUMENT_H
#define DOCUMENT_H  

#include <string>
#include <unordered_set>

using namespace std;

class Document {
    public:
        string name;
        int id;
        int license_limit;
        int current_borrowed;
        unordered_set<int> borrowed_by;

        Document(std::string name, int id, int license_limit);
};

#endif