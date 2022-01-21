#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
# include <iostream>

int main( void )
{
    ScavTrap a( "Mamma Lupa" );
    std::cout << a;
    a.attack( "Mamma Capra" );
    a.takeDamage( 8 );
    std::cout << a;
    a.beRepaired( 10 );
    std::cout << a;
    a.takeDamage( 8 );
    std::cout << a;
    a.guardGate();
    return 0;
}
