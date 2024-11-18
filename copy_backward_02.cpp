#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector vsource{ 1, 3, 5, 7, 9};

    std::vector<int> vdest(7);

    std::copy_backward(vsource.begin(), vsource.end(), vdest.end());

    std::cout << "vdest: ";
    for (int i : vdest)
        std::cout << i << ' ';
    std::cout << '\n';
}

