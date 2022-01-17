#include "FixedPoint.hpp"
# include <iostream>

int main( void )
{
    FixedPoint a;
    FixedPoint b( a );
    FixedPoint c;
    c = b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}
