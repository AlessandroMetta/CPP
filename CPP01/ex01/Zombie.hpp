/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:38:40 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:38:51 by ametta           ###   ########.fr       */
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
		Zombie ();
		~Zombie ( void );
		void announce ( void );
		void set_name ( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif
