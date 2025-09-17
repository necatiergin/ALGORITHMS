#include <functional>
#include <iostream>
#include <numeric>
#include <string>

int main()
{
    std::vector<std::string> v1{ "ali", "can", "ece", "ata", "gul", "tan", "eda", "naz" };
    std::vector<std::string> v2{ "nur", "tan", "ece", "ece", "gul", "tan", "naz", "eda" };

    int result = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0, std::plus{}, std::equal_to{});
    std::cout << "result = " << result << '\n';
}
