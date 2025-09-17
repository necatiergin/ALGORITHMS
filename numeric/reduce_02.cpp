#include <vector>
#include <numeric>
#include <iostream>

int main()
{
	std::vector ivec{ 1, 3, 5, 7, 9 };

	auto x = reduce(ivec.begin(), ivec.end(), 0);
	auto y = reduce(ivec.begin(), ivec.end());
	auto z = reduce(ivec.begin(), ivec.end(), int{});

	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';
	std::cout << "z = " << z << '\n';

}
