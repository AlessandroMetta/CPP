/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:37:04 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:37:09 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie ( std::string name );
		~Zombie ( void );
		void announce ( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
