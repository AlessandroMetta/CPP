#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
     public:
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & src );
        ~ScavTrap();
        ScavTrap & operator=( ScavTrap const & rhs );
        void guardGate();
        void attack( std::string const & target );
};

std::ostream & operator<<( std::ostream & filestream, ScavTrap const & obj);

#endif
