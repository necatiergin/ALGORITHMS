#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::vector<std::string> source{ "ufuk", "yekta", "murat", "sevda", "nihal", "canan", "deniz" };
    std::vector<std::string> dest(source.size());

    //std::copy(std::move_iterator(source.begin()), std::move_iterator(source.end()), dest.begin());
    std::move(source.begin(), source.end(), dest.begin());

    for (const auto& s : dest)
        std::cout << s << ' ';

    std::cout << '\n';
    std::cout << "source.size() = " << source.size() << '\n';

    for (const auto& s : source)
        std::cout << s.length() << ' ';

    std::cout << '\n';
}
