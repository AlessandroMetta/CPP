#include "phonebook.hpp"
#include <iomanip>

void Contact::add_contact ( void )
{
	std::cout << "Write first name: ";
	std::cin >> this->first_name;
	std::cout << "Write last name: ";
	std::cin >> this->last_name;
	std::cout << "Write nickname: ";
	std::cin >> this->nickname;
	std::cout << "Write phone number: ";
	std::cin >> this->phone_number;
	std::cout << "Write the darkest secret: ";
	std::cin >> this->darkest_secret;
	return ;
}

void Contact::search_contact ( void )
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

