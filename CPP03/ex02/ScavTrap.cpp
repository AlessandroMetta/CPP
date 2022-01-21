#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src.getName() )
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    this->_name = src.getName();
    this->_hitpoints = src.getHitpoints();
    this->_energy_points = src.getEnergypoints();
    this->_attack_damage = src.getAttakDamage();
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
    if (this == &rhs)
        return (*this);
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    this->_name = rhs.getName();
    this->_hitpoints = rhs.getHitpoints();
    this->_energy_points = rhs.getEnergypoints();
    this->_attack_damage = rhs.getAttakDamage();
    return *this;
}

void ScavTrap::attack( std::string const & target )
{
    std::cout << "ScavTrap " << this->getName() << " attack ";
    std::cout << target << ", causing " << this->getAttakDamage();
    std::cout << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << "has enterred in Gate keeper mode" << std::endl;
}

std::ostream & operator<<( std::ostream & filestream, ScavTrap const & obj)
{
    filestream << "ScavTrap " << obj.getName();
    filestream << " hitpoints: "<< obj.getHitpoints();
    filestream << ", energy points: "<< obj.getEnergypoints();
    filestream << " and attack damage: "<< obj.getAttakDamage();
    filestream << std::endl;
    return filestream; 
}
