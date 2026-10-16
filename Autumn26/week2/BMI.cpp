#include <iostream>

int main()
{
    double weight;
    double height;
    double bmi;

    std::cout << "Enter weight(kg): ";
    std::cin >> weight;

    std::cout << "Enter height(m): ";
    std::cin >> height;

    bmi = weight / (height * height);

    std::cout << "BMI: " << bmi << std::endl;

}