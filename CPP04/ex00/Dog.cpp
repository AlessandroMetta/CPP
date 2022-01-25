#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->Type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woff-Woff" << std::endl;
}

