/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:38:35 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:38:55 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () 
{
	std::cout << "Constructor called " << std::endl;
}

Zombie::~Zombie ( void )
{
	std::cout << "Deconstructor called by " << this->_name << std::endl;
}

void Zombie::announce ( void )
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name ( std::string name )
{
	this->_name = name;
}

