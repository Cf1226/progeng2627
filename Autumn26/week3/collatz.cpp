#include <iostream>

int main()
{
    int n, steps = 0, max;
    
    std::cin >> n;
    max = n;

    while (n != 1)
    {
        //check if n is odd, if so multiply by three and add one
        if(n % 2)
        {
            n = 3 * n + 1;
        }
        //if n is even divide by 2
        else
        {
            n = n / 2;
        }
        //if n is greater than max, set max as n
        if (n > max)
        {
            max = n;
        }
        std::cout << n << "\t";
        steps++;
    }
    std::cout << "\n" << "The number of steps was: " << steps << "\n";
    std::cout << "The maximum number was: " << max << "\n";
    
}