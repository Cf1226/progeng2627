#include <iostream>

int main()
{
    int n;
    double sum, i = 1;

    std::cout << "enter a number: ";
    std::cin >> n;
    sum = n;

    while (n != 0)
    {
        std::cout << "the average so far is: " << sum/i << std::endl << "enter a number: ";
        std::cin >> n;
        sum += n;
        i++;
    }
}