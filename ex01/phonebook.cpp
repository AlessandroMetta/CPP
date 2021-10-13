#include "PhoneBook.hpp"

void PhoneBook::add_contact ( void )
{
	_lastContact %= 8;
	_contacts[_lastContact].fill();
	_lastContact++;
}

void PhoneBook::search_contact ( void )
{
	int i;

	i = 0;
	std::cout << " --------------------------------------" << std::endl;
	std::cout << "|index|firstname |lastname  |nickname  |" << std::endl;
	while (i < 8)
	{
		if (_contacts[i].isfull())
		{
			std::cout << std::left << std::setw(5) << '|' << i + 1 << '|';
			_contacts[i].print();
		}
		i++;
	}	
	std::cout << " --------------------------------------" << std::endl;
	std::cout << "Write the index of the contact: ";
	std::cin >> i;
	if ((i < 1 || i > 8) || !(_contacts[i - 1].isfull()))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "No contact with that index!" << std::endl;
	}
	else
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		_contacts[i - 1].printFull();
	}
	return ;
}

PhoneBook::PhoneBook ( void ) : _lastContact( 0 )	{	}

PhoneBook::~PhoneBook ( void )	{	}
