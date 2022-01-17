/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:52:53 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:54:47 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string init_type) : _type(init_type) {	}

Weapon::~Weapon () { }

void Weapon::setType (std::string const type)
{
	this->_type = type;
	std::cout << "Weapon updated" << std::endl;
}

std::string const & Weapon::getType ( void )
{
	return(this->_type);
}
