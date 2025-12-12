#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std;

	vector vec{ 3, 2, 6, 2, 9, 5, 4, 1, 2, 8, 3, 6, 2, 2, 7 };

	auto logic_end = remove(vec.begin(), vec.end(), 2);
	cout << "size = " << vec.size() << '\n';
	auto logic_size = distance(vec.begin(), logic_end);

	cout << "number of elements not removed : " << logic_size << '\n';
	copy(vec.begin(), logic_end, ostream_iterator<int>{cout, " "});
	std::cout << '\n';

	cout << "number of removed elements : " << distance(logic_end, vec.end()) << '\n';
	vec.erase(logic_end, vec.end());
	std::cout << "new size : " << vec.size() << '\n';

	copy(vec.begin(), logic_end, ostream_iterator<int>{cout, " "});
	std::cout << '\n';

}
