#include "FixedPoint.hpp"
# include <iostream>

int main( void )
{
    FixedPoint a;
    FixedPoint b( a );
    FixedPoint c;
    c = b;
    std::cout << "The value of a is: " << a.getRawBits() << std::endl;
    std::cout << "The value of b is: " << b.getRawBits() << std::endl;
    std::cout << "The value of c is: " << c.getRawBits() << std::endl;

    return 0;
}
