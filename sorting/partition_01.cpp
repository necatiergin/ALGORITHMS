#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>

int main() 
{
    std::vector vec{ 5, 6, 1, 4, 3, 2, 1, 8, 5, 6, 7 };

    auto partition_point = std::partition(vec.begin(), vec.end(), [](int x) {
        return x % 2 == 0; });

    std::cout << "even numbers:\n";
    std::copy(vec.begin(), partition_point, std::ostream_iterator<int>{std::cout, " "});

    std::cout << "\nodd numbers:\n";
    std::copy(partition_point, vec.end(), std::ostream_iterator<int>{std::cout, " "});
}
