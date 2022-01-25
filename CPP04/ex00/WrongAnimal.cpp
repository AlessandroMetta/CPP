#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
	this->Type = "Wrongnone";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Undefined Wrong Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->Type;
}
