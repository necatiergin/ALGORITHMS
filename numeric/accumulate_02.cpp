#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <string>


int main()
{
	using namespace std::literals;

	std::vector vec{ 2, 3, 7, 5, 9, 1, 6 };
	
	std::cout << std::accumulate(vec.begin(), vec.end(), 0) << '\n';
	std::cout << std::accumulate(vec.begin(), vec.end(), 100) << '\n';

	std::vector<std::string> svec{ "Ali", "Ayse", "Nur", "Tan", "Ege", "Gul" };
	std::cout << std::accumulate(svec.begin(), svec.end(), ""s) << '\n';
}
