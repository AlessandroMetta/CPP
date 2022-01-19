#include "Point.hpp"

Point::Point( void ) : x( 0 ), y( 0 ) {}

Point::Point( Point const & src ) : x( src.getX() ), y( src.getY() ) {}

Point::Point( float const a, float const b ) : x( a ), y( b ) {}

Point::~Point() {}

Point & Point::operator=(Point const & rhs)
{
    if (this == &rhs)
        return (*this);
    this->x = rhs.getX();
    this->y = rhs.getY();
    return (*this);
}

Point Point::operator-(Point const & rhs) const 
{
    FixedPoint x = this->getX() - rhs.getX();
    FixedPoint y = this->getY() - rhs.getY();
    Point ret(x.toFloat(), y.toFloat());
    return (ret);
}

FixedPoint Point::getX() const
{
    return(this->x);
}

FixedPoint Point::getY() const
{
    return(this->y);
}

std::ostream & operator<<(std::ostream & o, Point const & pt)
{
    o << "( " << pt.getX() << ", " << pt.getY() << " )";

    return o;
}
