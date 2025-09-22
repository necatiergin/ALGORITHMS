#include <numeric>
#include <vector>
#include <string>
#include <iostream>

int main() 
{
    using namespace std::literals;

    std::vector<std::string> names{"nefes", "emine", "caner", "aytek", "tugra", "irfan"};

    auto name = std::transform_reduce(
        names.begin(), names.end(), ""s,
        std::plus<>{},
        [](const std::string& s) { return s.front(); }
    );

    std::cout << "name : " << name << '\n';

    name = std::transform_reduce(
        names.begin(), names.end(), ""s,
        std::plus<>{},
        [](const std::string& s) { return s.back(); }
    );

    std::cout << "name : " << name << '\n';
}
