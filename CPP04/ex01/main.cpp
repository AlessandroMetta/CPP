#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define NUM 5

int main()
{
	{
		Animal* arca[NUM];

// half of the Animal Array has to be fill by Dogs
		for(int i = 0; i < NUM/2; i++)
			arca[i] = new Dog();

// half of the Animal Array has to be fill by Cats
		for(int i = NUM/2; i < NUM; i++)
			arca[i] = new Cat();

// delete every single Animal
		for(int i = 0; i < NUM; i++)
			delete arca[i];
	}
	{
		Cat* kitty1 = new Cat();
		Cat* kitty2 = new Cat();

		for (int i = 0; i < 5; i++)
			kitty1->setIdea("Hello Bulls", i);

		*kitty2 = *kitty1;
		std::cout << "Check on the Cat copy deep" << std::endl;
		std::cout << "kitty1 add: " << &kitty1 << "; kitty2 add: " << &kitty2 << std::endl;
		std::cout << "kitty1 brain add: " << &(kitty1->getBrain());
		std::cout << "; kitty2 brain add: " << &(kitty2->getBrain()) << std::endl;
		for (int i = 0; i < kitty1->getSize(); i++)
			std::cout << "kitty1 idea " << i << ": " << kitty1->getIdea(i) << std::endl;
		for (int i = 0; i < kitty2->getSize(); i++)
			std::cout << "kitty2 idea " << i << ": " << kitty2->getIdea(i) << std::endl;
		delete kitty1;
		delete kitty2;
	}
	return 0;
}
