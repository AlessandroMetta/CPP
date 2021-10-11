#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
	private:
		int		lastContact;
		Contact	contacts[8];
	public:
		PhoneBook ( void );
		~PhoneBook ( void );
		void add_contact ( void );
		void search_contact ( void );
};


#endif
