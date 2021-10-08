#include "phonebook.hpp"

int main ( void )
{
	Contact Phonebook[8];
	std::string command;
	int i;
	int s;

	i = 0;
	std::cout << "--- Welcome into PhoneBook ---" << std::endl;
	std::cout << ".............................." << std::endl;
	std::cout << "You can use this command:" << std::endl;
	std::cout << "ADD for add a new contact" << std::endl;
	std::cout << "SEARCH for search a contact" << std::endl;
	std::cout << "EXIT for exit" << std::endl;
	while (1)
	{
		std::cout << "Write a command: ";
		std::cin >> command;
		if (!command.compare("ADD"))
		{
			Phonebook[i].add_contact();
			if (i < 8)
				i++;
			else
				i = 0;
		}
		if (!command.compare("SEARCH"))
		{
			s = 0;
			while (s < i)
			{
				std::cout << s << "|";
				Phonebook[s].search_contact();
				s++;
			}
		}
		if (!command.compare("EXIT"))
			return 0;
	}
}
