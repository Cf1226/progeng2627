#include <iostream>

double max3(double a, double b, double c)
{
    double max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    return max;
}

int main()
{
    std::cout << (max3(1, 2, 3) == 3);
    std::cout << (max3(5, 45, -32) == 45);
    std::cout << (max3(1.3345, -2, 3.55) == 3.55);
    std::cout << (max3(-1, -2, -3) == -1);
    std::cout << (max3(100, 25, 13) == 100);
    std::cout << (max3(-1, 2, -3) == 2);
    std::cout << (max3(1.00007, 2.37, 3.7) == 3.7);
}