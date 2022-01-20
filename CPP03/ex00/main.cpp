#include "ClapTrap.hpp"
# include <iostream>

int main( void )
{
    ClapTrap a( "Test" );
    a.attack( "Test1" );
    a.takeDamage( 8 );
    std::cout << "ClapTrap " << a.getName() << " hitpoint value :"<< a.getHitpoints() << std::endl;
    a.beRepaired( 10 );
    std::cout << "ClapTrap " << a.getName() << " hitpoint value :"<< a.getHitpoints() << std::endl;
    a.takeDamage( 8 );
    std::cout << "ClapTrap " << a.getName() << " hitpoint value :"<< a.getHitpoints() << std::endl;
    return 0;
}
