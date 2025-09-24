#include <numeric>
#include <vector>
#include <string>
#include <iostream>

int main() 
{
    std::vector<std::string> source{ "C", "+", "+", "20", " standard"};
    std::vector<std::string> dest(source.size());

    std::partial_sum(source.begin(), source.end(), dest.begin());

    for (const auto& s : dest)
        std::cout << "[" << s << "] ";  
}
