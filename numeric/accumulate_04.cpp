#include <vector>
#include <numeric>
#include <iostream>
#include <functional>

int main()
{
    std::vector vec{ 1, 2, 3, 4, 5};
    
    std::cout << accumulate(vec.begin(), vec.end(), 0, [](int x, int y) {return x + y * 2; })
        << '\n';
}
