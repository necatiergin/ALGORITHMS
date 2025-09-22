#include <numeric>
#include <vector>
#include <string>
#include <iostream>

int main() 
{
    std::vector<std::string> words{ "C++", "STL", "transform_reduce" };

    int len_sum = std::transform_reduce(
        words.begin(), words.end(), 0,
        std::plus<>{},
        [](const std::string& s) { return s.length(); }
    );

    std::cout << "total length: " << len_sum << '\n'; // 3 + 3+ 16 = 22
}
