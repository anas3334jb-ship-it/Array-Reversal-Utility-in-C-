#include <iostream>
#include <vector>
#include <utility> // For std::swap

// Optimized custom function using a clean while-loop and vector reference
void reverse_arr(std::vector<int>& arr) {
    if (arr.empty()) return;

    int start = 0;
    int end = static_cast<int>(arr.size()) - 1;

    while (start < end) {
        std::swap(arr[start], arr[end]);
        ++start;
        --end;
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};

    reverse_arr(arr);

    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}