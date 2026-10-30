#include <iostream>

void div(int a, int b, int& result, int& rem)
{
    result = a/b;
    rem = a % b;
}

int main()
{
    int result, rem;

    div(10, 5, result, rem);
    std::cout << (result == 2 && rem == 0) << std::endl;

    div(11, 5, result, rem);
    std::cout << (result == 2 && rem == 1) << std::endl;

    div(16, 5, result, rem);
    std::cout << (result == 3 && rem == 1) << std::endl;

    div(20, 8, result, rem);
    std::cout << (result == 2 && rem == 4) << std::endl;
}