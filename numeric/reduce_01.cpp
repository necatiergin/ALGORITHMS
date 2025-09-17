#include <numeric>
#include <vector>
#include <iostream>

int main() 
{
    std::vector<double> v{ 1.0, 2.0, 3.0, 4.0 };
    double result = std::reduce(v.begin(), v.end(), 0.0); // 10.0
    std::cout << result << '\n';
}
