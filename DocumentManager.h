#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include "Document.h"
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

class DocumentManager {
private:
    std::unordered_map<int, Document> documents;
    std::unordered_set<int> patrons;
    std::unordered_map<std::string, int> name_to_id;

public:
    void addDocument(string name, int id, int liscence_limit);
    void addPatron(int patronID);
    int search(string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};



#endif