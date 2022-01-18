#ifndef __FIXED_POINT_HPP__
# define __FIXED_POINT_HPP__
# include <iostream>
# include <cmath>

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

        // math operator
        FixedPoint operator+(FixedPoint const & rhs);
        FixedPoint operator-(FixedPoint const & rhs);
        FixedPoint operator*(FixedPoint const & rhs);
        FixedPoint operator/(FixedPoint const & rhs);
        
        // logical operator
        bool operator>(FixedPoint const & rhs) const;
        bool operator>=(FixedPoint const & rhs) const;
        bool operator<(FixedPoint const & rhs) const;
        bool operator<=(FixedPoint const & rhs) const;
        bool operator==(FixedPoint const & rhs) const;
        bool operator!=(FixedPoint const & rhs) const;

        // incrementation
        FixedPoint operator++(int);
        FixedPoint operator++();
        FixedPoint operator--(int);
        FixedPoint operator--();

        static FixedPoint & min ( FixedPoint & first,  FixedPoint & second);
        static FixedPoint & max ( FixedPoint & first,  FixedPoint & second);
        static FixedPoint const & min ( FixedPoint const & first,  FixedPoint const & second);
        static FixedPoint const & max ( FixedPoint const & first,  FixedPoint const & second);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        int toInt( void ) const;
        float toFloat( void ) const;
};

std::ostream & operator<<( std::ostream & o, FixedPoint const & i);

#endif
