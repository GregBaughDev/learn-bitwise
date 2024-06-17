#include "prompt.hpp"
#include <iostream>

void promptUser(char *option)
{
    std::cout << "Select the bitwise operator:" << "\n";
    std::cout << "a. Shift left" << "\n";
    std::cout << "b. Shift right" << "\n";
    std::cout << "c. OR" << "\n";
    std::cout << "d. AND" << "\n";
    std::cout << "e. NOT" << "\n";
    std::cout << "q. Quit" << "\n";

    std::cin >> *option;
}
