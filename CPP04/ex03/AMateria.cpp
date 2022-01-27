#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Default Constructor Called" << std::endl;
	type = type;
}

AMateria::AMateria(const AMateria & src)
{
	std::cout << "AMateria Copy Constructor Called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

virtual void AMateria::use(ICharacter& target)
{
	
}

