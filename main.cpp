#include <iostream>
#include "Set.h"

int main()
{
    Set<int> s;
    s.Add(1);
    std::cout << s.Contains(1) << "\n"; 
    return 0;
}