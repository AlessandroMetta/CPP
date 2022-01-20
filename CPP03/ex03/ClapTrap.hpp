#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__
# include <iostream>

class ClapTrap {
    protected:
        std::string _name;
        int _hitpoints;
        int _energy_points;
        int _attack_damage;
    public:
        ClapTrap();
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
