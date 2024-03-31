#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int>& nums, int target) {
    return binarySearch(nums, target, 0, nums.size() - 1);
}

bool RecursiveBinarySearch::binarySearch(std::vector<int>& nums, int target, int start, int end) {
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (nums[mid] == target)
        return true;
    else if (target < nums[mid])
        return binarySearch(nums, target, start, mid - 1);
    else
        return binarySearch(nums, target, mid + 1, end);
}
