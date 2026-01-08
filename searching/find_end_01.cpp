// std::search
// std::find_end

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    std::vector<std::string> svec{ "gul", "ali", "nur", "ece", "can", "ece", "ali", "nur", "ece", "tan" };
    std::vector<int>::iterator result;

    const auto list = { "ali", "nur", "ece" };

    std::cout << "search with std::search\n";
    if (auto iter = std::search(svec.begin(), svec.end(), list.begin(), list.end()); iter != svec.end()) {
        std::cout << "found at index : " << distance(svec.begin(), iter) << '\n';
    }
    else {
        std::cout << "not found\n";
    }

    std::cout << "search with std::find_end\n";
    if (auto iter = std::find_end(svec.begin(), svec.end(), list.begin(), list.end()); iter != svec.end()) {
        std::cout << "found at index : " << distance(svec.begin(), iter) << '\n';
    }
    else {
        std::cout << "not found\n";
    }

}
