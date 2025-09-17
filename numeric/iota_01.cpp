#include <vector>
#include <iostream>

template<typename ForIt, typename T>
constexpr void Iota(ForIt beg, ForIt end, T val)
{
    for (; beg != end; ++beg, ++val)
        *beg = val;
}

int main()
{
    std::vector<int> ivec(20);
    Iota(ivec.begin(), ivec.end(), 10);

    for (const auto i : ivec)
        std::cout << i << ' ';
}
