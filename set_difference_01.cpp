// std::copy
// std::set_difference
// std::set_symmetric_difference

#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <iostream>

int main()
{
	std::vector x{ 2, 3, 3, 7, 7, 19, 23, 31, 37, 45, 45, 61 };
	std::vector y{ 2, 5, 7, 7, 9, 23, 32, 45, 57, 61, 63 };

	std::ostream_iterator<int> ositer{ std::cout, " " };
	std::cout << "x\n";
	copy(x.begin(), x.end(), ositer);
	std::cout << "\ny\n";
	copy(y.begin(), y.end(), ositer);
	
	std::cout << "\nx - y\n";
	std::set_difference(x.begin(), x.end(),	y.begin(), y.end(), ositer);
	std::cout << "\ny - x\n";
	std::set_difference(y.begin(), y.end(),	x.begin(), x.end(), ositer);
	std::cout << "\n(x - y) U (y - x)\n";
	std::set_symmetric_difference(x.begin(), x.end(),	y.begin(), y.end(), ositer);
}
