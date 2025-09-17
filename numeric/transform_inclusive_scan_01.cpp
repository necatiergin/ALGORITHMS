#include <numeric>
#include <vector>
#include <iostream>

int main() 
{
    std::vector<int> vec{ 1, 2, 3, 4 }, dest(vec.size());
    std::transform_inclusive_scan(
        vec.begin(), vec.end(), dest.begin(),
        std::plus<>{},
        [](int i) { return 2 * i; } // map: double
    ); // dest: 2,6,12,20
    
    for (int i : dest) 
        std::cout << i << " ";
}
