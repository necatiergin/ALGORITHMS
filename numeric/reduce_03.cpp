#include <numeric>
#include <vector>
#include <string>
#include <iostream>


int main() 
{
    using namespace std::literals;

    std::vector<std::string> names{"nefes", "emine", "caner", "aytek", "tugra", "irfan"};

    auto s = std::reduce(names.begin(), names.end());

    std::cout << s << '\n';
}
