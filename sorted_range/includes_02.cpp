#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // Sorted container that represents the superset
    std::vector<int> vec = { 1, 3, 5, 7, 9, 11 };

    // Sorted container that represents the subset
    std::vector<int> subset = { -3, 5, -9 };

    // Check if all elements in subset are contained in vec with custom predicate.
    bool result = std::includes(vec.begin(), vec.end(),
        subset.begin(), subset.end(), [](int x, int y) {return std::abs(x) == std::abs(y); });

    if (result) {
        std::cout << "vec includes all elements of subset.\n";
    }
    else {
        std::cout << "vec does NOT include all elements of subset.\n";
    }
}
