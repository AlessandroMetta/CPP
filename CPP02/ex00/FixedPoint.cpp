#include "FixedPoint.hpp"
# include <iostream>

FixedPoint::FixedPoint( void ) : _Fixed_Point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

FixedPoint::FixedPoint( FixedPoint const & src ) : _Fixed_Point_value(0)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

int FixedPoint::getRawBits( void ) const
{
    return this->_Fixed_Point_value;
}

void FixedPoint::setRawBits( int const raw )
{
    this->_Fixed_Point_value = raw;
}

FixedPoint::~FixedPoint()
{
    std::cout << "Deconstructor called" << std::endl;
    return ;
}

FixedPoint & FixedPoint::operator=( FixedPoint const & src)
{
    std::cout << "Assignement operator called" << std::endl;
    if ( this != &src)
        this->_Fixed_Point_value = src.getRawBits();

    return *this;
}

std::ostream  &   operator<<( std::ostream & o, FixedPoint const & i)
{
    o << "The value is: " << i.getRawBits();

    return o;
}
