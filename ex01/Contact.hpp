#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__
# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		bool		_full;
	public:
		Contact ( void );
		~Contact ( void );
		void	print ( void  );
		void	printFull ( void  );
		void	fill ( void );
		bool	isfull ( void );
};


#endif
