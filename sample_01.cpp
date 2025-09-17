// std::sample C++17

#include <string>
#include <iostream>
#include <random>
#include <iterator>

int main()
{
	std::string input{"0123456789"};
	std::cout << "enter the distance for the sample: ";
	int dist;
	std::cin >> dist;

	std::mt19937 eng{ std::random_device{}()};
	std::string str{};

	for (int i = 0; i < 10; ++i) {
		std::sample(input.begin(), input.end(), std::back_inserter(str), dist, eng);
		std::cout << str << '\n';
		str = {};
	}
}
