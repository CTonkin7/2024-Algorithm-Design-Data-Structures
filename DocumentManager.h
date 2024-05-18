#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include "Document.h"
#include <unordered_map>
#include <unordered_set>
#include <string>


class DocumentManager {
private:
    unordered_map<int, Document> documents;
    unordered_map<int> patrons;
    unordered_map<std::string, int> name_to_id;

public:
    void addDocument(string name, int id, int liscence_limit);
    void addPatron(int patronID);
    int search(string name);
    bool borrowDocument(int docid, int patronID);
    int returnDocument(int docid, int patronID);
};



#endif