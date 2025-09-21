#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm> 

int main() 
{
    std::vector<int> a{ 10, 40, 30, 13 };
    std::vector<int> b{ 20, 15, 35, 5};

    int result = std::inner_product(
        a.begin(), a.end(), b.begin(), 0,
        std::plus{},
        [](int x, int y) { return std::min(x, y); }
    );

    // min(10,20) + min(40,15) + min(30,35) + min(13, 5) = 10 + 15 + 30 + 5 = 60
    std::cout << "min-sum: " << result << '\n';
}
