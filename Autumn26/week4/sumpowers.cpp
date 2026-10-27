#include <iostream>
#include <cmath>

double mypow(double base, int exp);
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
        y += mypow(x, i);
    }
    return y;
}

double mypow(double base, int exp){
    double result = 1; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    
    if (exp < 0)
    {
        exp = -exp;
        base = 1.0/base;
    }

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}