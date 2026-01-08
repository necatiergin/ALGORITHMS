//std::equal_range

#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
	std::vector vec{ 2, 2, 2, 5, 5, 5, 7, 9, 9, 9, 9, 12, 12, 16, 35 };
	copy(begin(vec), end(vec), std::ostream_iterator<int>(std::cout, " "));

	std::cout << "\nenter an integer: ";
  int i;
	std::cin >> i;

	auto [it_lower, it_upper] = equal_range(vec.begin(), vec.end(), i);
	std::cout << "distance for equal range : " << distance(it_lower, it_upper) << '\n';
	std::cout << "index for lowerbound : " << distance(vec.begin(), it_lower) << '\n';
	std::cout << "index for upperbound : " << distance(vec.begin(), it_upper) << '\n';
}
