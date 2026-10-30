#include <iostream>
#include <cmath>

int smallest_factor(int num)
{
    for (int i = 2; i < std::sqrt(num); i++)
    {
        if (!(num % i))
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    /*
    std::cout << (smallest_factor(7) == 0);
    std::cout << (smallest_factor(15485863) == 0);
    std::cout << (smallest_factor(80) == 2);
    std::cout << (smallest_factor(145485863) == 0);
    std::cout << (smallest_factor(63) == 3);
    std::cout << (smallest_factor(93) == 3);
    */
    int lb, ub;
    
    std::cin >> lb >> ub;

    for(int i = lb; i <= ub; i++)
    {
        if (!(smallest_factor(i)))
        {
            std::cout << i << std::endl;
        }
    }
}