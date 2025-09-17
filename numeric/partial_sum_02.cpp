#include <numeric>
#include <vector>
#include <iostream>
#include <functional>

int main() 
{
    std::vector source{ 1, 3, 5, 7};
    std::vector<int> dest(source.size());
    std::partial_sum(source.begin(), source.end(), dest.begin(), std::plus{});
    
    //std::partial_sum(source.begin(), source.end(), dest.begin(), std::multiplies{});
    
    //std::partial_sum(source.begin(), source.end(), dest.begin(), [](int x, int y) {
        //return std::abs(x - y); });

    for (int i : dest) 
        std::cout << i << ' ';
}
