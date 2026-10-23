#include <iostream>

int main()
{
    int acc = 1, x, n;

    std::cin >> x >> n;

    for(int i = 0; i < n; i++)
    {
        acc = acc * x;
    }
    std::cout << acc << std::endl;
}