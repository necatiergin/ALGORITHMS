#include <vector>
#include <numeric>
#include <iostream>

int main()
{
	std::vector a{ 1, 2, 3 };
	std::vector	b{ 4, 5, 6 };

	int dot = std::transform_reduce(a.begin(), a.end(), b.begin(), 0);
	std::cout << "dot = " << dot << '\n';
}
