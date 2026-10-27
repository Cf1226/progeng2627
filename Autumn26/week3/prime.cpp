#include <iostream>
#include <cmath>

int main()
{
    long n;
    long a;

    std::cin >> n;

    a = std::ceil(std::sqrt(n));

    for (int i = a; i > 1; i--)
    {
        if (!(n % i))
        {
            std::cout << "the number is not prime\nit is divisible by " << i << std::endl;
            return 0;
        }
    }
    std::cout << "The number is prime!\n";
}