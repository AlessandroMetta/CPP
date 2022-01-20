#include "FixedPoint.hpp"
# include <iostream>

FixedPoint::FixedPoint( void ) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

FixedPoint::FixedPoint( FixedPoint const & src ) : value(0)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = src.getRawBits();
    return ;
}

int FixedPoint::getRawBits( void ) const
{
    return this->value;
}

void FixedPoint::setRawBits( int const raw )
{
    this->value = raw;
}

FixedPoint::~FixedPoint()
{
    std::cout << "Deconstructor called" << std::endl;
}

FixedPoint & FixedPoint::operator=( FixedPoint const & src)
{   
    if (this == &src)
        return(*this);
    std::cout << "Assignement operator called" << std::endl;
    this->value = src.getRawBits();
   return (*this);
}

std::ostream  &   operator<<( std::ostream & o, FixedPoint const & i)
{
    o << "The value is: " << i.getRawBits();

    return o;
}
