/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:52:14 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:52:39 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string const name ) : _name(name), _weapon(NULL)
{
	std::cout << "Constructor called by " << getName() << std::endl;
}

HumanB::~HumanB ()
{
	std::cout << "Deconstructor called by " << getName() << std::endl;
}

std::string const HumanB::getName ( void )
{
	return (this->_name);
}

void HumanB::setWeapon ( Weapon &newWeapon )
{
	this->_weapon = &newWeapon;
	std::cout << getName() << "'s weapon updated" << std::endl;
}

void HumanB::attack ( void )
{
	if (!this->_weapon)
		std::cout << getName() << " has no weapon" << std::endl;
	else
		std::cout << getName() << " attacks with his " << this->_weapon->getType() << std::endl;
}
