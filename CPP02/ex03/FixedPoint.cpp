#include "FixedPoint.hpp"
# include <iostream>

FixedPoint::FixedPoint( void ) : value(0)
{
    return ;
}

FixedPoint::FixedPoint( const int value )
{
    this->value = (value << FixedPoint::bit);
}

FixedPoint::FixedPoint( const float value )
{
    this->value = roundf(value * (1 << FixedPoint::bit));
}

FixedPoint::FixedPoint( FixedPoint const & src ) : value(0)
{
    this->value = src.getRawBits();
    return ;
}

FixedPoint::~FixedPoint(){}

int FixedPoint::getRawBits( void ) const
{
    return this->value;
}

void FixedPoint::setRawBits( int const raw )
{
    this->value = raw;
}


FixedPoint & FixedPoint::operator=( FixedPoint const & src )
{
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

// math operator
FixedPoint FixedPoint::operator+(FixedPoint const & rhs)
{
    FixedPoint val(*this);

    val.setRawBits(this->getRawBits() + rhs.getRawBits());
    return ( val );
}

FixedPoint FixedPoint::operator-(FixedPoint const & rhs)
{
    FixedPoint val(*this);

    val.setRawBits(this->getRawBits() - rhs.getRawBits());
    return ( val );
}

FixedPoint FixedPoint::operator*(FixedPoint const & rhs)
{
    FixedPoint val(*this);
    long tmp1, tmp2;

    tmp1 = ( (long)this->getRawBits() );
    tmp2 = ( (long)rhs.getRawBits() );
    val.setRawBits( tmp1 * tmp2 / (1 << FixedPoint::bit) );
    return ( val );
}

FixedPoint FixedPoint::operator/(FixedPoint const & rhs)
{
    FixedPoint val(*this);
    long tmp1, tmp2;

    tmp1 = ((long)this->getRawBits());
    tmp2 = ((long)rhs.getRawBits());
    val.setRawBits( (tmp1 * (1 << FixedPoint::bit)) / tmp2 );
    return ( val );
}

// logical operator
bool FixedPoint::operator>(FixedPoint const & rhs) const
{
    return ( this->getRawBits() > rhs.getRawBits() );
}

bool FixedPoint::operator>=(FixedPoint const & rhs) const
{
    return ( this->getRawBits() >= rhs.getRawBits() );
}

bool FixedPoint::operator<(FixedPoint const & rhs) const
{
    return ( this->getRawBits() < rhs.getRawBits() );
}

bool FixedPoint::operator<=(FixedPoint const & rhs) const
{
    return ( this->getRawBits() <= rhs.getRawBits() );
}

bool FixedPoint::operator==(FixedPoint const & rhs) const
{
    return ( this->getRawBits() == rhs.getRawBits() );
}

bool FixedPoint::operator!=(FixedPoint const & rhs) const
{
    return ( this->getRawBits() != rhs.getRawBits() );
}

// incrementation
FixedPoint FixedPoint::operator++(int)
{
    FixedPoint tmp(*this);
    operator++();
    return (tmp);
}

FixedPoint FixedPoint::operator++()
{
    this->value++;
    return ( *this );
}

FixedPoint FixedPoint::operator--(int)
{
    FixedPoint tmp(*this);
    operator--();
    return (tmp);
}

FixedPoint FixedPoint::operator--()
{
    this->value--;
    return ( *this );
}

FixedPoint const &FixedPoint::min(FixedPoint const &a, FixedPoint const &b)
{
	if (a > b)
		return (b);
	return (a);
}

FixedPoint &FixedPoint::min(FixedPoint &a, FixedPoint &b)
{
	if (a > b)
		return (b);
	return (a);
}

FixedPoint const &FixedPoint::max(FixedPoint const &a, FixedPoint const &b)
{
	if (a > b)
		return (a);
	return (b);
}

FixedPoint &FixedPoint::max(FixedPoint &a, FixedPoint &b)
{
	if (a > b)
		return (a);
	return (b);
}
