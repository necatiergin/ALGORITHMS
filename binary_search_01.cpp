// std::iota
// std::for_each
// std::binary_search

#include <vector>
#include <numeric>
#include <cstdlib>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector<int> ivec(100);
	std::iota(ivec.begin(), ivec.end(), 0);

	while (ivec.size() != 40) {
		ivec.erase(ivec.begin() + rand() % ivec.size());
	}

	std::for_each(ivec.begin(), ivec.end(), [](int i) {std::cout << i << ' '; });
		
	std::cout << "\nenter the searched value: ";
	int key;
	std::cin >> key;

	std::cout <<
		(std::binary_search(ivec.begin(), ivec.end(), key) ? "found" : "not found");
}
