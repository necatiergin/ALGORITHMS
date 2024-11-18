#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <string>

int main()
{
    const auto print = [](const auto& c) {
        for (const auto& e : c)
            std::cout << e << ' ';
        std::cout.put('\n');
        };

    std::vector vec{ 1, 4, 7, 9, 6, 5, 2, 8, 0, 3 };
    print(vec);
    reverse(vec.begin(), vec.end());
    print(vec);
    std::list lst{ 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
    print(lst);
    reverse(lst.begin(), lst.end());
    print(lst);

    std::string name{ "bjarne stroustrup" };
    print(name);
    reverse(name.begin(), name.end());
    print(name);
}

