// inclusive_scan C++17

#include <numeric>
#include <vector>
#include <iostream>

int main() 
{
    std::vector<int> vec{ 1, 2, 3, 4 };
    std::vector<int> dest(vec.size());

    std::inclusive_scan(vec.begin(), vec.end(), dest.begin()); 
        
    for (int i : dest) 
        std::cout << i << ' ';
}
