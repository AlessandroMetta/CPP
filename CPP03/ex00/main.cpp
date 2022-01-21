#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap cl( "mina" );
	cl.attack( "soldato" );
	cl.takeDamage( 8 );
	std::cout << cl;
	cl.beRepaired( 3 );
	std::cout << cl;
	cl.takeDamage( 8 );
	std::cout << cl;
	return 0;
}
