#include <iostream>

void panda(double a,double b,double& area,double& perimeter)
{
    area = a * b;
    perimeter = 2*(a + b);
}

int main()
{
    double area, perimeter;

    panda(1, 2, area, perimeter);
    std::cout << (area == 2 && perimeter == 6) << std::endl;

    panda(5, 10, area, perimeter);
    std::cout << (area == 50 && perimeter == 30) << std::endl;

    panda(8, 2, area, perimeter);
    std::cout << (area == 16 && perimeter == 20) << std::endl;

    panda(5, 5, area, perimeter);
    std::cout << (area == 25 && perimeter == 20) << std::endl;

}