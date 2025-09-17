#include <numeric>
#include <iostream>

int main() 
{
    int x = 1'000'000'000, y = 2'000'000'000;
    // (a + b)/2 overflows, midpoint has no overflow guarantee
    std::cout << std::midpoint(x, y) << '\n'; // 1500000000
}
