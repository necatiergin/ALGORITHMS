//std::generate_n
//std::partial_sort
//std::copy

#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
	std::vector<int> ivec;
	ivec.reserve(10'000);

	std::mt19937 eng{ std::random_device{}() };
	std::uniform_int_distribution dist{ 0, 100'000 };
	generate_n(back_inserter(ivec), 10'000, [&] {return dist(eng); });

	partial_sort(ivec.begin(), ivec.begin() + 20, ivec.end());
	//partial_sort(ivec.begin(), ivec.begin() + 20, ivec.end(), std::greater{});
	
	copy(ivec.begin(), ivec.begin() + 10, std::ostream_iterator<int>{std::cout, "\n"});
}
