#include "ClapTrap.hpp"
#include "FragTrap.hpp"
# include <iostream>

int main( void )
{
    FragTrap a( "Test" );
    std::cout << a;
    a.attack( "ATTACKTEST" );
    a.takeDamage( 8 );
    std::cout << a;
    a.beRepaired( 10 );
    std::cout << a;
    a.takeDamage( 8 );
    std::cout << a;
    a.highFivesGuys();
    return 0;
}
