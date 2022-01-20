#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ),  FragTrap( name ), ScavTrap( name )
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap( src.getName() + "_clap_name" ), FragTrap( src.getName() ), ScavTrap( src.getName() )
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    this->_name = src.getName();
    this->_hitpoints = this->FragTrap::getHitpoints();
    this->_energy_points = this->ScavTrap::getEnergypoints();
    this->_attack_damage = this->FragTrap::getAttakDamage();
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Deconstructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs )
{
    if (this == &rhs)
        return (*this);
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    this->_name = rhs.getName();
    this->_hitpoints = this->FragTrap::getHitpoints();
    this->_energy_points = this->ScavTrap::getEnergypoints();
    this->_attack_damage = this->FragTrap::getAttakDamage();
    return *this;
}

void DiamondTrap::attack( std::string const & target )
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoami()
{
    std::cout << "DiamondTrap name: " << this->_name << std::endl;
    std::cout << "ClapTrap name: " << this->ClapTrap::getName() << std::endl;
}

std::ostream & operator<<( std::ostream & filestream, DiamondTrap const & obj)
{
    filestream << "DiamondTrap " << obj.getName();
    filestream << " hitpoints: "<< obj.getHitpoints();
    filestream << ", energy points: "<< obj.getEnergypoints();
    filestream << " and attack damage: "<< obj.getAttakDamage();
    filestream << std::endl;
    return filestream; 
}
