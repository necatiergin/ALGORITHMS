/*
template<class InputIt, class ForwardIt>
InputIt find_first_of(InputIt first, InputIt last,
                      ForwardIt s_first, ForwardIt s_last);


template<class InputIt, class ForwardIt, class BinaryPredicate>
InputIt find_first_of(InputIt first, InputIt last,
                      ForwardIt s_first, ForwardIt s_last,
                      BinaryPredicate p);

*/ 

#include <algorithm>
#include <vector>
#include <iostream>

int main() 
{
    std::vector data = { 10, 20, 30, 40, 50 };
    std::vector searched = { 25, 30, 45 };

    if (auto it = std::find_first_of(data.begin(), data.end(),
        searched.begin(), searched.end()); it != data.end()) {
        std::cout << "found : " << *it << '\n';
    }
    else {
        std::cout << "not found\n";
    }
}
