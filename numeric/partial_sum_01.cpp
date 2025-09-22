#include <vector>
#include <numeric>
#include <iostream>

int main()
{
	std::vector svec{ 1, 3, 5, 7, 9, 11, 13, 15 };
	std::vector<int> dvec(svec.size());

	partial_sum(svec.begin(), svec.end(), dvec.begin());

	for (auto i : dvec)
		std::cout << i << ' ';
}
