#include "PhoneBook.hpp"

void PhoneBook::add_contact ( void )
{
	contacts[lastContact].fill();
	lastContact++;
	if (lastContact > 7)
		lastContact = 0;
}

void PhoneBook::search_contact ( void )
{
	int i;

	i = 0;
	if (!lastContact)
		return ;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "index| firstname| lastname| nickname" << std::endl;
	while (i < 8 && contacts[i].isfull())
	{
		std::cout << std::left << std::setw(5) << i << '|';
		contacts[i++].print();
	}
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Write the index of the contact: ";
	std::cin >> i;
	if (!i || (i < 0 || i > 8) || !(contacts[i].isfull()))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "No contact with that index!" << std::endl;
	}
	else
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		contacts[i - 1].printFull();
	}
	return ;
}

PhoneBook::PhoneBook ( void )
{
	lastContact = 0;
}

PhoneBook::~PhoneBook ( void )	{	}
