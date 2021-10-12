#include "Contact.hpp"

void Contact::fill ( void )
{
	std::cout << "\tWrite first name: ";
	std::getline(std::cin, this->_first_name);
	std::cout << "\tWrite last name: ";
	std::getline(std::cin, this->_last_name);
	std::cout << "\tWrite nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "\tWrite phone number: ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "\tWrite the darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
	_full = 1;
	return ;
}

void formatoutput ( std::string str )
{
	if ( str.length() > 10 )
		std::cout << std::setw(10) << str.substr(0, 9).append(".") << '|';
	else
		std::cout << std::right << std::setw(10) << std::setfill(' ') << str << '|';
}

void Contact::print ( void )
{
	formatoutput(this->_first_name);
	formatoutput(this->_last_name);
	formatoutput(this->_nickname);
	std::cout << std::endl;
}

void Contact::printFull ( void )
{
	std::cout << "First Name:\t" << this->_first_name << std::endl;
	std::cout << "Last Name:\t" << this->_last_name << std::endl;
	std::cout << "Nickname:\t" << this->_nickname << std::endl;
	std::cout << "Phone number:\t" << this->_phone_number << std::endl;
	std::cout << "Secret:\t\t" << this->_darkest_secret << std::endl;
}

bool Contact::isfull ( void )
{
	if (_full == 1)
		return 1;
	else
		return 0;
}

Contact::Contact ( void )
{
	_full = 0;
}

Contact::~Contact ( void )	{	}