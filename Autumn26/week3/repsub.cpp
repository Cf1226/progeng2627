#include <iostream>

int main()
{
    int a, b, q, r;
    std::cin >> a >> b;
    q = 0;

    while(a > b)
    {
        a = a - b;
        q++;
    }
    std::cout << q << " Remainder is: " << a << std::endl;
}