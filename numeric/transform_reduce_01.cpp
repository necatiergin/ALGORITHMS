#include <vector>
#include <numeric>
#include <iostream>

//T transform_reduce(Iter1 first1, Iter1 last1, Iter2 first2, T init);

int main()
{
	std::vector a{ 1, 2, 3 };
	std::vector	b{ 4, 5, 6 };

	int dot = std::transform_reduce(a.begin(), a.end(), b.begin(), 0);
	std::cout << "dot = " << dot << '\n';
}
