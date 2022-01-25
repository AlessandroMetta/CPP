#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor called" << std::endl;
	this->Type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Beeeee" << std::endl;
}

