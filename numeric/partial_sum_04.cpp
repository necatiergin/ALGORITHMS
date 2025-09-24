#include <numeric>
#include <vector>
#include <iostream>

int main() 
{
    std::vector<int> source{ 1, 2, 3, 4 };
    std::vector<int> dest1(source.size());
    std::vector<int> dest2(source.size());

    std::partial_sum(source.begin(), source.end(), dest1.begin());            // C++98
    std::inclusive_scan(source.begin(), source.end(), dest2.begin());         // C++17

    for (int x : dest1) std::cout << x << " "; std::cout << '\n';
    for (int x : dest2) std::cout << x << " "; std::cout << '\n';
    }
