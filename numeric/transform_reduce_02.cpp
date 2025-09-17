#include <vector>
#include <numeric>
#include <iostream>

// T transform_reduce(It1 f1, It1 l1, It2 f2, T init, BinaryOp1 reduce, BinaryOp2 transform);

int main()
{
    std::vector x{ 1, 2, 10, 5 };
    std::vector y{ 2, 3,  4, 9 };
    // (x[i] * y[i]) degerleri icin max
    
    int max_prod = 
    std::transform_reduce(x.begin(), x.end(), 
                        y.begin(),
                        std::numeric_limits<int>::min(),
                        [](int L, int R) { return std::max(L, R); },  // reduce
                        std::multiplies<>{}// transform
    );
    std::cout << "max product = " << max_prod << '\n';
}
