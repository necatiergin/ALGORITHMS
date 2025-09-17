#include <vector>
#include <numeric>
#include <iostream>

// T transform_reduce(Iter first, Iter last, T init, BinaryOp reduce, UnaryOp transform);

int main()
{
    std::vector vec{ 1, 2, 3, 4 };

    int sumsquare = std::transform_reduce(
        vec.begin(), vec.end(),
        0,
        std::plus<>{},                 // reduce
        [](int x) { return x * x; }    // transform
    );

    std::cout << "sum of squares = " << sumsquare << '\n';
}
