#include <vector>
#include <numeric>
#include <iostream>

int main()
{
    std::vector<int> original{ 1, 2, 3, 4, 5, 6 };   // input
    std::vector<int> cumulated(original.size());
    std::vector<int> recovered(original.size());

    std::partial_sum(original.begin(), original.end(), cumulated.begin());
    
    for (int x : cumulated)
        std::cout << x << ' ';

    std::cout << '\n';

    std::adjacent_difference(cumulated.begin(), cumulated.end(), recovered.begin());
    // recovered: 1, 2, 3, 4, 5, 6 (same as original)

    for (int x : recovered) 
        std::cout << x << ' ';
}
