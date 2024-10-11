#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
	const std::vector<int> source{ 10, 20, 30, 40, 50 };
	std::vector<int> dest(source.size() * 2);

	copy_backward(source.begin(), source.end(), dest.end());
	copy(dest.begin(), dest.end(), std::ostream_iterator<int>{std::cout, " "});
}
