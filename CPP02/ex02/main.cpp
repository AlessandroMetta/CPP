#include "FixedPoint.hpp"
# include <iostream>

int main( void ) 
{
    FixedPoint a( 10 );
    FixedPoint b( 1.5f );

    std::cout << "--- testing operation" << std::endl;
    std::cout << "a > b = " << (a > b) << std::endl;
    std::cout << "a < b = " << (a < b) << std::endl;
    std::cout << "a != b = " << (a != b) << std::endl;
    std::cout << "a == b = " << (a == b) << std::endl;

    std::cout << "--- testing operation" << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;

    std::cout << "--- testing post-incrementation" << std::endl;
    std::cout << "a = " << a << std::endl;
    a++;
    std::cout << "a++ = " << a << std::endl;
    a--;
    std::cout << "a-- = " << a << std::endl;

    std::cout << "--- testing pre-incrementation" << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "++b = " << ++b << std::endl;
    std::cout << "--b = " << --b << std::endl;

    std::cout << "--- testing min/max function" << std::endl;
    std::cout << "max value = " << FixedPoint::max( a, b ) << std::endl;
    std::cout << "min value = " << FixedPoint::min( a, b ) << std::endl;
    return 0;
}
