#include <random>
#include <iostream>
#include <format>
#include <algorithm>

int main()
{
	std::mt19937 eng{ std::random_device{}() };
	std::uniform_int_distribution dist{ -999, 999 };

	const int x = dist(eng);
	const int y = dist(eng);
	const int z = dist(eng);
	const int t = dist(eng);

	std::cout << std::format("{} {} {} {}\n", x, y, z, t);
	std::cout << "min = " << std::min({ x, y, z, t }) << '\n';
	std::cout << "max = " << std::max({ x, y, z, t }) << '\n';

	const auto fcomp = [](int x, int y) {
		return std::abs(x) < std::abs(y);
		};

	std::cout << "\n";

	std::cout << "min = " << std::min({ x, y, z, t }, fcomp) << '\n';
	std::cout << "max = " << std::max({ x, y, z, t }, fcomp) << '\n';

}
