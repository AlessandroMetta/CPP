#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = src.getName();
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor constructor called" << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
    if (this == &rhs)
        return(*this);
    std::cout << "Deconstructor constructor called" << std::endl;
    this->_name = rhs.getName();
    return (*this);
}

void ClapTrap::attack( std::string const & target )
{
    std::cout << "ClapTrap " << this->getName() << " attack ";
    std::cout << target << ", causing " << this->getAttakDamage();
    std::cout << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << "ClapTrap " << this->getName() << " has been attack with a damage of ";
    std::cout << amount << " points!" << std::endl;
}

void ClapTrap::beRepaired ( unsigned int amount )
{
    std::cout << "ClapTrap " << this->getName() << " has been repaired, earning ";
    std::cout << amount << " points!" << std::endl;
}

std::string ClapTrap::getName () const
{
    return (this->_name);
}

unsigned int ClapTrap::getHitpoints () const
{
    return (this->_hitpoints);
}

unsigned int ClapTrap::getEnergypoints () const
{
    return (this->_energy_points);
}

unsigned int ClapTrap::getAttakDamage () const
{
    return (this->_attack_damage);
}
