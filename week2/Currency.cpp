#include <iostream>

int main()
{
    double gbp;
    double eur;

    std::cout << "Enter the amount in pounds: ";
    std::cin >> gbp;

    eur = gbp * 1.18;

    std::cout << "Amount in euros: " << eur << std::endl;

}