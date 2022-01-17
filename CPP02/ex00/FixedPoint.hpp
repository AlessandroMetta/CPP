#ifndef __FIXED_POINT_HPP__
# define __FIXED_POINT_HPP__
# include <iostream>

class FixedPoint {
    private:
        int _Fixed_Point_value;
        int static const _8;
    public:
        FixedPoint( void );
        FixedPoint( FixedPoint const & src );
        ~FixedPoint();
        FixedPoint & operator=(FixedPoint const & rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw ); 
};

std::ostream & operator<<( std::ostream & o, FixedPoint const & i);

#endif
