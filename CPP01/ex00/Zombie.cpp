/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:37:12 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:37:23 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( std::string name ) : _name(name)
{
	std::cout << "Constructor called by " << this->_name << std::endl;
}

Zombie::~Zombie ( void )
{
	std::cout << "Deconstructor called by " << this->_name << std::endl;
}

void Zombie::announce ( void )
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
