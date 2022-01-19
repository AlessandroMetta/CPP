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
        Point operator-(Point const & rhs) const;
        FixedPoint getX() const;
        FixedPoint getY() const;
};

std::ostream & operator<<(std::ostream & o, Point const & pt);

#endif
