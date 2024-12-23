#include <algorithm>
#include <string>
#include <iostream>

int main()
{
	//          01234567
	std::string str("necati ergin");

	std::cout << '|' << str << '|' << '\n';
	rotate(str.begin(), str.begin() + 7, str.end());
	std::cout << '|' << str << '|' << '\n';
}
