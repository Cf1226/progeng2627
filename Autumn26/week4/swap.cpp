#include <iostream>

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a, b;

    a = 1; b = 2;
    swap(a, b);
    std::cout << (a == 2 && b == 1) << std::endl;
     a = 10; b = -4;
     swap(a, b);
    std::cout << (a == -4 && b == 10) << std::endl;
     a = 101; b = 2;
     swap(a, b);
    std::cout << (a == 2 && b == 101) << std::endl;
     a = -9; b = 43;
     swap(a, b);
    std::cout << (a == 43 && b == -9) << std::endl;
}