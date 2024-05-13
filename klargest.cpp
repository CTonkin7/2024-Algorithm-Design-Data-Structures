#include <vector>
#include <queue>
#include <functional>  // For std::greater

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int num : values) {
        if (minHeap.size() < k) {
            minHeap.push(num);
        } else if (num > minHeap.top()) {
            minHeap.pop();
            minHeap.push(num);
        }
    }

    return minHeap.top();
}
