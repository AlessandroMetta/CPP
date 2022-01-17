/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:52:08 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:52:09 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string const name, Weapon & weapon) : _name(name),
				_weapon(weapon)
{
	std::cout << "Constructor called by " << getName() << std::endl;
}

HumanA::~HumanA ()
{
	std::cout << "Deconstructor called by " << getName() << std::endl;
}

std::string const HumanA::getName ( void )
{
	return ( this->_name );
}

void HumanA::attack ( void )
{
	std::cout << getName() << " attacks with his " << _weapon.getType() << std::endl;
}
