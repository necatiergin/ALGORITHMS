//std::is_sorted

#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
	std::vector v1{ 1, 3, 5, 8, 11, 14, 19};
	std::vector v2{ 12, 9, 8, 7, 3, 1, -1};
	std::vector v3{ 2, -3, 6, -9, -11, 13, -17};

	boolalpha(std::cout);

	std::cout << "is v1 sorted: " 
		<< is_sorted(v1.begin(), v1.end()) << '\n';
	
	std::cout << "is v2 sorted: " 
		<< is_sorted(v2.begin(), v2.end(), std::greater{}) << '\n';
	
	std::cout << "is v3 sorted: " 
		<< is_sorted(v3.begin(), v3.end(), 
			[](int x, int y) {
				return std::abs(x) < std::abs(y); }) << '\n';
}
