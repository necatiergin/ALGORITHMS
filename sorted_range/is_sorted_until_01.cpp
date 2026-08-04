#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector v{ 1, 3, 5, 8, 7, 9, 2, 3};
	
	auto iter = std::is_sorted_until(v.begin(), v.end());
	std::cout << "sorted_range ends at idx " << 
		iter - v.begin() << '\n';

	std::cout << "the first unsorted value is " << *iter << '\n';
}
