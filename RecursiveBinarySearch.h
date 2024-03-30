#ifndef RECURSIVEBINARSEARCH_H
#define RECURSIVEBINARSEARCH_H

#include <vector>
#include "Sort.h"

class RecursiveBinarySearch : public Sort
{
    public:
    std::vector<int> sort(std::vector<int> list) override;
};

#endif