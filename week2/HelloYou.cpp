#include <iostream>

int main()
{
    std::string user_name;
    std::string user_surname;

    //Ask for first name
    std::cout << "What is your first name?" << std::endl;
    std::cin >> user_name;

    //Ask for surname
    std::cout << "What is your surname?" << std::endl;
    std::cin >> user_surname;


    std::cout << "Hello, " << user_name << " " << user_surname << std::endl;
}