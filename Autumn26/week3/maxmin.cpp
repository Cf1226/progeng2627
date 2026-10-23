#include <iostream>

int main()
{
    int max, min, n;

    std::cout << "Please enter a number: ";
    std::cin >> n;
    max = n; min = n;

    while(n != 0)
    {
        if(n > max)
        {
            max = n;
        }
        if(n < min)
        {
            min = n;
        }
        std::cout << "Max so far: " << max << "\n" << "Min so far: " << min << "\n";
        std::cout << "Please enter a number: ";
        std::cin >> n;
    }
}