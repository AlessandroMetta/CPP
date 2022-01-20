#include "DiamondTrap.hpp"
# include <iostream>

int main( void )
{
    DiamondTrap a( "Pippo" );
    std::cout << a;
    a.attack( "Papera" );
    a.takeDamage( 8 );
    std::cout << a;
    a.beRepaired( 10 );
    std::cout << a;
    a.takeDamage( 8 );
    std::cout << a;
    a.whoami();
    return 0;
}
