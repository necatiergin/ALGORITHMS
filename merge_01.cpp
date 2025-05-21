#include <iostream>
#include <algorithm>
#include <vector>

int main() 
{
    std::vector x{ 1, 3, 5, 7 };
    std::vector y{ 2, 4, 6, 8 };
    std::vector<int> result(x.size() + y.size());

    std::merge(x.begin(), x.end(), y.begin(), y.end(), result.begin());

    for (int i : result)
        std::cout << i << ' '; 
}
