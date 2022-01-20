#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src.getName() )
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    this->_name = src.getName();
    this->_hitpoints = src.getHitpoints();
    this->_energy_points = src.getEnergypoints();
    this->_attack_damage = src.getAttakDamage();
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructor called" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
{
    if (this == &rhs)
        return (*this);
    std::cout << "FragTrap Copy constructor called" << std::endl;
    this->_name = rhs.getName();
    this->_hitpoints = rhs.getHitpoints();
    this->_energy_points = rhs.getEnergypoints();
    this->_attack_damage = rhs.getAttakDamage();
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap gives you high fives!" << std::endl;
}

std::ostream & operator<<( std::ostream & filestream, FragTrap const & obj)
{
    filestream << "FragTrap " << obj.getName();
    filestream << " hitpoints: "<< obj.getHitpoints();
    filestream << ", energy points: "<< obj.getEnergypoints();
    filestream << " and attack damage: "<< obj.getAttakDamage();
    filestream << std::endl;
    return filestream; 
}
