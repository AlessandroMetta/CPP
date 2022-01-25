#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	this->Type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miao" << std::endl;
}
