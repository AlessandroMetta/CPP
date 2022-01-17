#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__
# include "Contact.hpp"

class PhoneBook {
	private:
		int		_lastContact;
		Contact	_contacts[8];
	public:
		PhoneBook ( void );
		~PhoneBook ( void );
		void add_contact ( void );
		void search_contact ( void );
};


#endif
