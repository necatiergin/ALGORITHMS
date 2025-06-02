#include <vector>
#include <type_traits>


int main()
{
    std::vector a = { 1, 2, 3 };
    std::vector b = { 1, 2, 4 };

    bool result = std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
    auto ordering = std::lexicographical_compare_three_way(a.begin(), a.end(), b.begin(), b.end());

    static_assert(std::is_same_v<decltype(result), bool>);
    static_assert(std::is_same_v<decltype(ordering), std::strong_ordering>);
}
    
