#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string first = "programming";
    std::string second = "progressive";

    auto [iter1, iter2] =
        std::mismatch(
            first.begin(), first.end(),
            second.begin(), second.end());

    if (iter1 != first.end() &&
        iter2 != second.end()) {

        std::cout
            << "First difference: "
            << *iter1 << " vs " << *iter2
            << '\n';
    }
}
