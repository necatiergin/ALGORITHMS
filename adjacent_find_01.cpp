#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    std::vector<int> ivec = { 1, 4, 2, 3, 3, 5, 5, 6, 6, 6, 8, 10 };

    // Using adjacent_find to find the first pair of equal adjacent elements
    if (const auto iter = std::adjacent_find(ivec.begin(), ivec.end()); iter != ivec.end()) {
        std::cout << "First pair of equal adjacent elements: "
            << *iter << " and " << *(iter + 1) << '\n';
    }
    else {
        std::cout << "No equal adjacent elements found." << '\n';
    }

    // Find the first pair of adjacent elements with a difference of 1
    if (const auto iter = std::adjacent_find(ivec.begin(), ivec.end(),
        [](int a, int b) { return (b - a) == 1; }); iter != ivec.end()) {
        std::cout << "First pair of adjacent elements with a difference of 1: "
            << *iter << " and " << *(iter + 1) << '\n';
    }
    else {
        std::cout << "No adjacent elements with a difference of 1 found." << '\n';
    }
}
