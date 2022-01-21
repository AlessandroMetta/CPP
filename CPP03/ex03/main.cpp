#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	DiamondTrap sc( "mina" );
	sc.attack( "soldato" );
	sc.takeDamage( 8 );
	std::cout << sc;
	sc.beRepaired( 3 );
	std::cout << sc;
	sc.takeDamage( 8 );
	sc.whoAmI();
	std::cout << sc;
	return 0;
}
