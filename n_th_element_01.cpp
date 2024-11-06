//std::generate_n
//std::nth_element

#include <vector>
#include <random>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std;

	constexpr int size = 10'000;

	vector<int> ivec;
	ivec.reserve(size);
	mt19937 eng;
	uniform_int_distribution dist{ 0, 100'000 };
	generate_n(back_inserter(ivec), 10'000, [&] {return dist(eng); });
	nth_element(ivec.begin(), ivec.begin() + size / 2, ivec.end());
	//...
	cout << "median value is : " << ivec[size / 2];
}
