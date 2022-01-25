#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	this->Type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Miao" << std::endl;
}
