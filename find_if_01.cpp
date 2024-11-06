// std::find_if

#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector v{ 2, 7, 1, 4, 6, 8, 26, 2, 9, 20, 1, 37, 6, 21};

	int divisor;
	std::cout << "enter the divisor : ";
	std::cin >> divisor;

	if (auto iter = find_if(cbegin(v), cend(v), [divisor](int x)
		{return x % divisor == 0; }); iter != v.end()) {
		std::cout << "found value is " << *iter << " idx is " << iter - v.begin() << '\n';
	}
	else {
		std::cout << "not found\n";
	}
}
