// from cppreference.com

#include <algorithm>
#include <iostream>
#include <vector>
 
void println(std::string_view fmt, const auto& v)
{
    for (std::cout << fmt; const auto& e : v)
        std::cout << e << ' ';
    std::cout << '\n';
};
 
 
int f()
{
    static int i;
    return ++i;
}
 
int main()
{
    std::vector<int> v(5);
 
    std::generate(v.begin(), v.end(), f);
    println("v: ", v);
 
    // Initialize with default values 0,1,2,3,4 from a lambda function
    // Equivalent to std::iota(v.begin(), v.end(), 0);
    std::generate(v.begin(), v.end(), [n = 0] () mutable { return n++; });
    println("v: ", v);
}
