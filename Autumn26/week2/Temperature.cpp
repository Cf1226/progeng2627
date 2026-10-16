#include <iostream>

int main()
{
    double temp_in, temp_out;
    std::string unit_in, unit_out;
    bool valid_units = false;

    std::cin >> temp_in >> unit_in;

    if (unit_in == "f" || unit_in == "F")
    {
        valid_units = true;
        unit_out = "C";
        temp_out = ((temp_in - 32) *(5/9.0));
    }
    else if (unit_in == "c" || unit_in == "C")
    {
        valid_units = true;
        unit_out = "F";
        temp_out = ((temp_in * (9/5.0)) + 32);
    }
    if (valid_units)
    {
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else
    {
        std::cout << "Units not recognised.";
    }
}