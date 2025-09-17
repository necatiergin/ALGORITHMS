#include <numeric>
#include <iostream>
#include <vector>

int main()
{
	std::vector vec1{ 2, 5, 7, 6, 4 };
	std::vector vec2{ 2, 1, 2, 7, 8 };
	// 0 + 4 + 5 + 14 + 42 + 32

	auto result = inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);

	std::cout << "result = " << result << '\n';
}
