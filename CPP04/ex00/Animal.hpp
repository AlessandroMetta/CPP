#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		void makeSound() const;
};

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		void makeSound() const;
};

#endif
