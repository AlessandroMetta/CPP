#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp'"

class Contact {
	private:
		int		lastContact;
		Contact	contact[8];
	public:
		PhoneBook ( void );
		~PhoneBook ( void );
		void add_contact ( void );
		void search_contact ( void );
};


#endif
