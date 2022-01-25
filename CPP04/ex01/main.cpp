#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define NUM 100

int main()
{
	Animal* arca[NUM];

	for(int i = 0; i < NUM/2; i++)
		arca[i] = new Dog();
	for(int i = NUM/2; i < NUM; i++)
		arca[i] = new Cat();
	for(int i = 0; i < NUM; i++)
		delete arca[i];
	return 0;
}
