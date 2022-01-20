#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__
# include <iostream>

class ClapTrap {
    private:
        std::string _name;
        int _hitpoints = 10;
        int _energy_points = 10;
        int _attack_damage = 0;
    public:
        ClapTrap( std::string name );
        ClapTrap( ClapTrap const & src );
        ~ClapTrap();
        ClapTrap & operator=( ClapTrap const & rhs );
        void attack( std::string const & target );
        void takeDamage( unsigned int ammount );
        void beRepaired ( unsigned int ammount );
        std::string getName () const;
        unsigned int getHitpoints () const;
        unsigned int getEnergypoints () const;
        unsigned int getAttakDamage () const;
};

#endif
