// for_each_n C++17

#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
	using ivec = std::vector<int>;

	ivec vec{ 1, 3, 5, 9, 7, 0, 2, 4, 6, 8 };

	const auto fprint = [](const ivec& vec) {
		for (const int i : vec) std::cout << i;
		std::cout << '\n';
		};
	fprint(vec);
	std::for_each_n(vec.begin(), 5, [](int& i) {--i; });
	fprint(vec);
	std::for_each_n(vec.rbegin(), 5, [](int& i) {++i; });
	fprint(vec);
}

