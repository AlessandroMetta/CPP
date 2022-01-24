#include "Animal.hpp"

Animal::Animal()
{
	this->type = "none";
	std::cout << "Animal Constructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Undefined sound" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woff-Woff!" << std::endl;
}

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaoooooo!" << std::endl;
}

