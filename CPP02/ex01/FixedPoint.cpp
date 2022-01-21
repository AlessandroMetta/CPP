#include "FixedPoint.hpp"
# include <iostream>

FixedPoint::FixedPoint( void ) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

FixedPoint::FixedPoint( const int value )
{
    std::cout << "Integer constructor called" << std::endl;
    this->value = (value << FixedPoint::bit);
}

FixedPoint::FixedPoint( const float value )
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << FixedPoint::bit));
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

FixedPoint & FixedPoint::operator=( FixedPoint const & src )
{
    std::cout << "Assignement operator called" << std::endl;
    if (this == &src)
        return (*this);
    this->value = src.getRawBits();
    return (*this);
}

std::ostream & operator<<( std::ostream & o, FixedPoint const & i)
{
    o << i.toFloat();

    return o;
}

int FixedPoint::toInt( void ) const
{
    return (this->value >> FixedPoint::bit);
}

float FixedPoint::toFloat( void ) const
{
    return ((float)this->value / (float)(1 << FixedPoint::bit));
}
