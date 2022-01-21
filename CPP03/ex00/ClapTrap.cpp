#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Defaut constructor called" << std::endl;
	this->Name = name;
	this->Hitpoints = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->Name = src.getName();
	this->Hitpoints = src.getHitpoints();
	this->Energy_points = src.getEnergy_points();
	this->Attack_damage = src.getAttack_damage();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "ClapTrap Assegnation operator called" << std::endl;
	this->Name = rhs.getName();
	this->Hitpoints = rhs.getHitpoints();
	this->Energy_points = rhs.getEnergy_points();
	this->Attack_damage = rhs.getAttack_damage();
	return (*this);
}

void ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->getName() << " attack ";
	std::cout << target << ", causing " << this->getAttack_damage();
	std::cout << " points of damage!" << std::endl; 
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if ((int)this->Hitpoints - (int)amount < 0)
		this->Hitpoints = 0;
	else
		this->Hitpoints = this->Hitpoints - amount;
	std::cout << "ClapTrap " << this->getName() << " has been hit!";
	std::cout << " It lose " << amount << " Hitpoints!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	this->Hitpoints = this->Hitpoints + amount;
	std::cout << "ClapTrap " << this->getName() << " has been repaired,";
	std::cout << " has earned " << amount << " Hitpoints!" << std::endl;
}

std::string ClapTrap::getName( void ) const
{
	return (this->Name);
}

unsigned int ClapTrap::getHitpoints( void ) const
{
	return (this->Hitpoints);
}

unsigned int ClapTrap::getEnergy_points( void ) const
{
	return (this->Energy_points);
}

unsigned int ClapTrap::getAttack_damage( void ) const
{
	return (this->Attack_damage);
}

std::ostream & operator<<( std::ostream & o, ClapTrap const & cl )
{
	o << "ClapTrap " << cl.getName() << " has " << cl.getHitpoints();
	o << " Hitpoints, " << cl.getEnergy_points() << " Energy points and ";
	o << cl.getAttack_damage() << " Attack demage" << std::endl;
	return o;
}

