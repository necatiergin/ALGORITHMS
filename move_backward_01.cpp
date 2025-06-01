#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main() 
{
    std::vector<std::unique_ptr<int>> vec;

    for (int i = 0; i < 5; ++i)
        vec.emplace_back(std::make_unique<int>(i));

    std::move_backward(vec.begin(), vec.begin() + 3, vec.end());

    for (const auto& ptr : vec) {
        if (ptr)
            std::cout << *ptr << " ";
        else
            std::cout << "empty ";
    }
    std::cout << '\n';
}
