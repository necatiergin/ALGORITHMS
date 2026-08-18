#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> ivec{ 2, 5, 7, 9, 4, 13, 25, 67, 98, 113, 234, 567, 577, 590, 612, 617, 623 };
    int key = 577;

    std::cout << std::boolalpha << std::binary_search(ivec.begin(), ivec.end(), key) << '\n';
    key = 19;
    std::cout << std::binary_search(ivec.begin(), ivec.end(), key) << '\n';
}
