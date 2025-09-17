#include <numeric>
#include <iostream>

int main() 
{
    constexpr auto i1 = std::lcm(8, 12);
    constexpr auto i2 = std::lcm(-8, 12);
    constexpr auto i3 = std::lcm(12, -8);
    constexpr auto i4 = std::lcm(-12, -8);
}
