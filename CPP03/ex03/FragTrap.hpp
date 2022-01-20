#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
     public:
        FragTrap( std::string name );
        FragTrap( FragTrap const & src );
        ~FragTrap();
        FragTrap & operator=( FragTrap const & rhs );
        void highFivesGuys( void );
        void attack( std::string const & target );
};

std::ostream & operator<<( std::ostream & filestream, FragTrap const & obj);

#endif
