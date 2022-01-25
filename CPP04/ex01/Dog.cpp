#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->Type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog & src)
{
	std::cout << "Dog Constructor operator" << std::endl;
	Animal::operator=(src);
	Dog::operator=(src);
}

Dog & Dog::operator=(const Dog & rhs)
{
	if (this == &rhs)
		return *this;
	brain = rhs.brain;
	this->Type = rhs.getType();
	return *this;
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
