#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector v{ 2, 7, 1, 4, 6, 8, 3, 2, 9, 1, 7, 6 };
	int key;

	std::cout << "enter the searched integer: ";
	std::cin >> key;

	if (auto iter = find(begin(v), end(v), key); iter != v.end()) {
		std::cout << "found idx = " << iter - v.begin() << '\n';
	}
	else {
		std::cout << "not found\n";
	}
}
