// std::copy_n

#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
	std::vector ivec{ 1, 3, 5, 8, 7, 9, 2, 3};
	std::list<int> ilist;
	copy_n(ivec.begin(), 5, back_inserter(ilist));

	std::cout << "ilist.size() = " << ilist.size() << '\n';
	copy(ilist.begin(), ilist.end(), std::ostream_iterator<int>{std::cout, " "});
}
