#include <iostream>
#include <cmath>

double mypow(double base, int exp);
double powersum(double n, double x);

int main()
{
   std::cout << (powersum(1, 2) == 3) << std::endl;
   std::cout << (powersum(10, 2) == 2047) << std::endl;
   std::cout << (powersum(4, 5) == 781) << std::endl;
   std::cout << (powersum(0, 2) == 1) << std::endl;
   std::cout << (powersum(15, 1) == 16) << std::endl;

}

double powersum(double n, double x)
{
    double y = 0;
    for (int i = 0; i <= n; i++)
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