#include <iostream>

int main()
{
    int a;
    int b;
    int perimeter;
    int area;

    std::cout << "Enter the length of side a: ";
    std::cin >> a;
  
    std::cout << "Enter the length of side b: ";
    std::cin >> b;

    perimeter = 2 * (a + b);
    area = a * b;

    std::cout << "Area = " << area << std::endl;
    std::cout << "Perimeter = " << perimeter << std::endl;
}