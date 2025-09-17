#include <vector>
#include <numeric>
#include <iostream>

int main()
{
    std::vector<int> x{ 1, 2, 10, 5 };
    std::vector<int> y{ 2, 3,  4, 9 };

    int result = std::transform_reduce(
        x.begin(), x.end(), y.begin(),
        0,
        std::plus<>{},                                  // reduce
        [](int x, int y) { return std::abs(x - y); }    // transform
    );

    std::cout << "result = " << result << '\n';
}
