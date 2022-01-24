#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "none";
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Undefined sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Beeeeeee!" << std::endl;
}
