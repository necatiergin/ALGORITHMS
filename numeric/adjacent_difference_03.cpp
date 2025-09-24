#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm> 
#include <print> 

int main() 
{
    std::vector<int> a{2, 4, 1, 7, 3};

    std::print("{}\n", a);
    std::partial_sum(a.begin(), a.end(), a.begin());
    std::print("{}\n", a);
    std::adjacent_difference(a.begin(), a.end(), a.begin());
    std::print("{}\n", a);
}
