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

// math operator
FixedPoint FixedPoint::operator+(FixedPoint const & rhs)
{}
FixedPoint FixedPoint::operator-(FixedPoint const & rhs)
{}
FixedPoint FixedPoint::operator*(FixedPoint const & rhs)
{}
FixedPoint FixedPoint::operator/(FixedPoint const & rhs)
{}

// logical operator
bool FixedPoint::operator>(FixedPoint const & rhs) const
{}
bool FixedPoint::operator>=(FixedPoint const & rhs) const
{}
bool FixedPoint::operator<(FixedPoint const & rhs) const
{}
bool FixedPoint::operator<=(FixedPoint const & rhs) const
{}
bool FixedPoint::operator==(FixedPoint const & rhs) const
{}
bool FixedPoint::operator!=(FixedPoint const & rhs) const
{}
// incrementation
FixedPoint FixedPoint::operator++(int)
{}
FixedPoint FixedPoint::operator++()
{}
FixedPoint FixedPoint::operator--(int)
{}
FixedPoint FixedPoint::operator--()
{}


static FixedPoint & min ( FixedPoint & first,  FixedPoint & second)
{}
static FixedPoint & max ( FixedPoint & first,  FixedPoint & second)
{}
static FixedPoint const & min ( FixedPoint const & first,  FixedPoint const & second)
{}
static FixedPoint const & max ( FixedPoint const & first,  FixedPoint const & second)
{}


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
