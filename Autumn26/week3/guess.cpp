#include <iostream>

int main()
{
    std::cout << "Pick a number between 0 and 100\n";
    int n = 50;
    bool guess = false, valid = false;
    char answer;
    while(!guess)
    {
        std::cout << "Is your number " << n << "? (y/n)\n";
        std::cin >> answer;
        
        valid = false;
        while(!valid)
        {
            if(answer == 'y')
            {
                valid = true;
                guess = true;
                std::cout << "I guessed the number!\n";
            }
            else if (answer == 'n')
            {
                std::cout << "Is it higher or lower? (h/l)";
                std::cin >> answer;
                while(!valid)
                {
                    if(answer == 'h')
                    {
                        n = n + n/2;
                        valid = true;
                    }
                    else if(answer == 'l')
                    {
                        n = n - n/2;
                        valid = true;
                    }
                    else
                    {
                        std::cout << "invalid format \n";
                        std::cin >> answer;
                    }
                }
            }
            else
            {
                std::cout << "invalid format \n";
                std::cin >> answer;
            }
        }
    }
}