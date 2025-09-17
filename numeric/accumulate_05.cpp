#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    using namespace std::literals;

    std::vector<std::string> svec{ "ali", "mert", "nefes", "selim", "nur", "faruk" };
    
    std::cout << accumulate(svec.begin(), svec.end(), ""s, [](const std::string &s, std::string rs) 
        {
            std::reverse(rs.begin(), rs.end());
            return s + rs;
        })
        << '\n';
}
