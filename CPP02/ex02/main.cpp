#include "FixedPoint.hpp"
# include <iostream>

int main( void ) {
    // FixedPoint a;
    // FixedPoint const b( FixedPoint( 5.05f ) * FixedPoint( 2 ) );
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    FixedPoint a( 10 );
    FixedPoint b( 1.5f );

    // testing operation
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;

    // testing post-incrementation
    std::cout << "a = " << a << std::endl;
    a++;
    std::cout << "a++ = " << a << std::endl;
    a--;
    std::cout << "a-- = " << a << std::endl;

    // testing pre-incrementation
    std::cout << "b = " << b << std::endl;
    std::cout << "++b = " << ++b << std::endl;
    std::cout << "--b = " << --b << std::endl;

    // testing min/max function
    std::cout << "max value = " << FixedPoint::max( a, b ) << std::endl;
    std::cout << "min value = " << FixedPoint::min( a, b ) << std::endl;
    return 0;
}
