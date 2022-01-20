#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string _name;
	public:
		DiamondTrap( std::string name );
        DiamondTrap( DiamondTrap const & src );
        ~DiamondTrap();
        DiamondTrap & operator=( DiamondTrap const & rhs );
        void whoami( void );
        void attack( std::string const & target );
};

std::ostream & operator<<( std::ostream & filestream, DiamondTrap const & obj);

#endif
