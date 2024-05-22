#ifndef DOCUMENT_H
#define DOCUMENT_H  

#include <string>
#include <unordered_set>

using namespace std;

class Document {
    public:
        std::string name;
        int id;
        int license_limit;
        int borrowed_count;

        Document() = default;
        Document(std::string name, int id, int license_limit);
};

#endif