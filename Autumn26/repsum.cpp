#include <iostream>

int main()
{
    double acc, x = 0;
    int i, n = 0;

    std::cin >> x >> n;

    while (i < n - 1)
    {
        acc += x;
        i++;
    }

    std::cout << acc << std::endl;

}