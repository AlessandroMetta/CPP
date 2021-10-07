#include "first_class.hpp"
#include <iostream>

Sample::Sample( void )
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void )
{
	std::cout << "Deconstructor called" << std::endl;
	return;
}
