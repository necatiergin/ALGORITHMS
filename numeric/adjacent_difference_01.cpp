#include <numeric>
#include <vector>
#include <iostream>

int main() 
{
    std::vector<int> vec{ 1,3,6,10 };
    std::vector<int> dest(vec.size());
    
    std::adjacent_difference(vec.begin(), vec.end(), dest.begin()); // dest: 1, 2, 3, 4
    
    for (int x : dest) 
        std::cout << x << ' ';
}
