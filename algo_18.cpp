//std::copy
//std::move

#include <iostream>
#include <vector>
#include <algorithm>

class Myclass {
public:
	Myclass() = default;

	Myclass& operator=(const Myclass&)
	{
		std::cout << "copy assignment\n";
		return *this;
	}

	Myclass& operator=(Myclass&&)noexcept
	{
		std::cout << "move assignment\n";
		return *this;
	}
};

int main()
{
	std::vector<Myclass> vec_source(5);
	std::vector<Myclass> vec_dest(5);

	copy(vec_source.begin(), vec_source.end(), vec_dest.begin());
	move(vec_source.begin(), vec_source.end(), vec_dest.begin());

}
