#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // this line will print 3

    a = 2;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // I expect 3 to be printed twice, as a has been updated but c hasn't yet

    c = a + b;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // i expect 4 to be printed as now c has been reassigned to a + b after a was assigned to 4

}