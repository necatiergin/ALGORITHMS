#include <vector>
#include <numeric>
#include <iostream>
#include <functional>

int main()
{
    std::vector vec{ 1, 2, 3, 4, 5};
    
    std::cout << accumulate(vec.begin(), vec.end(), 1, std::multiplies<>{})
        << '\n';
}
