#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quicksort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quicksort(std::vector<int>& list, int low, int high) {
    if (low < high) {
        int pivot_index = partition(list, low, high);
        quicksort(list, low, pivot_index - 1);
        quicksort(list, pivot_index + 1, high);
    }
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot = list[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (list[j] <= pivot) {
            ++i;
            std::swap(list[i], list[j]);
        }
    }
    std::swap(list[i + 1], list[high]);
    return i + 1;
}
