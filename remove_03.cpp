#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std;

	vector vec{ 3, 2, 6, 2, 9, 5, 4, 1, 2, 8, 3, 6, 2, 2, 7 };

	cout << "size = " << vec.size() << '\n';
	copy(vec.begin(), vec.end(), ostream_iterator<int>{cout, " "});
	std::cout << '\n';
	auto n = erase(vec, 2);
	cout << "size = " << vec.size() << '\n';
	std::cout << n << " elements erased\n";
	copy(vec.begin(), vec.end(), ostream_iterator<int>{cout, " "});
	std::cout << '\n';
}
