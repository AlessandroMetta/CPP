#include "FragTrap.hpp"
#include <iostream>

int main()
{
	FragTrap sc( "mina" );
	sc.attack( "soldato" );
	sc.takeDamage( 8 );
	std::cout << sc;
	sc.beRepaired( 3 );
	std::cout << sc;
	sc.takeDamage( 8 );
	sc.highFivesGuys();
	std::cout << sc;
	return 0;
}
