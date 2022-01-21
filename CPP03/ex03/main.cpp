#include "DiamondTrap.hpp"
# include <iostream>

int main( void )
{
    DiamondTrap a( "Lupo Mannaro" );
    std::cout << a;
    a.attack( "Nonno di Heidi" );
    a.takeDamage( 8 );
    std::cout << a;
    a.beRepaired( 10 );
    std::cout << a;
    a.takeDamage( 8 );
    std::cout << a;
    a.whoami();
    return 0;
}
