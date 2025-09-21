#include <numeric>
#include <vector>
#include <cmath>
#include <iostream>

int main() 
{
    std::vector<int> real{ 90, 100, 80 };
    std::vector<int> pred{ 85, 110, 75 };

    double total_abs_diff = std::inner_product(
        real.begin(), real.end(), pred.begin(), 0.0,
        std::plus<>{},
        [](int r, int p) { return std::abs(r - p); }
    );

    std::cout << "Total absolute error: " << total_abs_diff << '\n'; // 5 + 10 + 5 = 20
}
