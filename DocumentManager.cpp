#include "DocumentManager.h"
#include <iostream>

using namespace std;

void DocumentManager::addDocument(string name, int id, int license_limit){
    if (documents.find(id) != documents.end()){
        std::cout << "Document with id " << id << " already exists" << endl;
        return;
    }
    documents[id] = Document(name, id, license_limit);

}

void DocumentManager::addPatron(int patronID){
    patrons.insert(patronID);
}

int DocumentManager::search(string name){
    if (name_to_id.find(name) != name_to_id.end()){
        return name_to_id[name];
    }
    else {
        // Return some default value or handle the error appropriately
        return 0; // for example
    }
}

bool DocumentManager::borrowDocument(int docid, int patronID){
    if(patrons.find(patronID) == patrons.end()){
        std::cout << "Patron with id " << patronID << " does not exist" << endl;
        return false;
    }
    auto it = documents.find(docid);
    if (it!= documents.end() && it->second.current_borrowed < it->second.license_limit){
        it->second.current_borrowed++;
        it->second.borrowed_by.insert(patronID);
        return true;
    }
        std::cout << "Document with id " << docid << " is already borrowed" << endl;
        return false;
}



void DocumentManager::returnDocument(int docid, int patronID){
    auto it = documents.find(docid);
    if (it != documents.end() && it->second.borrowed_by.find(patronID) != it->second.borrowed_by.end()){
        it->second.current_borrowed--;
        it->second.current_borrowed;
    } else {
        cout << "Document with id " << docid << " is not borrowed by patron with id " << patronID << endl;
    }

}