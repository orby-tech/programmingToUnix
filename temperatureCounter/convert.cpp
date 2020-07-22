#include <stdio.h>
#include <iostream>

int main (void)
{
    int celcius;
    std::cout << "celcius ";
    std::cin >> celcius;
    std::cout << celcius;
    int newValue;
    newValue = celcius * ( 212 - 32 ) / 100 + 32;
    std::cout << newValue;
}