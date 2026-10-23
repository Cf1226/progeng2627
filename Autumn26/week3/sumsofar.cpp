#include <iostream>

int main()
{
    int n, sum;

    std::cin >> n;
    sum = n;

    while (n != 0)
    {
        std::cout << "The sum so far is: " << sum << std::endl << "Enter a number: ";
        std::cin >> n;
        sum += n;
    }
}