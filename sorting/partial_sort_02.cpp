#include <vector>
#include <algorithm>
#include <string>
#include "nutility.h"

int main()
{
	using namespace std;

	constexpr size_t size{ 10'000u };
	constexpr size_t n = 10;
	vector<string> svec(size);
	
	generate(svec.begin(), svec.end(), 
		 [] {return random_name() + ' ' + random_surname(); });
	partial_sort(svec.begin(), svec.begin() + 10, svec.end());

	for_each(svec.begin(), svec.begin() + 10, [](const string& s) {
		cout << s << '\n'; });
}
