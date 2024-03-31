#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quicksort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quicksort(std::vector<int>& list, int low, int high) {
    if (low < high) {
        int pivot_index = choosePivot(list, low, high);
        std::swap(list[pivot_index], list[high]); // Move pivot to end
        int partition_index = partition(list, low, high);
        quicksort(list, low, partition_index - 1);
        quicksort(list, partition_index + 1, high);
    }
}

int QuickSort::choosePivot(std::vector<int>& list, int low, int high) {
    // Choose the third value as pivot
    return low + 2;
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot_value = list[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; ++j) {
        if (list[j] < pivot_value) {
            ++i;
            std::swap(list[i], list[j]);
        }
    }
    std::swap(list[i + 1], list[high]);
    return i + 1;
}
