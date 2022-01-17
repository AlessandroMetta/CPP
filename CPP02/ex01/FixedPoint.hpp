#ifndef __FIXED_POINT_HPP__
# define __FIXED_POINT_HPP__
# include <iostream>

class FixedPoint {
    private:
        int value;
        int static const bit = 8;
    public:
        FixedPoint( void );
        FixedPoint( const int value );
        FixedPoint( const float value );
        FixedPoint( FixedPoint const & src );
        ~FixedPoint();
        FixedPoint & operator=(FixedPoint const & rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
};

#endif
