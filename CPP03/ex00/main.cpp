#include "ClapTrap.hpp"
# include <iostream>

int main( void )
{
    ClapTrap a( "Luppetto" );
    a.attack( "Capretto" );
    a.takeDamage( 8 );
    std::cout << a;
    a.beRepaired( 10 );
    std::cout << a;
    a.takeDamage( 8 );
    std::cout << a;
    return 0;
}
