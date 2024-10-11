// std::copy
// std::lower_bound
// std::upper_bound

#include <vector>
#include <iterator>
#include <iostream>

int main()
{
	std::vector<int> ivec{ 2, 5, 5, 7, 9, 9, 9, 9, 12, 12, 16, 35 };
	copy(begin(ivec), end(ivec), std::ostream_iterator<int>(std::cout, " "));

	std::cout << "\nenter an integer: ";
	int ival;
	std::cin >> ival;

	auto iter_lower = lower_bound(ivec.begin(), ivec.end(), ival);
	auto iter_upper = upper_bound(ivec.begin(), ivec.end(), ival);

	std::cout << "distance for lower bound : " << distance(ivec.begin(), iter_lower) << '\n';
	std::cout << "distance for upper bound : " << distance(ivec.begin(), iter_upper) << '\n';
	std::cout << "distance for equal range " << distance(iter_lower, iter_upper) << '\n';

	copy(iter_lower, iter_upper, std::ostream_iterator<int>(std::cout, " "));
}
