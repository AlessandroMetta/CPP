#include "phonebook.hpp"

void Contact::add_contact ( void )
{
	std::cout << "Write first name: ";
	std::cin >> Contact::first_name;
	std::cout << "Write last name: ";
	std::cin >> Contact::last_name;
	std::cout << "Write nickname: ";
	std::cin >> Contact::nickname;
	std::cout << "Write phone number: ";
	std::cin >> Contact::phone_number;
	std::cout << "Write the darkest secret: ";
	std::cin >> Contact::darkest_secret;
	return ;
}

