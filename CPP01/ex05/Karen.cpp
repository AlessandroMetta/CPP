/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:59:39 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 13:01:01 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen () 
{
	std::cout << "Constructor Call" << std::endl;
}

Karen::~Karen ()
{
	std::cout << "Deconstructor Call" << std::endl;
}

void Karen::debug ( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info ( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t";
	std::cout << " put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning ( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << " coming here for years and you just started working here last month." << std::endl;
}

void Karen::error ( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain (std::string level)
{
	int i = -1; 
	std::string str_option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
	void (Karen::*ft[4])( void ) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	while (++i < 4)
	{
		if (str_option[i] == level)
			(this->*ft[i])();
	}
}
