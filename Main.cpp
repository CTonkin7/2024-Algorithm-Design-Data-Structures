#include <iostream>
#include "prefixmatcher.h"

int main() {
    PrefixMatcher matcher(32); // Assuming IPv4, so 32 bits
    matcher.insert("1100110111", 1);
    matcher.insert("110011011", 2);
    matcher.insert("11001101", 3);

    std::string networkAddress = "110011011001"; // Example incoming packet destination address

    int routerNumber = matcher.selectRouter(networkAddress);
    std::cout << "Selected router: " << routerNumber << std::endl;

    return 0;
}
