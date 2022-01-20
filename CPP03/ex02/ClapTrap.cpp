#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Claptrap Default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
    std::cout << "Claptrap Copy constructor called" << std::endl;
    this->_name = src.getName();
    this->_hitpoints = src.getHitpoints();
    this->_hitpoints = src.getEnergypoints();
    this->_hitpoints = src.getAttakDamage();
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap Deconstructor called" << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
    if (this == &rhs)
        return(*this);
    std::cout << "Claptrap Assignment called" << std::endl;
    this->_name = rhs.getName();
    this->_hitpoints = rhs.getHitpoints();
    this->_hitpoints = rhs.getEnergypoints();
    this->_hitpoints = rhs.getAttakDamage();
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
    int newValue;

    newValue = this->getHitpoints() - amount;
    if (newValue < 0)
        this->_hitpoints = 0;
    else
        this->_hitpoints = newValue;
    std::cout << "ClapTrap " << this->getName() << " has been attack with a damage of ";
    std::cout << amount << " points!" << std::endl;
}

void ClapTrap::beRepaired ( unsigned int amount )
{
    this->_hitpoints = this->_hitpoints + amount;
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

std::ostream & operator<<( std::ostream & filestream, ClapTrap const & obj)
{
    filestream << "ClapTrap " << obj.getName() << " hitpoint value: "<< obj.getHitpoints() << std::endl;
    return filestream; 
}
