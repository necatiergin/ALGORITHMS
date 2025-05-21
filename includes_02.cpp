#include <iostream>
#include <set>
#include <algorithm>
#include <string>

int main() 
{
    std::set<std::string> perms = {"read", "write", "execute", "delete" };

    const std::set<std::string> required1 = {"read", "write"};

    const std::set<std::string> required2 = {"read", "admin"};

    bool has_all1 = std::includes(perms.begin(), perms.end(), required1.begin(), required1.end());

    bool has_all2 = std::includes(perms.begin(), perms.end(), required2.begin(), required2.end());

    boolalpha(std::cout);
    std::cout << "has_all1 : " << has_all1 << '\n';
    std::cout << "has_all2 : " << has_all1 << '\n';
}

