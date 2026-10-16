#include <iostream>

int main()
{
    int year;

    std::cout << "Enter the year: ";
    std::cin >> year;

    if (year % 4 != 0)
    {
        std::cout << "not a leap year" << std::endl;
    }
    else if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            std::cout << "leap year" << std::endl;
        }
        else
        {
            std::cout << "not a leap year" << std::endl;
        }
    }
    else
    {
        std::cout << "leap year" << std::endl;
    }
}