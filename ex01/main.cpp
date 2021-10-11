#include "phonebook.hpp"

int main ( void )
{
	Contact Phonebook[8];
	std::string command;
	int i;
	int s;

	i = 0;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "--- Welcome into PhoneBook ---" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "You can use this command:" << std::endl;
	std::cout << "ADD for add a new contact" << std::endl;
	std::cout << "SEARCH for search a contact" << std::endl;
	std::cout << "EXIT for exit" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	while (1)
	{
		std::cout << "Write a command: ";
		std::cin >> command;
		if (!command.compare("EXIT"))
			return 0;
		else if (!command.compare("ADD"))
		{
			Phonebook[i].add_contact();
			i++;
			if (i > 7)
				i = 0;
		}
		else if (!command.compare("SEARCH"))
		{
			s = 0;
			std::cout << "------------------------------------" << std::endl;
			while (s < i)
			{
				std::cout << std::left << std::setw(3) << s << "|";
				Phonebook[s].print_contacts();
				s++;
			}
			std::cout << "------------------------------------" << std::endl;
		}
		else
			std::cout << "Command not found" << std::endl;
	}
}
