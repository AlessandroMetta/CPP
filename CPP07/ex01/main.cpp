#include <iostream>
#include "iter.hpp"

int main( void )
{
    std::string strArray[4] = { "ciao", "come", "stai", "?" };
    int numArray[4] = { 1, 99, -99, 42 };
    iter(strArray, 4, printValue);
    iter(numArray, 4, printValue);
    return 0;
}
