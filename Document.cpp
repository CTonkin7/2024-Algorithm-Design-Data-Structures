#include "Document.h"

using namespace std;

Document::Document(std::string name, int id, int license_limit){
    this->name = name;
    this->id = id;
    this->license_limit = license_limit;
    int current_borrowed = 0;

}


