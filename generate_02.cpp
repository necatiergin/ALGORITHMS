#include <list>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>

void print_container(const auto& c)
{
	for (const auto& elem : c)
		std::cout << elem << ' ';
	std::cout << '\n';
}

int main()
{
	std::list<int> ilist(20);

	std::srand(static_cast<unsigned>(std::time(nullptr)));
	generate(ilist.begin(), ilist.end(), rand);
	print_container(ilist);
	generate(ilist.begin(), ilist.end(), [n = 2]()mutable {return n += 2; });
	print_container(ilist);
}
