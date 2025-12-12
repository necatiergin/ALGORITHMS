#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
void print_vec(const std::vector<T>& vec)
{
	for (const auto& elem : vec)
		std::cout << elem << ' ';

	std::cout << '\n';
}

int main()
{
	std::vector vec{ 1, 2, 3};
	do {
		print_vec(vec);
	} while (std::next_permutation(vec.begin(), vec.end()));
}
