#include <string>
#include <algorithm>
#include <iostream>

int main()
{
	std::string s{ "necatiergin" };
	std::cout << '|' << s << "|\n";
	std::rotate(s.begin(), next(s.begin(), 6), s.end());
	std::cout << '|' << s << "|\n";
}


