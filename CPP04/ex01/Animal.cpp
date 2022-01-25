#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
	this->Type = "none";
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Undefined Sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->Type;
}
