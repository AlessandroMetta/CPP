#include "PhoneBook.hpp"

void PhoneBook::add_contact ( void )
{
	std::cout << "\tWrite first name: ";
	std::cin >> this->first_name;
	std::cout << "\tWrite last name: ";
	std::cin >> this->last_name;
	std::cout << "\tWrite nickname: ";
	std::cin >> this->nickname;
	std::cout << "\tWrite phone number: ";
	std::cin >> this->phone_number;
	std::cout << "\tWrite the darkest secret: ";
	std::cin >> this->darkest_secret;
	return ;
}

void Phonebook::search_contact ( void )
{
	std::cout << std::right << std::setw(10) << std::setfill('.') << this->first_name;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill('.') << this->last_name;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill('.') << this->nickname;
	std::cout << std::endl;
}

Contact::Contact ( void )
{
	return;
}

Contact::~Contact ( void )
{
	return;
}

