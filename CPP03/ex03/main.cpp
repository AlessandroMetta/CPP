#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	DiamondTrap sc( "mina" );
	std::cout << sc;
	sc.attack( "soldato" );
	sc.takeDamage( 8 );
	std::cout << sc;
	sc.beRepaired( 3 );
	std::cout << sc;
	sc.takeDamage( 8 );
	sc.whoAmI();
	return 0;
}
