// std::generate
// std::sort
// std::copy
// std::includes

#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	std::vector<int> ivec(100);
	generate(ivec.begin(), ivec.end(), [] {return rand() % 1000; });

	sort(ivec.begin(), ivec.end());
	copy(ivec.begin(), ivec.end(), std::ostream_iterator<int>(std::cout, " "));
	int x, y, z;
	std::cout << "\n\nenter 3 numbers in ascending order: ";
	std::cin >> x >> y >> z;
	auto list = { x, y, z };
	if (includes(ivec.begin(), ivec.end(), list.begin(), list.end()))
		std::cout << "found\n";
	else
		std::cout << "not found\n";
}
