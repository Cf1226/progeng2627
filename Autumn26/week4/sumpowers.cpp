#include <iostream>
#include <cmath>

double powersum(double n, double x);

int main()
{
    double x, n;
    std::cin >> x >> n;
    std::cout << "The sum of powers is: " << powersum(n, x) << std::endl;
}

double powersum(double n, double x)
{
    double y = 0;
    for (int i = 0; i < n; i++)
    {
        y += std::pow(x, i);
    }
    return y;
}