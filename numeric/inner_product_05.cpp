#include <numeric>
#include <vector>
#include <iostream>

int main() 
{
    std::vector<bool> a{ true, true, false, true };
    std::vector<bool> b{ true, false, false, true };

    int result = std::inner_product(
        a.begin(), a.end(), b.begin(), 0,
        std::plus<>{},
        [](bool x, bool y) { return x and y; }
    );

    std::cout << "Logical AND count: " << result << '\n'; 
}
