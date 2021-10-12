#include "PhoneBook.hpp"

void PhoneBook::add_contact ( void )
{
	_contacts[_lastContact].fill();
	_lastContact++;
	if (_lastContact > 7)
		_lastContact = 0;
}

void PhoneBook::search_contact ( void )
{
	int i;

	i = 0;
	if (!_lastContact)
		return ;
	std::cout << " --------------------------------------" << std::endl;
	std::cout << "|index|firstname |lastname  |nickname  |" << std::endl;
	while (i < 8 && _contacts[i].isfull())
	{
		std::cout << std::left << std::setw(5) << '|' << i << '|';
		_contacts[i++].print();
	}
	std::cout << " --------------------------------------" << std::endl;
	std::cout << "Write the index of the contact: ";
	std::cin >> i;
	if ((i < 0 || i > 8) || !(_contacts[i].isfull()))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "No contact with that index!" << std::endl;
	}
	else
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		_contacts[i].printFull();
	}
	return ;
}

PhoneBook::PhoneBook ( void )
{
	_lastContact = 0;
}

PhoneBook::~PhoneBook ( void )	{	}
