// exclusive_scan C++17

#include <numeric>
#include <vector>
#include <iostream>

int main() 
{
    std::vector<int> vec{ 1, 2, 3, 4 };
    std::vector<int> dest(vec.size());

    std::exclusive_scan(vec.begin(), vec.end(), dest.begin(), 0); // out: 0,1,3,6
        
    for (int i : dest) 
        std::cout << i << ' ';
}
