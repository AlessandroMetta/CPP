#ifndef __POINT_HPP__
# define __POINT_HPP__
#include "FixedPoint.hpp"

class Point{
    private:
        FixedPoint x;
        FixedPoint y;
    public:
        Point( void );
        Point( Point const & src);
        Point( float const a, float const b );
        ~Point();
        Point & operator=(Point const & rhs);
        Point Point::operator-(Point const & rhs);
        FixedPoint getX() const;
        FixedPoint getY() const;
};

// bool bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream & operator<<(std::ostream & o, Point const & pt);
#endif