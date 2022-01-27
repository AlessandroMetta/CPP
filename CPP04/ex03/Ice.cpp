#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice Default Constructor" << std::endl;
	this->type = "Ice";
}

Ice::Ice(const Ice & src)
{
	std::cout << "Ice Copy Constructor" << std::endl;
}
	
Ice::~Ice()
{
	std::cout << "Ice Destructor" << std::endl;
}

Ice & Ice::operator=(const Ice & rhs)
{
	std::cout << "Ice Assignment called" << std::endl;
	return *this;
}

AMateria* Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	return (new AMateria());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}
