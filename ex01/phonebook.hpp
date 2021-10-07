#ifndef PHONEBOOK_H
# define PHONEBOOK_h
# include <iostream>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact ( void );
		~Contact ( void );
		void add_contact ( void );
		void search_contact ( void );
};


#endif
