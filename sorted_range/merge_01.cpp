#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector<int> x{3, 7, 9, 13, 21, 56, 78, 84, 91, 123, 198 };
    std::vector<int> y{ 4, 16, 54, 77, 94, 127, 234 };
    std::vector<int> dest;
    dest.reserve(x.size() + y.size());
    std::merge(x.begin(), x.end(), y.begin(), y.end(), back_inserter(dest));

    for (int i : dest)
        std::cout << i << ' ';
}
