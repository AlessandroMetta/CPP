#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
     public:
        FragTrap( std::string name );
        FragTrap( FragTrap const & src );
        ~FragTrap();
        FragTrap & operator=( FragTrap const & rhs );
        void highFivesGuys( void );
};

std::ostream & operator<<( std::ostream & filestream, FragTrap const & obj);

#endif
