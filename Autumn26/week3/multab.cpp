#include<iostream>

int main()
{
    int width;
    std::cin >> width;

    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < width; j++)
        {
            std::cout << (i + 1) * (j+ 1) << "\t";
        }
        std::cout << "\n";
    }
}