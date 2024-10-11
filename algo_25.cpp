//std::set_union

#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <iostream>

int main()
{
	std::vector x{ 2, 3, 3, 7, 7, 19, 23, 31, 37, 45, 45, 61 };
	std::vector y{ 2, 5, 7, 7, 9, 23, 32, 45, 57, 61, 63 };

	std::set_union(x.begin(), x.end(),
		y.begin(), y.end(), std::ostream_iterator<int>{std::cout, " "});
}
