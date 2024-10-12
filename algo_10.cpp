#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector<int> v{ 2, 6, 4, 0, 8, 10, 6 };

	boolalpha(std::cout);

	const auto is_even = [](int x) {return x % 2 == 0; };

	std::cout << "any of :" << std::any_of(begin(v), end(v), is_even) << '\n';
	std::cout << "all of :" << std::all_of(begin(v), end(v), is_even) << '\n';
	std::cout << "none of :" << std::none_of(begin(v), end(v), is_even) << '\n';

	v = {};
	std::cout << "for empty vector\n";

	std::cout << "any of :" << std::any_of(begin(v), end(v), is_even) << '\n';
	std::cout << "all of :" << std::all_of(begin(v), end(v), is_even) << '\n';
	std::cout << "none of :" << std::none_of(begin(v), end(v), is_even) << '\n';
}
