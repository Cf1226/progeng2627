#include <iostream>

int main()
{
    int m, rem;
    std::cout << "Please enter a number: ";
    std::cin >> m;

    rem = m % 3;

    if (rem == 0){
        std::cout << "The number is a multiple of three." << std::endl;
    }
    else{
        std::cout << "The number is not a multiple of three." << std::endl;
    }
}