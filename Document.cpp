#include "Document.h"


Document::Document(string name, int id, int license_limit){
    this->name = name;
    this->id = id;
    this->license_limit = license_limit;
    this->current_borrowed = 0;
}


using namespace std;

