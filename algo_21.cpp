#include <vector>
// std::generate
// std::sort
// std::copy
// std::merge

#include <algorithm>
#include <random>
#include <iostream>

int main()
{
	std::vector<int> x(10);
	std::vector<int> y(6);
	std::mt19937 eng{ std::random_device{}() };
	std::uniform_int_distribution dist{ 0, 1000 };
	generate(x.begin(), x.end(), [&eng, &dist] {return dist(eng); });
	generate(y.begin(), y.end(), [&eng, &dist] {return dist(eng); });
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	std::cout << "x\n";
	copy(x.begin(), x.end(), std::ostream_iterator<int>{std::cout, " "});
	std::cout << "\ny\n";
	copy(y.begin(), y.end(), std::ostream_iterator<int>{std::cout, " "});

	std::vector<int> mrg(x.size() + y.size());
	merge(x.begin(), x.end(), y.begin(), y.end(), mrg.begin());
	std::cout << "\nmrg\n";
	copy(mrg.begin(), mrg.end(), std::ostream_iterator<int>{std::cout, " "});
}
