#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    std::vector v = { 1, 3, 5, 7, 2, 4, 6, 8};

    std::inplace_merge(v.begin(), v.begin() + 4, v.end());

    for (int i : v) 
        std::cout << i << ' ';  
}
