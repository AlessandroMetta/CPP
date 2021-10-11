#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		bool		full;
	public:
		Contact ( void );
		~Contact ( void );
		void	print ( void  );
		void	printFull ( void  );
		void	fill ( void );
		bool	isfull ( void );
};


#endif
