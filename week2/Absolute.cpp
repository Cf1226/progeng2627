#include <iostream>

int main()
{
    double n, absv;

    std::cout << "Please enter a number: ";
    std::cin >> n;

    if (n > 0)
    {
        absv = n;
    }
    else
    {
        absv = -n;
    }
    
    std::cout << "Absolute value is : " << absv << std::endl;
    
}