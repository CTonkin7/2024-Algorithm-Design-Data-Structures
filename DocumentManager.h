#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include "Document.h"
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

class DocumentManager {
private:
    std::unordered_map<int, Document> documents_by_id;
    std::unordered_map<int, Document> documents_by_name;
    std::unordered_set<int> patrons;
    std::unordered_map<int, std::unordered_set<int>> borrowed_documents;

public:
    void addDocument(const std::string& name, int id, int liscence_limit);
    void addPatron(int patronID);
    int search(const std::string& name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};



#endif