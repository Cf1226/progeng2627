#include <iostream>

void sort(double& a, double& b, double& c)
{
    double tmp;
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
}

int main()
{
    double a, b, c;

    a = 1; b = 2; c = 3;
    sort(a, b, c);
    std::cout << (a == 1 && b == 2 && c == 3) << std::endl;

    a = 534; b = 23; c = 323;
    sort(a, b, c);
    std::cout << (a == 23 && b == 323 && c == 534) << std::endl;

    a = 5; b = 2; c = 1;
    sort(a, b, c);
    std::cout << (a == 1 && b == 2 && c == 5) << std::endl;

    a = 23; b = -2; c = 33;
    sort(a, b, c);
    std::cout << (a == -2 && b == 23 && c == 33) << std::endl;

}