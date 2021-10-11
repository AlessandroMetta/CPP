#include "Contact.hpp"

void Contact::fill ( void )
{
	std::cout << "\tWrite first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "\tWrite last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "\tWrite nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "\tWrite phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "\tWrite the darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	full = 1;
	return ;
}

void Contact::print ( void )
{
	std::cout << std::right << std::setw(10) << std::setfill('.') << this->first_name << '|';
	std::cout << std::right << std::setw(10) << std::setfill('.') << this->last_name << '|';
	std::cout << std::right << std::setw(10) << std::setfill('.') << this->nickname << '|' << std::endl;
}

void Contact::printFull ( void )
{
	std::cout << "First Name:\t" << this->first_name << std::endl;
	std::cout << "Last Name:\t" << this->last_name << std::endl;
	std::cout << "Nickname:\t" << this->nickname << std::endl;
	std::cout << "Phone number:\t" << this->phone_number << std::endl;
	std::cout << "Secret:\t" << this->darkest_secret << std::endl;
}

bool Contact::isfull ( void )
{
	if (full == 1)
		return 1;
	else
		return 0;
}

Contact::Contact ( void )
{
	full = 0;
}

Contact::~Contact ( void )	{	}