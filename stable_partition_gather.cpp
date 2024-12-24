#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <functional>

void print_container(const auto& c)
{
	for (const auto& elem : c) {
		std::cout << elem << ' ';
	}
	std::cout << '\n';
}

int main()
{
	std::vector<int> ivec;
	ivec.reserve(40);

	std::mt19937 eng{ std::random_device{}() };
	std::uniform_int_distribution dist{ 10, 99 };

	std::generate_n(back_inserter(ivec), 40, [&eng, &dist] {return dist(eng); });
	print_container(ivec);
	std::cout << "enter the idx to gather: ";
	int idx;
	std::cin >> idx;
	const auto div5 = [](int i) {return i % 5 == 0; };

	const auto iter = next(ivec.begin(), idx);
	const auto beg = std::stable_partition(ivec.begin(), iter, std::not_fn(div5));
	const auto end = std::stable_partition(iter, ivec.end(), div5);
	print_container(ivec);

	for_each(beg, end, [](int i) {std::cout << i << ' '; });
}
