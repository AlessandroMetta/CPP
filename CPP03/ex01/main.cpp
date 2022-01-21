#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap sc( "mina" );
	sc.attack( "soldato" );
	sc.takeDamage( 8 );
	std::cout << sc;
	sc.beRepaired( 3 );
	std::cout << sc;
	sc.takeDamage( 8 );
	sc.guardGate();
	std::cout << sc;
	return 0;
}
