// std::shuffle C++11

#include <string>
#include <random>
#include <algorithm>
#include <iostream>

int main()
{
	std::string str{"necati ergin"};
	std::mt19937 eng{ std::random_device{}() };
	
	int count{};

	while (count < 1000) {
		std::shuffle(str.begin(), str.end(), eng);
		if (const auto idx = str.find(' '); idx > 2 && idx < 9) {
			std::cout << str << '\n';
			++count;
		}
	}
}
