#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
	
		std::cout << dog->getType() << ": ";
		dog->makeSound();
		std::cout << cat->getType() << ": ";
		cat->makeSound();
		meta->makeSound();
		delete dog;
		delete cat;
		delete meta;
	}
	{
		const WrongAnimal* wrongmeta = new WrongAnimal();
		const WrongAnimal* wrongcat = new WrongCat();
		std::cout << wrongcat->getType() << ": ";
		wrongcat->makeSound();
		wrongmeta->makeSound();
		delete wrongcat;
		delete wrongmeta;
	}
	return 0;
}

