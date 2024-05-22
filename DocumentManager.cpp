#include "DocumentManager.h"
#include <iostream>

using namespace std;

void DocumentManager::addDocument(const std::string& name, int id, int license_limit){
    Document doc(name, id, license_limit);
    documents_by_id[id] = doc;
    documents_by_name[name] = id;
}

void DocumentManager::addPatron(int patronID){
    patrons.insert(patronID);
}

int DocumentManager::search(const std::string& name){
    auto it = documents_by_name.find(name);
    if (it != documents_by_name.end()){
        return it->second;
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID){
    auto doc_it = documents_by_id.find(docid);
    if (doc_it == documents_by_id.end() || patrons.find(patronID) == patrons.end()){
        return false;
    }

    Document& doc = doc_it->second;
    if (doc.borrowed_count < doc.license_limit){
        doc.borrowed_count++;
        borrowed_documents[patronID].insert(docid);
        return true;
    }
    return false;
}



void DocumentManager::returnDocument(int docid, int patronID){
    auto doc_it = documents_by_id.find(docid);
    if (doc_it == documents_by_id.end() || patrons.find(patronID) == patrons.end()){
        return;
    }
    if (borrowed_documents[patronID].find(docid) != borrowed_documents[patronID].end()){
        doc_it->second.borrowed_count--;
        borrowed_documents[patronID].erase(docid);
    }

}