#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->Type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Woff-Woff" << std::endl;
}

