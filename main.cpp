#include "DocumentManager.h"
#include "Document.h"
#include <iostream>

int main() {
    DocumentManager dm;
    dm.addDocument("Doc1", 1, 5);
    dm.addDocument("Doc2", 2, 3);
    dm.addPatron(101);
    dm.addPatron(102);
    
    std::cout << "Search Doc1: " << dm.search("Doc1") << std::endl; // Should print 1
    std::cout << "Search Doc2: " << dm.search("Doc2") << std::endl; // Should print 2
    std::cout << "Search Doc3 (non-existent): " << dm.search("Doc3") << std::endl; // Should print 0

    std::cout << "Borrow Doc1 by Patron 101: " << dm.borrowDocument(1, 101) << std::endl; // Should print 1 (true)
    std::cout << "Borrow Doc1 by Patron 102: " << dm.borrowDocument(1, 102) << std::endl; // Should print 1 (true)
    std::cout << "Return Doc1 by Patron 101" << std::endl; dm.returnDocument(1, 101); // No output
    std::cout << "Borrow Doc1 by Patron 102: " << dm.borrowDocument(1, 102) << std::endl; // Should print 1 (true)
    
    return 0;
}
