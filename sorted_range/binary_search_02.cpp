#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> ivec{ 987, 981, 877, 820, 792, 618, 555, 435, 412, 323, 309, 298, 277, 219, 198, 187, 65, 12 };
    int key = 198;

    std::cout << std::boolalpha << std::binary_search(ivec.begin(), ivec.end(), key, std::greater{}) << '\n';
    key = 878;
    std::cout << std::binary_search(ivec.begin(), ivec.end(), key, std::greater{}) << '\n';
}
