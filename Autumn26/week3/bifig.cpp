#include <iostream>

int main()
{
    int width;
    int i, j;

    std::cin >> width;
    i = width;

    while (i > 0)
    {
        j = width;
        while(j > 0)
        {
            std::cout << "*";
            j--;
        }
        std::cout << "\n";
        i--;
    }
}