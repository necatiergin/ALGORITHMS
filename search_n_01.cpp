#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    std::vector<int> ivec = { 1, 2, 2, 2, 3, 4, -4, 4, -4, 5, 6 };

    // Using search_n to find the first occurrence of 3 consecutive 2's
    if (const auto iter = std::search_n(ivec.begin(), ivec.end(), 3, 2);
        iter != ivec.end()) {
            std::cout << "Found 3 consecutive 2's starting at position: "
            << std::distance(ivec.begin(), iter) << '\n';
    }
    else {
        std::cout << "No sequence of 3 consecutive 2's found." << '\n';
    }

    // Using search_n with a custom predicate:
    if (const auto iter = std::search_n(ivec.begin(), ivec.end(), 4, 4,
        [](int x, int y) { return std::abs(x) == std::abs(y); });
        iter != ivec.end()) {
        std::cout << "Found 4 consecutive 4's starting at position: "
            << std::distance(ivec.begin(), iter) << '\n';
    }
    else {
        std::cout << "No sequence of 4 consecutive 4's found." << '\n';
    }
}
