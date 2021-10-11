#include "PhoneBook.hpp"

void PhoneBook::add_contact ( void )
{
	contacts[index].fill();
	index++;
	lastContact++;
	if (index > 7)
		index = 0;
}

void PhoneBook::search_contact ( void )
{
	int i;

	i = 0;
	if (!lastContact)
		return ;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "index|firstname|lastname|nickname" << std::endl;
	while (contacts[i].isfull())
	{
		std::cout << std::left << std::setw(3) << i << '|';
		contacts[i++].print();
	}
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Write the index of the contact: ";
	std::cin >> i;
	contacts[i].printFull();
}

PhoneBook::PhoneBook ( void )
{
	lastContact = 0;
	index = 0;
}

PhoneBook::~PhoneBook ( void )	{	}
