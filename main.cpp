#include "DocumentManager.h"
#include "Document.h"
#include <iostream>

int main(){
    DocumentManager dm;
    dm.addDocument("The Great Gatsby", 1, 5);
    dm.addDocument("Harry Potter", 2, 3);
    dm.addPatron(101);
    dm.addPatron(102);

    std::cout << "Search for The Great Gatsby: " << dm.search("The Great Gatsby") << std::endl;
    std::cout << "Search for Harry Potter: " << dm.search("Harry Potter") << std::endl;

    std::cout << "Borrow The Great Gatsby by Patron 101:" << dm.borrowDocument(1, 101) << std::endl;
    std::cout << "Borrow THarry Potter by Patron 102:" << dm.borrowDocument(2, 102) << std::endl;

    std::cout << "Return The Great Gatsy by Patron 101:" << std::endl; dm.returnDocument(1, 101);
}