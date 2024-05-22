#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <unordered_map>
#include <unordered_set>
#include <string>


class Document { // Document.h
    public:
        std::string name;
        int id;
        int license_limit;
        int borrowed_count;

        Document() : id(0), license_limit(0), borrowed_count(0) {}
        Document(std::string n, int i, int limit) 
            : name(n), id(i), license_limit(limit), borrowed_count(0) {}
};
class DocumentManager {
private:
    std::unordered_map<int, Document> documents_by_id;
    std::unordered_map<std::string, int> documents_by_name;
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