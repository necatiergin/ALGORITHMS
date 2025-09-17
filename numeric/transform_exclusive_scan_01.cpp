#include <numeric>
#include <vector>
#include <iostream>

int main() 
{
    std::vector<int> vec{ 1,2,3,4 };
    std::vector<int> dest(vec.size());
    
    std::transform_exclusive_scan(
        vec.begin(), vec.end(), dest.begin(), 0,
        std::plus<>{},
        [](int x) { return x * x; }  // map: square
    ); 

    for (int x : dest) 
        std::cout << x << ' ';
}
