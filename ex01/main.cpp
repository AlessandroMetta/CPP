#include "PhoneBook.hpp"

int main ( void )
{
	PhoneBook Phonebook;
	std::string command;

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
		std::getline(std::cin, command);
		if (!command.compare("EXIT"))
			return 0;
		else if (!command.compare("ADD"))
			Phonebook.add_contact();
		else if (!command.compare("SEARCH"))
			Phonebook.search_contact();
		else
			std::cout << "Command not found" << std::endl;
	}
}
