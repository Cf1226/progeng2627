#include <iostream>

int main()
{
    double x, acc = 1;
    int n, i = 0;

    std::cin >> x >> n;

    while(i < n)
    {
        acc *= x;
        i++;
    }
    std::cout << x << "^" << n << " = " << acc << std::endl;
}